import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Первое задание: работа со строкой
        String str1 = "AaBbCcDd";
        
        // Получаем строку только с заглавными буквами (каждый второй символ, начиная с 0)
        StringBuilder uppercase = new StringBuilder();
        for (int i = 0; i < str1.length(); i += 2) {
            uppercase.append(str1.charAt(i));
        }
        
        // Получаем строку только со строчными буквами (каждый второй символ, начиная с 1)
        StringBuilder lowercase = new StringBuilder();
        for (int i = 1; i < str1.length(); i += 2) {
            lowercase.append(str1.charAt(i));
        }
        
        // Выводим на экран требуемые строки
        System.out.println("str1[::2] -> " + uppercase.toString());
        System.out.println();
        System.out.println("str1[1::2] -> " + lowercase.toString());
        
        
        
        System.out.println("\n\n");
        
        // Второе задание: работа со списком
        List<String> li = new ArrayList<>();
        li.add("a");
        li.add("1");
        li.add("b");
        li.add("2");
        li.add("c");
        li.add("3");
        
        // Создаем списки для букв и цифр
        List<String> li1 = new ArrayList<>(); // для букв (четные индексы)
        List<String> li2 = new ArrayList<>(); // для цифр (нечетные индексы)
        
        // Заполняем списки
        for (int i = 0; i < li.size(); i++) {
            if (i % 2 == 0) {
                li1.add(li.get(i)); // четные индексы: 0, 2, 4
            } else {
                li2.add(li.get(i)); // нечетные индексы: 1, 3, 5
            }
        }
        
        // Удаляем исходный список
        li.clear();
        
        // Выводим полученные списки
        System.out.println("Список с буквами:");
        System.out.println(li1);
        System.out.println();
        System.out.println("Список с цифрами:");
        System.out.println(li2);
    }
}