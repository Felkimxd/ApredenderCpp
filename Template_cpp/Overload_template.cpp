#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T maxValue(T a, T b, T c)
{
    return maxValue(a, maxValue(b, c));
}

int main()
{
    cout << "=================== Overload a Template Function ==============================" << endl;
    cout << maxValue(8, 2, 1) << endl;       // Should print 5
    cout << maxValue(4.5, 6.9, 0.9) << endl; // Should print 3.7
    cout << "===============================================================================" << endl;
}
