#include <iostream>


char* watermelon(int w){
    bool cond=w%2==0 && w!=2;
    return const_cast<char *>(cond ? "YES" : "NO");
}

int main() {
    int w;
    std::cin >>w;
    std::cout << watermelon(w);
    return EXIT_SUCCESS;
}
