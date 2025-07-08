// Map
#include<iostream>
#include<string>
#include<map>


int main(){

    std::map<std::string, int> age;

    age["Luis"] = 14;
    age["Felipe"] = 25;
    age["Miranda"] = 48;
    age["Silda"] = 0;

    for(const auto& person : age){
        std::cout << "Name: " << person.first << ", age: " << person.second <<"\n";
    }

    return 0;
}