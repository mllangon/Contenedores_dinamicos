#include <iostream>
#include <boost/lexical_cast.hpp>

using namespace std;

int main() {
    string numberStr = "1234";

    try {
        int number = boost::lexical_cast<int>(numberStr);
        cout << "Número convertido: " << number << endl;
    } catch (const boost::bad_lexical_cast& e) {
        cerr << "Error de conversión: " << e.what() << endl;
    }

    return 0;
}