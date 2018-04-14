#include <QApplication>
#include "forms/ide_cfactorial.h"
#include "Client.h"
#include <jsoncpp/json/json.h>
#include <iostream>
#include <fstream>
#include<pthread.h>

using namespace std;
Client* cliente = new Client;
void *cliente_thread(void *arg) {
    cliente->crear();
}
int main(int argc, char* argv[]) {

    pthread_t c_thread;
    int ret;
    ret =  pthread_create(&c_thread, NULL, &cliente_thread, NULL);

    if(ret != 0) {
        printf("Error al crear el Thread del servidor\n");
        exit(EXIT_FAILURE);
    }

    QApplication a(argc, argv);
    IDE_CFactorial w;
    w.show();
    return a.exec();

    /*pthread_t c_thread;
    int ret;
    printf("Creando el Thread del servidor\n");
    ret =  pthread_create(&c_thread, NULL, &cliente_thread, NULL);
    if(ret != 0) {
        printf("Error al crear el Thread del servidor\n");
        exit(EXIT_FAILURE);
    }*/


    /*ifstream ifs("alice.json");
    Json::Reader reader;
    Json::Value obj;
    reader.parse(ifs, obj); // reader can also read strings
    cout << "Book: " << obj["book"].asString() << endl;
    cout << "Year: " << obj["year"].asUInt() << endl;
    const Json::Value& characters = obj["characters"]; // array of characters
    for (int i = 0; i < characters.size(); i++){
        cout << "    name: " << characters[i]["name"].asString();
        cout << " chapter: " << characters[i]["chapter"].asUInt();
        cout << endl;
    }

*/






  
}





