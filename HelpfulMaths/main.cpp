#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

int main() {


    std::vector<int> numeros;
    std::string line;
    int num = 0, number = 0;

    getline(std::cin, line);
    std::istringstream iss(line);

    while (iss >> number)
        numeros.push_back(number);

    std::sort(numeros.begin(), numeros.end(), std::less<int>());


    for(int i=0;i< numeros.size();i++){
        std::cout << numeros.at(i);
        if (i!=numeros.size()-1){
            std::cout << '+';
        }
    }

    return EXIT_SUCCESS;
}
