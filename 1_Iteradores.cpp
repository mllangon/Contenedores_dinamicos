#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;
    int numero;

    cout << "Introduce los numeros que quieras introducir al vector (0 para terminar):" << std::endl;

    while(true){
    cin >> numero;
        if(numero == 0){
            break;
    }
        numeros.push_back(numero);
    }

    cout << "Los vectores son: " <<endl;
    for(auto iter = numeros.begin(); iter != numeros.end(); iter++){
        cout << *iter << " ";
    }

    return 0;
}
