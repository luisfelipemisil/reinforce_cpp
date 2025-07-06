#include <iostream>
#include <vector>
#include <string>


class Person{
    public:
        std::string name;
        Person(std::string choosed_name) : name(choosed_name) {}
        // virtual alow the function to be override by others.
        virtual void talk() const{
            std:: cout << "My name is " << name << "\n";
        }

        virtual ~ Person() {}

};

// inheriting the person class
class Student: public Person{
    public:
        std::string course;
        Student(std::string& name, std::string course) : Person(name), course(course) {}
    
    void talk() const override {
        std::cout << "My name is " << name << " and I'm studying " << course << "\n";
    }
};

// inheriting the person class
class Professor: public Person {
    public:
        std::string className;
        Professor(std::string& name, std::string className) : Person(name), className(className) {}
    
    void talk() const override {
        std::cout << "My name is " << name << " and I teach " << className << "\n";
    }

};

// inheriting the person class
class Worker: public Person{
    public:
        std::string function;
        Worker(std::string& name, std::string function) : Person(name), function(function) {}

        void talk() const override {
            std::cout << "My name is " << name << " and I work with " << function << "\n";
        }
};

int main(){
    // create a vector with a unique pointer to each class
    std::vector<std::unique_ptr<Person>> group;

    group.emplace_back(std::make_unique<Person>("Luis"));
    group.emplace_back(std::make_unique<Student>("Felipe", "engineer"));
    group.emplace_back(std::make_unique<Professor>("Miranda", "Calculus I"));
    group.emplace_back(std::make_unique<Worker>("Silva", "a cleaner"));

    for (const auto& person : group){
        person -> talk();
    }
    return 0;
}