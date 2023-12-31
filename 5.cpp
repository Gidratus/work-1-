#include <iostream>
#include <random>
#include <string>

// Функция для генерации случайного пароля

std::string generatePassword(int length) {
    const std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(0, charset.size() - 1);

    std::string password;
    for (int i = 0; i < length; i++) {
        password += charset[distribution(gen)];
    }

    return password;
}

int main() {
    setlocale(LC_CTYPE, "Rus");
    int passwordLength;

    std::cout << "Ввидите длину пароля (не меньше 8)";
    std::cin >> passwordLength;

    if (passwordLength < 1) {
        std::cout << "Длина пароля должна быть положительным числом!" << std::endl;
        return 1;
    }

    std::string password = generatePassword(passwordLength);
    std::cout << "Сгенерированный пароль: " << password << std::endl;

    // Пример проверки на длину пароля
    if (password.length() >= 8) {
        std::cout << "Пароль соответствует минимальной длине." << std::endl;
    }
    else {
        std::cout << "Пароль слишком короткий. Минимальная длина пароля - 8 символов." << std::endl;
    }

    return 0;
}
