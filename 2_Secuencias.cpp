#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main() {
    list<double> decimallist = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<double, std::list<double>> decimalStack(decimallist);
    cout << "Elemento top: " << decimalStack.top() << endl;

    decimalStack.pop();

    decimalStack.push(6.6);
    cout << "Nuevo elemento top: " << decimalStack.top() << endl;

    cout << "Elementos restantes: " << endl;

    while (!decimalStack.empty()) {
        std::cout << decimalStack.top() << " ";
        decimalStack.pop();
    }
return 0;
}