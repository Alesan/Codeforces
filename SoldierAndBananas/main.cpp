#include <iostream>

int main() {
    int k=0; // Cost of the first banana
    int n=0; // Initial number of dolars the soldier has
    int w=0; // Number of bananas he wants
    int res=0;
    int moneyBorrow=0;
    std::cin >> k >> n >> w;

    for(int i=1;i<=w;i++){
        res += i*k;
    }

    moneyBorrow= res - n;

    if (moneyBorrow<0)
        std::cout<< 0;
    else
        std::cout << moneyBorrow;

    return EXIT_SUCCESS;
}
