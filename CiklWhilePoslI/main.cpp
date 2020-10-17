#include <iostream>

using namespace std;

int main()
{
    int x, y = 0, xM;
    cin >> x;
    xM = x;
    while (x != 0){
            cin >> x;
        if (x == xM){
            y++;
        }
        else if (x > xM){
                xM = x;
            y = 1;
        }
    }
    cout << y;
    return 0;
}
