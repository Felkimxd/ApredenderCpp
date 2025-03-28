#include <iostream>

template<int N>
    struct Fibonacci{

    static constexpr int value_F = Fibonacci<N-1>::value_F + Fibonacci<N-2>::value_F;
};

template <>
    struct Fibonacci<0> {

    static constexpr int value_F = 0;
};

template <>
struct Fibonacci<1>
{

    static constexpr int value_F = 1;
};


int main(){

    //the coun of numbers initiate with the case 0 

    constexpr int result = Fibonacci<23>::value_F;
    std::cout << "============================ Fibonnacci Templates ==========================" << std::endl;
    std::cout << result << std::endl;
    std::cout << "==========================================================================" << std::endl;
}