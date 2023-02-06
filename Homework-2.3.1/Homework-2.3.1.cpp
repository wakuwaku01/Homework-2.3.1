#include <iostream>

class calculator {
public:
    double num1;
    double num2;

    double add() { return num1 + num2; };
    double multiply() { return num1 * num2; };
    double subtract_1_2() { return num1 - num2; };
    double subtract_2_1() { return num2 - num1; };
    double divide_1_2() { return num1 / num2; };
    double divide_2_1() { return num2 / num1; };

    bool set_num1(double num1);
    bool set_num2(double num2);
};

bool calculator::set_num1(double num1) {
    if (this->num1 != 0)
        return true;
    else
        return false;
}

bool calculator::set_num2(double num2) {
    if (this->num2 != 0)
        return true;
    else
        return false;
}

void zero_num(calculator& p) {
    if (p.num1 == false || p.num2 == false) {
        std::cout << "Неправильный ввод" << std::endl;
        if (p.num1 == false) {
            std::cout << "Введите num1: ";
            std::cin >> p.num1;
        }
        else {
            std::cout << "Введите num2: ";
            std::cin >> p.num2;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    calculator num;

    while (true) {
        std::cout << "Введите num1: ";
        std::cin >> num.num1;
        zero_num(num);
        std::cout << "Введите num2: ";
        std::cin >> num.num2;
        zero_num(num);
        std::cout << "num1 + num2 = " << num.add() << std::endl;
        std::cout << "num1 - num2 = " << num.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << num.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << num.multiply() << std::endl;
        std::cout << "num1 / num2 = " << num.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << num.divide_2_1() << std::endl;
    }
}