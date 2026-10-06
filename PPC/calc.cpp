#include <iostream>
using namespace std;

int main() {
    int a, b, op;
    double result = 0;

    cout << "Введіть перше число\n";
    if (!(cin >> a)) {
        cerr << "Помилка: очікується ціле число.\n";
        return 1;
    }
    cout << "Введіть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n\n";
    if (!(cin >> op)) {
        cerr << "Помилка: очікується номер операції.\n";
        return 1;
    }
    cout << "Введіть друге число\n";
    if (!(cin >> b)) {
        cerr << "Помилка: очікується ціле число.\n";
        return 1;
    }

    switch (op) {
        case 1:
            result = static_cast<double>(a) + b;
            break;

        case 2:
            result = static_cast<double>(a) - b;
            break;

        case 3:
            result = static_cast<double>(a) * b;
            break;

        case 4:
            if (b == 0) {
                cerr << "Помилка: ділення на нуль неможливе.\n";
                return 1;
            }
            result = static_cast<double>(a) / b;
            break;

        default:
            cerr << "Помилка: оберіть операцію від 1 до 4.\n";
            return 1;
    }

    cout << "Результат = " << result << '\n';
    return 0;
}
