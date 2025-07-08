#include<iostream>


template <typename T>
class Boxe{
    public:
        T value;

        Boxe(const T& value) : value(value) {};

        void show(){
            std::cout << "Value: " <<  value << "\n";
        }

};


int main(){

    Boxe<int> caixa1(42);
    Boxe<std::string> caixa2("product");

    caixa1.show();
    caixa2.show();

    return 0;
}