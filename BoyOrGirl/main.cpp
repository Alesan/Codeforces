#include <iostream>
#include <set>


int main() {
    std::set<char> characters;
    std::string line;

    std::getline(std::cin,line);

    for(char& c : line){
        characters.insert(c);
    }

    if(characters.size() % 2 ==0){
        std::cout <<"CHAT WITH HER!";
    }else{
        std::cout << "IGNORE HIM!";
    }
    return EXIT_SUCCESS;
}
