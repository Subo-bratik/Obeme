//НОМЕР 1
#include <vector>
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
    
    
    
    cout<<endl << endl << endl;
    //НОМЕР 2
    
    // Создаем исходный вектор (список)
    vector<string> li = {"a", "1", "b", "2", "c", "3"};
    
    // Создаем векторы для букв и цифр
    vector<string> li_1; // для букв (четные индексы)
    vector<string> li_2; // для цифр (нечетные индексы)
    
    // Заполняем векторы
    for (size_t i = 0; i < li.size(); i++) {
        if (i % 2 == 0) {
            li_1.push_back(li[i]); // четные индексы: 0, 2, 4
        } else {
            li_2.push_back(li[i]); // нечетные индексы: 1, 3, 5
        }
    }
    
    // "Удаляем" исходный вектор (очищаем и освобождаем память)
    li.clear();
    vector<string>().swap(li); // Полное освобождение памяти
    
    // Выводим полученные векторы
    cout << "Вектор с буквами:" << endl;
    for (const auto& item : li_1) {
        cout << item << " ";
    }
    cout << endl << endl;
    
    cout << "Вектор с цифрами:" << endl;
    for (const auto& item : li_2) {
        cout << item << " ";
    }
    cout << endl;
    
    return 0;

    
    
}
