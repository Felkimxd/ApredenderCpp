/*
Caracteres:
char: UTF-8
char8_t: Caracteres Unicode
char16_t: Caracteres Unicode
char32_t: Caracteres Unicode
wchar_t: Caracteres Unicode

Entero: (Se puede agregar unsigned para quitar la parte negativa)
short
int
long
long long

Decimales:
float: 7 digitos
double: 15 digitos
long double: 19 digitos

Booleanos:
bool: true/false  Cualquier numero/0

*/

#include<iostream>

using namespace std;

int main(){

    const string nombre = "Felipe";

    int edad{21};
    /*
    Existen varias formas para inicializar una variable
    int edad = 21
    int edad (21)

    Todas tendrian el mismo resultado
    */
    double salario;

    cout << "Introduce el salario del empleado: ";

    cin >> salario;
    
    cout << "Introduce la edad del empleado: ";

    cin >> edad;

    cout << "Datos del empleado: " << endl;

    cout << "Nombre: " << nombre << endl << "Edad: " << edad << endl << "Salario: " << salario; 

    // Se concatenan strings con las flechas << 

    return 0;
}