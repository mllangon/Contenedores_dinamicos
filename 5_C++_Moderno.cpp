#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

int main() {
    auto square = [](int n) { return n * n; };
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Numeros principales:" << endl;
    for_each(numbers.begin(), numbers.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    auto squaredNumbers = make_unique<vector<int>>();

    for (int n : numbers) {
        squaredNumbers->push_back(square(n));
    }

    cout<<"Cuadrados de los numeros: " << endl;
    for_each(squaredNumbers->begin(), squaredNumbers->end(), [](int n) {
        cout << n << " "; });
    cout<<endl;

    return 0;
}