#include <iostream>

int main() {
    std::string input;
    std::cin >> input;

    if (input.length()>0){
        input[0]=::toupper(input[0]);
    }

    std::cout<< input;

    return EXIT_SUCCESS;
}
