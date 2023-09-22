#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "RUS");
    char operation;
    double num1, num2, result;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            std::cout << "Ошибка: деление на ноль" << std::endl;
            return 1; 
        }
        break;
    default:
        std::cerr << "Ошибка: недопустимая операция" << std::endl;
        return 1; // В случае ошибки завершаем программу
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
