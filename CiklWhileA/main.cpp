#include <iostream>

using namespace std;

int main()
{
    int i=1, b, N;
    cin >> N;
    b = i*i;
    while (b<=N){
        cout << b << endl;
        i++;
        b = i*i;
    }
   return 0;
}
