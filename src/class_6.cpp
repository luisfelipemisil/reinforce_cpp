#include <iostream>
#include <string>
#include <vector>

class Pessoa{
    public:
        std::string person_name;
        Pessoa(std::string name_choosed) : person_name(name_choosed) {}
        void falar() const{
            std::cout << "My name is " << person_name << "\n";
        }
};

int main(){
    
    std::vector<Pessoa> grupo = {
        Pessoa("Madyr"),
        Pessoa("Luise")
    };

    grupo.emplace_back(Pessoa("Luis"));
    grupo.emplace_back(Pessoa("Felipe"));
    grupo.emplace_back(Pessoa("Miranda"));

    for(auto& pessoa : grupo){
        pessoa.falar();
    }

    return 0;
}