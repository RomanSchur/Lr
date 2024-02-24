#include <iostream>
#include <ctime>
class time_and_date {
private:
    int year, month, day, hour, minute;

public:
    // Конструктор класу, що отримує поточний системний час і дату
    time_and_date() {
        // Отримання поточного системного часу
        time_t now = time(0);
        tm *ltm = localtime(&now);
        
        // Заповнення змінних класу поточними значеннями часу і дати
        year = 1900 + ltm->tm_year;
        month = 1 + ltm->tm_mon;
        day = ltm->tm_mday;
        hour = ltm->tm_hour;
        minute = ltm->tm_min;
    }

    // Функція для виведення годин, хвилин та дати на екран
    void print_time_and_date() {
        std::cout << "Поточний час і дата: ";
        std::cout << year << "-" << month << "-" << day << " ";
        std::cout << hour << ":" << minute << std::endl;
    }
};

int main() {
    // Створення об'єкту класу time_and_date, який автоматично отримує поточний час і дату
    time_and_date obj;
    
    // Виклик функції для виведення годин, хвилин та дати на екран
    obj.print_time_and_date();
    
    return 0;
}
