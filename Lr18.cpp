#include <iostream>
#include <cmath>
double myroot(int x) {
    return sqrt(x);
}
double myroot(long x) {
    return sqrt(x);
}
double myroot(double x) {
    return sqrt(x);
}
using namespace std;
int main() { 
 int Short = 36;
 double Fraction = 36.7;
 long number = 25L;
 cout <<"Корінь з цілого числа:";
cout <<myroot(Short) << endl;
  cout <<"Корінь з дробового числа:";
cout <<myroot(Fraction) << endl;
  cout <<"Корінь з довгого числа:";
 cout <<myroot(number) << endl;
  return 0;
}