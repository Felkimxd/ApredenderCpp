#include <iostream>
#include<utility>
#include<math.h>

int main(){

    std::cout << "Hello World" << std::endl;
    std::cout << "Welcome to" << std::endl;

    for (char ch : "CS106L")
    {
        std::cout << ch << std::endl;
    }

    return 0;

}

/*
Se puede clasificar los lenguajes de programcion con a si usan un interperete o un compilador para ejecutar el codigo fuente en codigo de maquina. 

Python por ejemplo es un lenguaje interpretado, lo que significa que el codigo fuente se ejecuta directamente por el interprete.
Mientras que C ++ es un lenguaje compilado, lo que significa que el codigo fuente se compila en codigo de maquina antes de ejecutarse.

El compilador hace que el codigo sea mas eficiente y seguro que el interprete, pero el interprete es mas facil de usar y mas flexible.

Cuando se usa un lenguaje compilad se puede diferenciar dos fases en la ejecucion del programa: la compilacion y la ejecucion.


*/
