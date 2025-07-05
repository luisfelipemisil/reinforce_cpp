#include <iostream>
#include <string>

// my first class in cpp
class Pessoa {
    public:
    std::string person_name;
    // when the class Pessoa is inicialized with only one atribute, it will be put on the string nome
    Pessoa(std::string name_choosed) : person_name(name_choosed) {}
    void falar(){
        std::cout << "Hi, my name is " << person_name << "\n";
    }
};

int main(){

    Pessoa p("Luis");
    p.falar();

    return 0;

}