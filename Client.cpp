
#include "Client.h"
#include "MetaData.h"
#include <iostream>

#include<stdio.h>
#include<string.h>    //strlen
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr
#include <unistd.h>


using namespace std;
int socket_desc;
struct sockaddr_in server;
int Client::crear() {

    //Crear socket
    socket_desc = socket(AF_INET , SOCK_STREAM , 0); //devuelve un identicador para el socket
    if (socket_desc == -1) //Si el identificador es -1, no se pudo crear
    {
        printf("No se pudo crear el socket\n");
    }else{
        printf("Socket creado con éxito\n");
    }

    server.sin_addr.s_addr = inet_addr("192.168.100.14"); // ID para la conexion (ping)
    server.sin_family = AF_INET; //Socket tipo atp
    server.sin_port = htons( 8888 ); //puerto de comunicacion

    conectar();

    close(socket_desc); // Cerrar la comunicación


    return 0;
}

int Client::conectar() {
    //Connect to remote server
    if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0)
    {
        puts("Error al conectar\n");
        return 1;
    }

    puts("Conectado\n");
    char json[98] = {"soy un json"};
    enviar (json);

}

int Client::enviar(char json[]){
    //Enviar datos
    char *message;
    message = const_cast<char *>("Hola gente");
    if( send(socket_desc , json , strlen(json) , 0) < 0)
    {
        puts("Envio fallido\n");
        return 1;
    }
    puts("Datos enviados con éxito\n");
    recibir();


}

int Client::recibir(){

    //Recibir una respuesta del servidor
    char  server_reply[2000];
    if( recv(socket_desc, server_reply , 2000 , 0) < 0)
    {
        puts("Datos recibidos con éxito\n");
    }
    puts("La respuesta:\n");
    puts(server_reply);
    MetaData *meta = new MetaData();
    meta->parseo(server_reply);


}
