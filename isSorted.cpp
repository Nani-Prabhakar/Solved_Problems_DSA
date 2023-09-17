#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> v, int i) {
    if (i == v.size() - 1) {
        return true;
    }
    return v[i] <= v[i + 1] && isSorted(v, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4, 7, 6, 7, 8, 9};
    cout << isSorted(v, 0);
    return 0;
}
