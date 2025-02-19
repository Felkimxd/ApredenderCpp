#include<cmath>
#include<iostream>
#include<utility>

std::pair<bool, std::pair<double, double>> cuadraticTuple;

bool checkSolution(double a, double b, double c){

    double result;

    result = pow(b, 2) - (4 * a * c);

    if (result >= 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}


void solveQuadratic(double a, double b, double c){

    cuadraticTuple.first = checkSolution(a, b, c);
    cuadraticTuple.second.first = 0;
    cuadraticTuple.second.second = 0;

    if (checkSolution(a,b,c))
    {

        cuadraticTuple.second.first = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cuadraticTuple.second.second = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    }

}

int main()
{

    double coeficient1, coeficient2, coeficient3;
    std::cout << "a: ";
    std::cin >> coeficient1;
    std::cout << "b: ";
    std::cin >> coeficient2;
    std::cout << "c: ";
    std::cin >> coeficient3;

    solveQuadratic(coeficient1, coeficient2, coeficient3);

    if (cuadraticTuple.first)
    {
        std::cout << "Solutions: " << std::endl;
        std::cout << "x1: " << cuadraticTuple.second.first << " ," << "x2: " << cuadraticTuple.second.second << std::endl;
    }
    else
    {
        std::cout << "Solutions doesn't exist!! " << std::endl;
    }

    return 0;
}