#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,i;
    cin >> d;
    e = 0;
    for (i = 1; i <= d; i++){
        cin >> a;
        if ((a % 3 == 0) & (a % 10 == 2)){
            e += 1;
        }
    }
    cout << e;
    return 0;
}
