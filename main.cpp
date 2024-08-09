#include <iostream>
using namespace std;

int number1;
int number2;
int opNum;
int result;

int main() {
    cout << "1. sayiyi girin: ";
    cin >> number1;
    
    cout << "2. sayiyi girin: ";
    cin >> number2;
    
    
    cout << "1 (Toplama)" << endl;
    cout << "2 (Cikarma)" << endl;
    cout << "3 (Carpma)" << endl;
    cout << "4 (Bolme)" << endl;
    cout << "5 (Kalan Alma)" << endl;
    cout << "Operatoru secin: ";
    cin >> opNum;
    
    if (opNum == 1) {
        result = number1 + number2;
    }
    
    else if (opNum == 2) {
        result = number1 - number2;
    }
    
    else if (opNum == 3) {
        result = number1 * number2;
    }
    
    else if (opNum == 4) {
        result = number1 / number2;
    }
    else if (opNum == 5) { 
        result = number1 % number2;
    }
    
    else {
        cout << "Bunu Yapamazsin!";
    }
    
    cout << result;
}
