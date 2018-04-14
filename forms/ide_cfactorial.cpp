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

    QString codeQT = ui->EditorC->toPlainText();
    string CodeString = codeQT.toStdString();
    if(CodeString != ""){
        ui->StepButton->setVisible(true);
        ui->StopButton->setVisible(true);
        listaExpresiones = new List<Expresion>();
        dividirEnExpresiones(CodeString);
    }
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

void IDE_CFactorial::on_StopButton_clicked()
{
    contador = 0;
    ui->StopButton->setVisible(false);
    ui->StepButton->setVisible(false);
}

/*
 * Toma una expresión y la separa en partes
 * para luego ser validada
 */
void IDE_CFactorial::separarExpresion(string codigo, int nivel) {
    string temp, tipo = "", nombre = "", valor = "";

    //Saca el tipo de variable
    int x = 0;
    while (codigo[x] != ' ') {
        tipo = tipo + codigo[x];
        x++;
    }

    /*
     * Continua aumentando para validar los espacios vacíos
     */
    while (codigo[x] == ' ') {
        x++;
    }

    //Saca la variable nombre de la expresion
    while (codigo[x] != '=') {
        if (codigo[x] != ' ') {
            nombre = nombre + codigo[x];
            x++;
        } else {
            x++;
        }

    }

    x++;
    //Se asegura de saltar los espacios en blanco
    while (codigo[x] == ' ') {
        x++;
    }


    //Saca el valor asignado de la expresión
    while (x < codigo.size()) {
        valor = valor + codigo[x];
        x++;
    }

    Expresion nueva;
    nueva.setAtributos(nombre, tipo, valor, nivel);
    listaExpresiones->Insert(nueva);

}

/*
 * Llama al método encargado de separar la expresion en partes
 * y luego aumenta el contador global
 */
void IDE_CFactorial::on_StepButton_clicked()
{
    if(validarExpresion(listaExpresiones->Get(contador))){
        cout<<"Se cumplió"<<endl;
    }else{
        cout<<"No se cumplió"<<endl;
    }

    contador++;

    if(contador == listaExpresiones->length()){
        ui->StepButton->setVisible(false);
        ui->StopButton->setVisible(false);
        contador = 0;
    }
}

/*
 * Valida si una cadena de caracteres es un número
 */
bool IDE_CFactorial::esNumero(string valor) {
    {
        for(int x = 0; x<valor.size(); x++ )
        {
            // En cuanto un caracter no sea numérico
            if( '0' > valor[x] || '9' < valor[x] ) {
                return false;
            }
        }

        return true;
    }

}

/*
 * Valida la que la expresión esté correcta con sus
 * partes
 */
