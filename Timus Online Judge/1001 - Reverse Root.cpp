#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double t;
    double v [128 * 1024];
    int idx = 0;
    while (cin >> t) {
        v[idx] = sqrt(t);
        ++idx;
    }

    cout << fixed;
    cout << setprecision(4);

    for (int i = idx - 1; i >= 0; --i)
        cout << v[i] << endl;

    return 0;
}
