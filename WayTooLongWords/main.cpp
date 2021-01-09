#include <iostream>
#include <vector>

std::string algoritmo(std::string& palabra) {

    std::string nueva_palabra;

    if (palabra.length() >10){
        //Número de caracteres menos inicio y final
        int remaning_words = palabra.length() - 2;

        nueva_palabra.push_back(palabra.at(0));
        nueva_palabra.append(std::to_string(remaning_words));
        nueva_palabra.push_back(palabra.at(palabra.length()-1));
        return nueva_palabra;
    }

    return palabra;
}

int main() {
    int n;
    std::vector<std::string> input;

    //Número de palabras
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string insertar;
        std::cin >> insertar;
        input.push_back(insertar);

    }

    for (std::string &elem : input) {
        std::cout << algoritmo(elem) << std::endl;
    }
    return EXIT_SUCCESS;
}
