#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double xp, xk, dx, A, B, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    for (double x = xp; x <= xk; x += dx)
    {
        A = 2 / x + abs(x);
        if (x < 0)
            B = 1 + 4 * pow(x, 2);  // 1 + 4 * x * x
        else if (x > 2)
            B = 5 * sin(x * x + 1);
        else
            B = pow(exp(x) + abs(x), 2);
        y = A + B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
    }

    cout << "---------------------------" << endl;
    return 0;
}

