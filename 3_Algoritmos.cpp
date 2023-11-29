#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {5, 3, 8, 1, 2, 7, 4, 6};
    sort(numeros.begin(), numeros.end());
    cout << "Numeros ordenados: " << endl;

    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;
    auto maxElement = max_element(numeros.begin(), numeros.end());
    cout << "El numero mas grande es: " << *maxElement << endl;
    auto minElement = min_element(numeros.begin(), numeros.end());
    cout << "El numero mas pequeno es: " << *minElement << endl;

    return 0;
}

