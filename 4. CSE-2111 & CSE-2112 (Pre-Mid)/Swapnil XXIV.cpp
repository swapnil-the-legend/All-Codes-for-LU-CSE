#include <iostream>
#include <vector>
#include <string>

int main() {

    std::string name = "GCC 16.2.0";

    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Hello, World!" << '\n';
    std::cout << "Compiler: " << name << '\n';

    for (int number : numbers) {
        std::cout << number << " ";
    }

    std::cout << '\n';

    return 0;
}
