/*
La variable map es como un diccionario en python, funciona igual solo que tenemos que poner de que tipo sera nuestra clave y de que tipo 
será la informacion que guardaremos para cada key

*/

#include<iostream>
#include<map>

using namespace std;

int main(){
    //Uniform initialization of map

    map<string, int> ages{ //Inicializacion de un tipo de dato map
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35}};

    //Accessing map elements

    cout << "Alice's age: " << ages["Alice"] << endl;
    cout << "Bob's age: " << ages.at("Bob") << endl;

    return 0;
}