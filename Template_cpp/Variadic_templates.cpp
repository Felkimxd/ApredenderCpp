#include <iostream>

template <typename T>
void printAll(T t)
{
    std::cout << t << std::endl;
}

// Base Case of print function where we are printing 
//only an argument of type T.

//Its importante to note that the base case of the function is
//the one that takes only one argument, and it is the one that
//will stop the recursion.



//Template has two arguments here, one is the type of the first argument
//and the other is the type of the rest of the arguments.

template <typename T, typename... Args>
void printAll(T t, Args... args)
{
    std::cout << t << " ";
    printAll(args...);
}
//That is the recursive case of the function, where we print the first 
//argument and then call the function again with the rest of the 
//arguments. This will continue until there are no more arguments to print.

//Don't care what type of arguments are passed to the function,
//we can use variadic templates to print all of them.

int main()
{
    printAll('c', 2.662, "Felipe", true); // Should print: 1 2.5 Hello c
}