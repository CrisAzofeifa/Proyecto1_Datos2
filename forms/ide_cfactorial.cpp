#include "ide_cfactorial.h"
#include "ui_ide_cfactorial.h"

/*
 * Inicializa la interfaz
 */
IDE_CFactorial::IDE_CFactorial(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::IDE_CFactorial)
{

    ui->setupUi(this);
    ui->StepButton->setVisible(false);
    ui->StopButton->setVisible(false);
    

}

IDE_CFactorial::~IDE_CFactorial()
{
    delete ui;
}

/*
 * Evento del botón correr
 * Separa lo escrito en el editor en una lista de expresiones
 * Asigna esta lista de expresiones a un atributo
 */
void IDE_CFactorial::on_RunButton_clicked() {
    ui->StepButton->setVisible(true);
    ui->StopButton->setVisible(true);

    QString texto = ui->EditorC->toPlainText();

    QStringList line = texto.split("\n", QString::SkipEmptyParts);

    expresiones = line;

}


//Limpia la consola StdOut
void IDE_CFactorial::on_ClearStdOut_clicked()
{
    ui->StdOut->clear();
}

//Limpia el application log
void IDE_CFactorial::on_ClearAppLog_clicked()
{
    ui->ApplicationLog->clear();
}

/*
 * Toma una expresión y la separa en partes
 * para luego ser validada
 */
void IDE_CFactorial::separarExpresion(QString codigo) {
    string code = codigo.toStdString();
    string temp, tipo = "", nombre = "", valor = "";

    //Saca el tipo de variable
    int x = 0;
    while (code[x] != ' ') {
        tipo = tipo + code[x];
        x++;
    }

    /*
     * Continua aumentando para validar los espacios vacíos
     */
    while (code[x] == ' ') {
        x++;
    }

    //Saca la variable nombre de la expresion
    while (code[x] != '=') {
        if (code[x] != ' ') {
            nombre = nombre + code[x];
            x++;
        } else {
            x++;
        }

    }

    x++;
    //Se asegura de saltar los espacios en blanco
    while (code[x] == ' ') {
        x++;
    }


    //Saca el valor asignado de la expresión
    while (x < code.size() - 1) {
        valor = valor + code[x];
        x++;
    }

    /*
     *Llama a la función encargada de validar que la
     * estructura se cumpla
     */
    if(validarExpresion(tipo,nombre,valor)){
        cout<<"Se cumplió we";
        generarJson(tipo, nombre, valor, "4");
    }else{
        cout<<"no se cumplió";
    }

    /*
     * Si no hay mas lineas quita los botones de Step y run
     * y reincia el contador global y la lista de expresiones
     */
    if (contador == expresiones.size() - 1) {
        contador = 0;
        expresiones.clear();
        ui->StepButton->setVisible(false);
        ui->StopButton->setVisible(false);
    }


}

/*
 * Llama al método encargado de separar la expresion en partes
 * y luego aumenta el contador global
 */
void IDE_CFactorial::on_StepButton_clicked()
{
    separarExpresion(expresiones.at(contador));
    contador++;
}

/*
 * Valida si una cadena de caracteres es un número
 */
bool IDE_CFactorial::esNumero(string valor) {
    {
        for(int x = 0; x<valor.size(); x++ )
        {
            // En cuanto un caracter no sea numérico
            if( '0' > valor[x] || '9' < valor[x] )
                return false;
        }

        return true;
    }

}

 /*
  * Valida la que la expresión esté correcta con sus
  * partes
  */
bool IDE_CFactorial::validarExpresion(string tipo, string nombre, string valor) {
    //Validación básica de la estructura de una variable entera
    if (tipo == "int") {
        cout<<"Tipo entero detectado."<<endl;
        if (nombre == "") {
            cout<<"El nombre no es válido"<<endl;
            return false;
        } else {
            cout<<"El nombre es válido."<<endl;
            if (valor == "") {
                cout<<"Hace falta el valor"<<endl;
                return false;
            } else {
                if (esNumero(valor)) {
                    //cout<<"Se generará el JSON"<<endl;
                    return true;
                } else {
                    cout << "No es numero" << endl;
                    return false;
                }
            }
        }
    }else{
        return false;
    }
}

//Genera el JSON que se le va a pasar al servidor
void IDE_CFactorial::generarJson(string tipo, string nombre, string valor, string tamanio) {
    Json::Value event;
    event["tipo"] = tipo;
    event["nombre"] = nombre;
    event["valor"] = valor;
    event["tamanio"] = tamanio;

    std::cout << event << std::endl;


}
