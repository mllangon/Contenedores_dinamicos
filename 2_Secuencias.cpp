#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main() {
    list<double> decimallist = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<double, std::list<double>> decimalStack(decimallist);
    cout << "Top elemento: " << decimalStack.top() << endl;

    decimalStack.pop();

    decimalStack.push(6.6);
    cout << "Top elemento: " << decimalStack.top() << endl;

    cout << "Elementos restantes: " << endl;

}