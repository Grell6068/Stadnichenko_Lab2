#include <iostream>
using namespace std;

int main() {
    int number1;
    cout << "Введіть перше число: ";
    cin >> number1;
    int number2;
    cout << "Введіть друге число: ";
    cin >> number2;
    
    while (number1 != number2) {
        if (number1 > number2) {
            number1 = number1 - number2;
        } 
        else {
            number2 = number2 - number1;
        }
    }
    
    int nsk = (number1 * number2 / number1);
    cout << nsk << endl;
    
    return 0;
}
