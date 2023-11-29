#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int numero;

    cout << "Introduce los números que quieras añadir al vector (0 para terminar):" << std::endl;

    while(true){
    cin >> numero;
        if(numero == 0){
            break;
    }
        numeros.push_back(numero);
    }

    cout << ""
}
