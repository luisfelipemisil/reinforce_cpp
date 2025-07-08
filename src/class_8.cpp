#include <iostream>
#include <string>

template <typename T>
T maximo (T a, T b) {
    return (a > b) ? a : b ;
}


int main(){

    std::cout << maximo(2 , 5) << "\n";
    std::cout << maximo(1.2, 0.9) << "\n";
    std::cout << maximo(std::string("abc"), std::string("xyz")) << "\n";

    return 0;
}