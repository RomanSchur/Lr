#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    int hours;
    double hourspain;
    double sum;      
    cout << "Введіть кількість годин праці: ";
	cin >> hours;
   if (hours < 0) {
    cout << "Невірне значення для кількості годин." << endl;
	 return 1;
	 }
    if (isdigit(hours)) {
		cout << "Потрібно було ввести число." << endl;
        return 1;    
   } 
    cout << "Введіть погодинну оплату: ";
	cin >> hourspain;
    if (hourspain < 0) {
    cout << "Невірне значення для погодинної оплати." << endl;
    return 1;
    }
    sum = hours * hourspain;     
    double Sum = round(sum * 100.0) / 100.0;    
    cout << "Сумарна заробітна плата: " << Sum << endl;    
    return 0;
}
