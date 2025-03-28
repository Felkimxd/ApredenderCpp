#include <iostream>

using namespace std;

template <typename T>
T sum(T t)
{
    return t;
}
//this time the base case of the function is the one that takes 
//only one argument and it is the one that will stop the recursion.

template <typename T, typename... Args>
T sum(T t, Args... args)
{
    return t + sum(args...);
}

//This is the recursive case of the function, where we add the first
//argument and then call the function again with the rest of the arguments.


int main()
{
    cout << sum(5, 5, 5, 5, 5) << endl; // Should print 25
    cout << sum(1.5, 2.1, 3.9) << endl; // Should print 7.5
}