#include <iostream>
#include <string>
using namespace std;
class card{
private:
    int number;
    string title;
    string name;
public:
    card(int num, string tit, string nam){
        number = num;
        title = tit;
        name = nam;
    }
    void store(){
        cout << "Введіть кількість копій:";
        cin >> number;
		cin.ignore();
        cout << "Введіть назву книги:";       
        getline(cin, title);
        cout << "Введіть ім'я автора:";
        getline(cin, name);
    }
    void show(){
        cout << "Кількість копій:" << endl;
        cout << number << endl;
        cout << "Назва кнниги:" << endl;
        cout << title << endl;
        cout << "Ім'я автора:" << endl;
        cout << name << endl;
    }
};
int main(){
    card information(0,"","");
    cout << "Введіть інформацію:" << endl;
    information.store();
    cout << "Надана інформація:" << endl;
    information.show();
    return 0;
}