bool IDE_CFactorial::validarExpresion(Expresion expresion) {
    //Validación básica de la estructura de una variable entera
    if (expresion.getTipo() == "int") {
        cout << "Tipo entero detectado." << endl;
        if (expresion.getNombre() == "") {
            cout << "El nombre no es válido" << endl;
            return false;
        } else {
            cout << "El nombre es válido." << endl;
            if (expresion.getValor() == "") {
                cout << "Hace falta el valor" << endl;
                return false;
            } else {
                if (esNumero(expresion.getValor())) {
                    //cout<<"Se generará el JSON"<<endl;
                    generarJson(expresion.getTipo(), expresion.getNombre(), expresion.getValor());
                    return true;
                } else {
                    for (int x = 0; x < contador; x++) {
                        if (expresion.getValor() == listaExpresiones->Get(x).getNombre() &&
                            expresion.getTipo() == listaExpresiones->Get(x).getTipo() &&
                            expresion.getNivel() >= listaExpresiones->Get(x).getNivel()) {
                            generarJson(expresion.getTipo(), expresion.getNombre(),
                                        listaExpresiones->Get(x).getValor());
                            return true;
                        }
                    }


                    return false;
                }
            }
        }
    } else if (expresion.getTipo() == "char") {
        cout << "Tipo char detectado." << endl;
        if (expresion.getNombre() == "") {
            cout << "El nombre no es válido" << endl;
            return false;
        } else {
            cout << "El nombre es válido." << endl;
            if (expresion.getValor() == "") {
                cout << "Hace falta el valor" << endl;
                return false;
            } else {
                string validacion = "";
                validacion =
                        validacion + expresion.getValor()[0] + expresion.getValor()[expresion.getValor().length() - 1];
                if (validacion == "''" && expresion.getValor().length() == 3) {
                    generarJson(expresion.getTipo(), expresion.getNombre(), expresion.getValor());
                    return true;
                } else {
                    for (int x = 0; x < contador; x++) {
                        if (expresion.getValor() == listaExpresiones->Get(x).getNombre() &&
                            expresion.getTipo() == listaExpresiones->Get(x).getTipo() &&
                            expresion.getNivel() >= listaExpresiones->Get(x).getNivel()) {

                            generarJson(expresion.getTipo(), expresion.getNombre(),
                                        listaExpresiones->Get(x).getValor());
                            return true;
                        }
                    }
                    return false;


                }
            }
        }
    } else if (expresion.getTipo() == "double") {
        cout << "Tipo double detectado." << endl;
        if (expresion.getNombre() == "") {
            cout << "El nombre no es válido" << endl;
            return false;
        } else {
            cout << "El nombre es válido." << endl;
            if (expresion.getValor() == "") {
                cout << "Hace falta el valor" << endl;
                return false;
            } else {
                if (esNumero(expresion.getValor())) {
                    //cout<<"Se generará el JSON"<<endl;
                    generarJson(expresion.getTipo(), expresion.getNombre(), expresion.getValor());
                    return true;
                } else {
                    cout << "No es numero" << endl;
                    return false;
                }
            }
        }

    } else if (expresion.getTipo() == "long") {
        cout << "Tipo long detectado." << endl;
        if (expresion.getNombre() == "") {
            cout << "El nombre no es válido" << endl;
            return false;
        } else {
            cout << "El nombre es válido." << endl;
            if (expresion.getValor() == "") {
                cout << "Hace falta el valor" << endl;
                return false;
            } else {
                if (esNumero(expresion.getValor())) {
                    //cout<<"Se generará el JSON"<<endl;
                    generarJson(expresion.getTipo(), expresion.getNombre(), expresion.getValor());
                    return true;
                } else {
                    for (int x = 0; x < contador; x++) {
                        if (expresion.getValor() == listaExpresiones->Get(x).getNombre() &&
                            expresion.getTipo() == listaExpresiones->Get(x).getTipo() &&
                            expresion.getNivel() >= listaExpresiones->Get(x).getNivel()) {
                            generarJson(expresion.getTipo(), expresion.getNombre(),
                                        listaExpresiones->Get(x).getValor());
                            return true;
                        }
                    }
                    return false;
                }
            }
        }
        return false;
    }
}


//Genera el JSON que se le va a pasar al servidor
void IDE_CFactorial::generarJson(string tipo, string nombre, string valor) {
    Json::Value event;
    event["tipo"] = tipo;
    event["nombre"] = nombre;
    event["valor"] = valor;

    if(tipo == "char"){
        event["tamanio"] = "1";
    }else if(tipo == "int"){
        event["tamanio"] = "4";
    }else if(tipo == "double" | tipo == "long"){
        event["tamanio"] = "8";
    }
    QString mensaje = QString::fromStdString(event.toStyledString());

    ui->StdOut->append(mensaje);


    /*string message = event.toStyledString();
    Client *nuevo = new Client;
    nuevo->crear();
    nuevo->enviar();*/

    string op = event.toStyledString();

    std::cout << op << std::endl;


}

void IDE_CFactorial::dividirEnExpresiones(string Texto) {
    string actual = "";
    int nivel = 0;

    for(int x = 0; x<Texto.size(); x++){
        if(Texto[x] == ';') {
            x++;
            while(Texto[x]== ' '){
                x++;
            }
            separarExpresion(actual, nivel);
            actual = "";
        }else if(Texto[x] == '{'){
            x++;
            while(Texto[x]== ' '){
                x++;
            }
            nivel++;
            actual = "";
        }else if(Texto[x] == '}'){
            x++;
            while(Texto[x]== ' '){
                x++;
            }
            nivel--;
            actual = "";
        }else{
            actual = actual+Texto[x];
        }
    }

    cout<<endl;
    for(int x = 0; x<listaExpresiones->length(); x++){
        Expresion t = listaExpresiones->Get(x);
        cout<<"Tipo: "<<t.getTipo()<<" Nombre: "<<t.getNombre()<< " Valor: "<<t.getValor()<<" Nivel: "<<t.getNivel()<<endl;
    }
}