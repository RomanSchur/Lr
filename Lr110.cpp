#include <iostream>
using namespace std;
char min(char a, char b) {
 return (a < b) ? a : b;
}
int min(int a, int b) {
 return (a < b) ? a : b;
}
double min(double a, double b) {
 return (a < b) ? a : b;
}
int main() {
   char a, b;  
   int c, d;  
   double e, f;
    cout << "Введіть символьні елементи для порівняння: ";
    cin >> a >> b;
    cout << "Менший символ: " << min(a, b) << ":\n";
    cout << "Введіть цілочисельні елементи: ";
    cin >> c >> d;
    cout << "Менше число: " << min(c, d) << ":\n";
    cout << "Введіть число з плаваючою точкою: ";
    cin >> e >> f;
    cout << "Менше число: " << min(e, f) << ":\n";
    return 0;
}
