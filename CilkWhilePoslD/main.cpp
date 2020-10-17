#include <iostream>

using namespace std;

int main()
{
    int x;
    int c = 0;
    cin >> x;
    while (x != 0){
        if ( x % 2 == 0){
          c ++;
    }
    cin >> x;
    }
    cout << c << endl;
    return 0;
}
