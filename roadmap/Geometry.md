# Геометрия

***Читерский шаблон туриста***

```cpp
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

struct vec {
    int x, y;

    long long len2() {
        return 1ll * x * x + 1ll * y * y;
    }

    long double len() {
        return sqrt(len2());
    }
};

ostream &operator<<(ostream &os, const vec &a) {
    return os << a.x << " " << a.y;
}

istream &operator>>(istream &in, vec &a) {
    return in >> a.x >> a.y;
}

vec operator+(const vec &a, const vec &b) {
    return {a.x + b.x, a.y + b.y};
}

vec operator-(const vec &a, const vec &b) {
    return {a.x - b.x, a.y - b.y};
}

vec operator*(const vec &a, const int &k) {
    return {a.x * k, a.y * k};
}

vec operator*(const int &k, const vec &a) {
    return {a.x * k, a.y * k};
}

long long operator*(const vec &a, const vec &b) {
    return 1ll * a.x * b.x + 1ll * a.y * b.y;
}

long long operator%(const vec &a, const vec &b) {
    return 1ll * a.x * b.y - 1ll * a.y * b.x;
}

int main() {
    vec a, b;
    cout << "\n=== Примеры использования функций ===" << endl;

    // Точки
    vec p1, p2;
    cin >> p1 >> p2;

    // Вектор P1P2 по двум точкам
    a = p2 - p1;
    cout << "Вектор по точкам (первый аргумент - конечная точка): " << a << endl;

    // Считывание вектора напрямую
    cin >> b;

    // Сложение векторов
    cout << "\na + b = " << (a + b) << endl;

    // Вычитание векторов
    cout << "a - b = " << (a - b) << endl;

    // Скалярное произведение (dot product)
    cout << "\nСкалярное произведение (a * b) = " << (a * b) << endl;

    // Векторное произведение (cross product)
    cout << "Векторное произведение (a % b) = " << (a % b) << endl;

    // Умножение вектора на число
    cout << "\na * 3 = " << (a * 3) << endl;
    cout << "2 * b = " << (2 * b) << endl;

    // Длина вектора в квадрате
    cout << "\nКвадрат длины вектора a: " << a.len2() << endl;
    cout << "Квадрат длины вектора b: " << b.len2() << endl;

    // Длина вектора
    cout << "\nДлина вектора a: " << a.len() << endl;
    cout << "Длина вектора b: " << b.len() << endl;

    return 0;
}
```
