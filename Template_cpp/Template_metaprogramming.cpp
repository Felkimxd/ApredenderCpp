// metraprogramming help to solve the problem at compile time
// it is a way to write code that is executed at compile time

//That uses recursive template instantiation to generate a sequence of numbers at compile time.

#include <iostream>

template <int N>
struct Factorial
{
    static constexpr int value = N * Factorial<N - 1>::value; \

    /*
    Keyword:
    static: Becomes the structure accesible without instance it.
    constexpr: Indicates that you could calculate this in compilation time.
    */
};

/*
First part explanation:

template <int N> -> template that receives an N value in compilation time.
struct Factorial -> That will storage the value of the operation.

    Calculate revursively the N*Factorial<N-1>::value calling the structure with a minor value until achieve the base case
*/

template <>
struct Factorial<0>
{
    static constexpr int value = 1;
};

/*
Second part explanation:

template <> -> means "this is a specialization of the template, and we are not introducing new template parameters"
struct Factorial <0> -> Allows us to break the general definition made on the previous template charging the value N=0

    returtns the base value case static constexpr int value = 1 stoping the recursion.
*/

int main()
{
    constexpr int result = Factorial<10>::value; 

    /*
    Factorial <5>::value calculates the value on compilation time.
    constexpr int resultado = Factoria<5>::value obligate compler to evaluate the factorial before execute the program.

    ::value is accesing to the member "value" of the struct declared before.
    */
    std::cout << "============================ Factorial Templates ==========================" << std::endl;
    std::cout << result << std::endl; // Should print 120
    std::cout << "==========================================================================" << std::endl;
}