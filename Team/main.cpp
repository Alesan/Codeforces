#include <iostream>
#include <vector>
#include <algorithm>

struct Line {
    std::vector<int> input;
};

int main() {
    int n, petya, vasya, tonya, number_ones;
    std::vector<Line> lines;
    int count = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {

        Line line;

        std::cin >> petya >> vasya >> tonya;
        line.input.push_back(petya);
        line.input.push_back(vasya);
        line.input.push_back(tonya);
        lines.push_back(line);
    }

    for (Line &line: lines) {
        number_ones = std::count(line.input.begin(), line.input.end(), 1);
        if (number_ones > 1) count += 1;
    }
    std::cout << count << std::endl;
    return EXIT_SUCCESS;
}
