#include <iostream>

int main(){
    int* p = new int;
    *p = 10;
    std::cout << *p << "\n";
    delete p;
    
    int a = 10;
    // p aponta para a
    int* po = &a;
    std::cout << *po << "\n";

    *po = 20;

    std::cout << a << "\n";
    return 0;
}