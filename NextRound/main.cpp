#include <iostream>
#include <vector>
#include <algorithm>

class Condition {
    int than;
public:
    Condition(int th) : than(th) {}

    bool operator()(int score) {
        return score >= than && score > 0;
    }
};

int main() {

    int n, k;
    std::vector<int> scores;
    std::cin >> n >> k;
    int curr_number;
    for (int i = 0; i < n; i++) {
        std::cin >> curr_number;
        scores.push_back(curr_number);
    }

    int res = std::count_if(scores.begin(), scores.end(),
                            Condition(scores.at(k - 1)));

    std::cout << res << std::endl;

    return EXIT_SUCCESS;
}
