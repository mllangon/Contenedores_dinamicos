#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {5, 3, 8, 1, 2, 7, 4, 6};
    sort(numeros.begin(), numeros.end());
    cout << "Numeros ordenados: " << endl;

