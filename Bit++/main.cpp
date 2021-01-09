#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::vector<std::string> operaciones;
    int output = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::string op;
        std::cin >> op;
        operaciones.push_back(op);
    }

    for (std::string &op:operaciones) {
        int idx_sum = op.find("+");
        int idx_sub = op.find("-");

        if (idx_sum > -1 && op.compare(idx_sum, 2, "++") == 0) {
            output += 1;
        } else if (idx_sub > -1 && op.compare(idx_sub, 2, "--") == 0) {
            output -= 1;
        }
    }

    std::cout << output << std::endl;

    return 0;
}
