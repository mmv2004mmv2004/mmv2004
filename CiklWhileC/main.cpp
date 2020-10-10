#include <iostream>

using namespace std;

int main()
{
    int a = 1, N;
    cin >> N;
    while (a <= N){
            cout << a << ' ';
            a *= 2;
            continue;
    }
    return 0;
}
