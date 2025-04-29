#include <iostream>

int main(){

    //pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1; //Genera un numero random del 0 al numero por el que se extrae el modulo, se le suma 1 para que el 0 no sea tomado en cuenta

    std::cout << num1;

    return 0;

}