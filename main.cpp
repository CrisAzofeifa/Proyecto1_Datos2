#include <QApplication>
#include "forms/ide_cfactorial.h"
#include <jsoncpp/json/json.h>
#include <iostream>
#include <fstream>

using namespace std;
/*
void *servidor_thread(void *arg)
{
    pthread_exit(NULL);
}*/
int main(int argc, char* argv[]) {

    QApplication a(argc, argv);
    IDE_CFactorial w;
    w.show();

    ifstream ifs("alice.json");
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


/*
    pthread_t s_thread;
    int ret;
    printf("Creando el Thread del servidor\n");
    ret =  pthread_create(&my_thread, NULL, &servidor_thread, NULL);
    if(ret != 0) {
        printf("Error al crear el Thread del servidor\n");
        exit(EXIT_FAILURE);
    }*/



   return a.exec();
  
}





