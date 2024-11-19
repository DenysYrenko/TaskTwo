#include <iostream>
#include <vector>
#include <string>

struct User {
    std::string firstName;
    std::string lastName;
    int age;
    bool isStudent;
};

int main() {
    int numUsers;
    std::cout << "Скільки користувачів ви хочете ввести? ";
    std::cin >> numUsers;

    std::vector<User> users(numUsers);

    // Введення даних про кожного користувача
    for (int i = 0; i < numUsers; ++i) {
        std::cout << "\nКористувач " << i + 1 << ":\n";
        std::cout << "Введіть ім'я: ";
        std::cin >> users[i].firstName;
        std::cout << "Введіть прізвище: ";
        std::cin >> users[i].lastName;
        std::cout << "Введіть вік: ";
        std::cin >> users[i].age;
        std::cout << "Ви студент? (1 - так, 0 - ні): ";
        std::cin >> users[i].isStudent;
    }

    // Виведення інформації про всіх користувачів
    std::cout << "\nІнформація про всіх користувачів:\n";
    for (const auto& user : users) {
        std::cout << "\nІм'я: " << user.firstName
                  << "\nПрізвище: " << user.lastName
                  << "\nВік: " << user.age
                  << "\nСтатус студента: " << (user.isStudent ? "Так" : "Ні")
                  << std::endl;
    }

    return 0;
}
