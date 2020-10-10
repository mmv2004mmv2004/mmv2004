    #include <iostream>

using namespace std;

int main()
{
    int N, a = 1, k = 0;
    cin >> N;
    while (a >= N){
        a *= 2;
        k++;
    }
    if (a >= N){
        cout << k;
    }
    return 0;
}
