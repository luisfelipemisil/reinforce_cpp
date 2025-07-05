#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names = {"Luis", "Felipe", "Miranda"};
    for (const auto& name: names){
        std::cout << "Hello," << name << "\n";  
    }
    return 0;
}