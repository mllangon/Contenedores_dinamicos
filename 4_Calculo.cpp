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


}