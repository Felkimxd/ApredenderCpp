#include <iostream>
#include <concepts>

using namespace std;

template <typename T>
concept Numeric = std::integral<T> || std::floating_point