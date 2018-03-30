#include <QApplication>
#include "forms/ide_cfactorial.h"
#include "mserver.h"

/*
void *servidor_thread(void *arg)
{
    pthread_exit(NULL);
}*/
int main(int argc, char* argv[]) {

    QApplication a(argc, argv);
    IDE_CFactorial w;
    w.show();




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





