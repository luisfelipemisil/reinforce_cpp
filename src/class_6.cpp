#include <iostream>
#include <string>
#include <vector>

// Class person with the caracteristics.
class Person{
    public:
        std::string person_name;
        Person(std::string name_choosed) : person_name(name_choosed) {}
        void falar() const{
            std::cout << "My name is " << person_name << "\n";
        }
};


// Create a vector with 2 persons and then add 3 more people.
int main(){
    
    std::vector<Person> grupo = {
        Person("Madyr"),
        Person("Luise")
    };

    grupo.emplace_back(Person("Luis"));
    grupo.emplace_back(Person("Felipe"));
    grupo.emplace_back(Person("Miranda"));

    for(auto& pessoa : grupo){
        pessoa.falar();
    }

    return 0;
}