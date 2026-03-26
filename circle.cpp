#include <iostream>

using namespace std;

int main() {
    double r, angle;
    const double PI = 3.141592653589793;

    cout << "Введите радиус окружности: ";
    cin >> r;

    if (r < 0) {
        cout << "Ошибка: радиус не может быть отрицательным!" << endl;
        return 0;
    }

    cout << "Введите угол сектора (в градусах): ";
    cin >> angle;

    if (angle < 0) {
        cout << "Ошибка: угол не может быть отрицательным!" << endl;
        return 0;
    }

    double circumference = 2 * PI * r;
    double area = PI * r * r;
    double sector_area = (angle / 360.0) * PI * r * r;

    cout << "\nРезультаты:" << endl;
    cout << "Длина окружности: " << circumference << endl;
    cout << "Площадь круга: " << area << endl;
    cout << "Площадь сектора: " << sector_area << endl;

    return 0;
}
