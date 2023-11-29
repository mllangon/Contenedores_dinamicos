#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int main() {
    auto square = [](int n) { return n * n; };
    vector<int> numbers = {1, 2, 3, 4, 5};
    auto squaredNumbers = make_unique<vector<int>>();

    for (int n : numbers) {
        squaredNumbers->push_back(square(n));
    }
}