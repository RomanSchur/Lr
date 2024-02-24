#include <iostream>
using namespace std;

int main() {
    int hours;
    double hourspain;
    double sum;
    
    // Введення кількості відпрацьованих годин
    cout << "Введіть кількість відпрацьованих годин: ";
    if (!(cin >> hours) || hours < 0) {
        cout << "Помилка: Невірне значення для кількості годин." << endl;
        return 1;
    }
    
    // Введення погодинної оплати
    cout << "Введіть погодинну оплату: ";
    if (!(cin >> hourspain) || hourspain < 0) {
        cout << "Помилка: Невірне значення для погодинної оплати." << endl;
        return 1;
    }
    
    sum = hours * hourspain;
    
    cout << "Сумарна заробітна плата: " << fixed << setprecision(2) << sum << endl;
    
    return 0;
}
