#include <iostream>

int main() {
    int result;
    for (int num = 1; num < 12; num++) {
        for (int num2 = 1; num2 < 12; num2++) {
            result = num * num2;
            if (result < 10) {
                std::cout << num * num2 << "   ";
            }
            else {
                std::cout << num * num2 << "  ";
            }
        }
        std::cout << "\n";
    }
}
