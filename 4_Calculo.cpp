#include <iostream>
#include <valarray>
#include <cmath>

using namespace std;

int main() {
    valarray<double> numeros = {1.5, 2.5, 3.5, 4.5, 5.5};

    valarray<double> suma = numeros + 2.0;
    valarray<double> resta = numeros - 2.0;
    valarray<double> multiplicacion = numeros * 2.0;
    valarray<double> division = numeros / 2.0;
    valarray<double> raizCuadrada = sqrt(numeros);

    cout << "Numeros originales: ";
    for (double num : numeros) cout << num << " ";
    cout << endl;

    cout << "Suma: ";
    for (double num : suma) cout << num << " ";
    cout << endl;

    cout << "Resta: ";
    for (double num : resta) cout << num << " ";
    cout << endl;

    cout << "Multiplicacion: ";
    for (double num : multiplicacion) cout << num << " ";
    cout << endl;

    cout << "Division: ";
    for (double num : division) cout << num << " ";
    cout << endl;

    cout << "Raiz cuadrada: ";
    for (double num : raizCuadrada) cout << num << " ";
    cout << endl;

    return 0;
}