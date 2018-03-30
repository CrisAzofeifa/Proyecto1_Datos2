#ifndef IDE_CFACTORIAL_H
#define IDE_CFACTORIAL_H

#include <QMainWindow>
#include <iostream>
#include <jsoncpp/json/json.h>


using namespace std;

namespace Ui {
    class IDE_CFactorial;
}

class IDE_CFactorial : public QMainWindow
{
Q_OBJECT

public:
    explicit IDE_CFactorial(QWidget *parent = 0);
    ~IDE_CFactorial();

private slots:
    void on_RunButton_clicked();

    void on_ClearStdOut_clicked();

    void on_ClearAppLog_clicked();

    void separarExpresion(QString code);

    void on_StepButton_clicked();

    bool esNumero(string valor);

    bool validarExpresion(string tipo, string nombre, string valor);

    void generarJson(string tipo, string nombre, string valor, string tamanio);

private:
    Ui::IDE_CFactorial *ui;
    QStringList expresiones;
    int contador = 0;
};



#endif // IDE_CFACTORIAL_H
