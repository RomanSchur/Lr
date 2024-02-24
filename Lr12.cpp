#include <iostream>
using namespace std;
int main() {
	double M;
	double F;
	double D;
	 while (true) {
	cout <<"Введіть кількість метрів для перетворення (для завершення введіть 0):";
	cin >> M;
	if (M == 0) {
            break;
        }
	F=M*3.28;
	D=F*12;
	cout <<"Значення метрів переведених у фути:"<<F<<endl;
	cout <<"Значення футів переведених у дюйми:"<<D<<endl;	
		}
	  return 0;
}
	
	