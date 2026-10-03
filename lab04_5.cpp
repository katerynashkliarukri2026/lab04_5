#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double R, x, y;

    cout << "R = ";
    cin >> R;

    srand((unsigned)time(NULL));

    // 10 випадкових пострілів
    for (int i = 0; i < 10; i++)
    {
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        if ((x >= 0 && y >= 0 && x * x + y * y <= R * R) ||
            (x <= 0 && y <= 0 && x + y >= -R))
        {
            cout << setw(8) << fixed << setprecision(4) << x << "    "
                << setw(8) << y << "    yes" << endl;
        }
        else
        {
            cout << setw(8) << fixed << setprecision(4) << x << "    "
                << setw(8) << y << "    no" << endl;
        }
    }

    return 0;
}