#include <iostream>

class calculator {
private:
    double num1;
    double num2;

public:
    double add() { return num1 + num2; };
    double multiply() { return num1 * num2; };
    double subtract_1_2() { return num1 - num2; };
    double subtract_2_1() { return num2 - num1; };
    double divide_1_2() { return num1 / num2; };
    double divide_2_1() { return num2 / num1; };

    bool set_num1(double num1);
    bool set_num2(double num2);
};

bool calculator::set_num1(double num1_) {
    if (num1_ != 0) {
        num1 = num1_;
        return true;
    }
    else {
        return false;
    }
}

bool calculator::set_num2(double num2_) {
    if (num2_ != 0) {
        num2 = num2_;
        return true;
    }
    else {
        return false;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    calculator num;
    double num1;
    double num2;

    for (;;) {
        while (true) {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (num.set_num1(num1)) {
                break;
            }
            else {
                std::cout << "Неправильный ввод." << std::endl;
            }
        }
        while (true) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (num.set_num2(num2)) {
                break;
            }
            else {
                std::cout << "Неправильный ввод." << std::endl;
            }
        }

        std::cout << "num1 + num2 = " << num.add() << std::endl;
        std::cout << "num1 - num2 = " << num.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << num.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << num.multiply() << std::endl;
        std::cout << "num1 / num2 = " << num.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << num.divide_2_1() << std::endl;
    }
}