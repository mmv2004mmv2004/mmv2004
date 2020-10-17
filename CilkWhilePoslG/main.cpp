#include <iostream>

using namespace std;

int main()
{
    int x, xM1 = 0, xM2 = 0;
    cin >> x;
    while ( x != 0) {
            cin >> x;
        if ( x > xM1) {
            xM2 = xM1;
            xM1 = x;
        }
        else if ( x <= xM1 && x > xM2) {
            xM2 = x;
        }
    }
        cout << xM2;
        return 0;
}
