#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;
    int age;
    bool isStudent;

    // Введення даних
    std::cout << "Введіть ім'я: ";
    std::cin >> firstName;
    std::cout << "Введіть прізвище: ";
    std::cin >> lastName;
    std::cout << "Введіть вік: ";
    std::cin >> age;
    std::cout << "Ви студент? (1 - так, 0 - ні): ";
    std::cin >> isStudent;

    // Виведення даних
    std::cout << "\nІнформація про користувача:\n";
    std::cout << "Ім'я: " << firstName << std::endl;
    std::cout << "Прізвище: " << lastName << std::endl;
    std::cout << "Вік: " << age << std::endl;
    std::cout << "Статус студента: " << (isStudent ? "Так" : "Ні") << std::endl;

    return 0;
}
