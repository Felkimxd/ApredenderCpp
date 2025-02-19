/*
Es una clase dela libreria estandar de C++. Esta clase crea
estructuras contenedoras para almacenar datos secuenciales

Los elementos almacenados son del mismo tipo

Los vectores pueden crecer o decrecer en tamanio de forma dinamica

Tienen mas metodos para saber cosas sobre el vector

Se alamacenan los valores en posiciones contiguas de memoria

*/

#include<iostream>
#include<vector> //Para incluir vectores hay que usar la directiva vector

using namespace std;

int main(){
    // vector <tipo de dato> nombre del vector
    vector <int> records (5); //la palabra vector es una palabra reservada para las estructura vector

    vector <char> letras (10); //Se puede inicializar vecctores con espacio determinad pero NO ES NECESARIO

    vector <double> salarios (350, 2125.50); //Primero se pone el numero de elementos que contendra el vector, y el segundo parametro es de que se llenaran todos los espacios

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << salarios[i] << endl;

    // }

    int i = 0;

    while (i<salarios.size())
    {
        cout << salarios[i] << endl;
        i += 1;
    }
    

    return 0;
}