#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int N;
    int sum = 0;

    cout << "Введите число N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "Сумма чисел от 1 до " << N << " равна " << sum << endl;
    cout << "Изменение для работы" << endl;
    return 0;
}