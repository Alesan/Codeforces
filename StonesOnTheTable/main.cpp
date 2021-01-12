#include <iostream>

int main() {
    int num_stones=0;
    int neighbor=0;
    std::string line;

    std::cin >> num_stones;
    std::cin.ignore();
    std::getline(std::cin,line);

    for(int i=1;i<=num_stones;i++){
        if(line[i-1]==line[i]){
            neighbor++;
        }
    }

    std::cout <<neighbor;

    return EXIT_SUCCESS;
}
