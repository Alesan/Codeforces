#include <iostream>
#include <vector>
#include <algorithm>
#define DOMINO_SIZE_X 2

bool isZero(int i) {
    return i == 0;
}

using namespace std;

void transpose(vector<vector<int> > &b) {
    if (b.empty()) return;

    vector<vector<int> > trans_vec(b[0].size(), vector<int>());

    for (auto & i : b) {
        for (int j = 0; j < i.size(); j++) {
            trans_vec[j].push_back(i[j]);
        }
    }
    b = trans_vec;
}

int exercise(vector<vector<int> > &matrix){
    int res = 0;

    for (vector<int> &p:matrix) {
        int c = std::count_if(p.begin(), p.end(), isZero);
        res += c / DOMINO_SIZE_X;

        if (c == 0) continue;

        for (int i = 1; i < c; i+=2) {
            if (p[i-1] == 0 &&p[i]==0) {
                p[i-1] = 1;
                p[i]=1;
            }
        }
    }
    return res;
}
int main() {
    int M, N;
    int res;
    cin >> M >> N;
    vector<vector<int> > matrix(N, vector<int>(M, 0));

    res=exercise(matrix);
    transpose(matrix);
    res+=exercise(matrix);

    cout << res << endl;
    return 0;
}
