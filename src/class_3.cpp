#include <iostream>
#include <memory>

// smart pointers
int main() {
    std::unique_ptr<int> p = std::make_unique<int>(42);
    std::cout << *p << "\n";
    return 0;
}