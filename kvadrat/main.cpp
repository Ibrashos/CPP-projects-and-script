#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    cout << R"( _____                    _        _      _    _
| ____| _ __  _   _  ___ (_)  ___ | |__  | |_ | |__    ___   _ __
|  _|  | '__|| | | |/ __|| | / __|| '_ \ | __|| '_ \  / _ \ | '_ \
| |___ | |   | |_| |\__ \| || (__ | | | || |_ | | | || (_) || | | |
|_____||_|    \__, ||___/|_| \___||_| |_| \__||_| |_| \___/ |_| |_|
              |___/)";

    double a, b, c, x, x1, x2;
    double d;
    while (true) {
    cout << "\n\nEnter three values A,B,C through a space: ";
    scanf_s("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    d > 0 ? x = 1 : d == 0 ? x = 2 : x = 3;
    switch (x) {
    case 1:
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << "\nx2 = " << x2 << "\n";
        break;
    case 2:
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << "\n";
        break;
    default:
        cout << "D < 0, not solution for x1 and x2";
    }
    cout << "\nfor stop press ctrl+c";
    }
}