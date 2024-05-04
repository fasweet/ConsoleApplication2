#include <iostream>

int main() {
    int N;
    int sum = 0;

    std::cout << "Введите число N: ";
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    std::cout << "Сумма чисел от 1 до " << N << " равна " << sum << std::endl;

    return 0;