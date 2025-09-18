#include <iostream>
#include <string>
using namespace std;

int main() {
    // Сохраняем строку в переменной
    string str_1 = "AaBbCcDd";
    
    // Получаем строку только с заглавными буквами (каждый второй символ, начиная с 0)
    string uppercase = "";
    for (int i = 0; i < str_1.length(); i += 2) {
        uppercase += str_1[i];
    }
    
    // Получаем строку только со строчными буквами (каждый второй символ, начиная с 1)
    string lowercase = "";
    for (int i = 1; i < str_1.length(); i += 2) {
        lowercase += str_1[i];
    }
    
    // Выводим на экран требуемые строки
    cout << "str_1[::2] -> " << uppercase << endl << endl;
    cout << "str_1[1::2] -> " << lowercase << endl;
    
    return 0;
}