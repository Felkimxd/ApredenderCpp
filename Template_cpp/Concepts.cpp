#include <iostream>
#include <concepts>

using namespace std;

template <typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

template <Numeric T>
T add(T a, T b)
{
    return a + b;
}

int main()
{

    cout << "=================== Concepts ==============================" << endl;
    cout << add(7, 5) << endl;     // Should print 7
    cout << add(8.9, 0.2) << endl; // Should print 5.6
    // cout << add("a", "b");        // Should fail at compile time
    cout << "==========================================================" << endl;
}