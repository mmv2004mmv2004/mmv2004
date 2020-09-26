#include <iostream>

using namespace std;

int main()
{
    int n, k, fn, fk,fn-k, c;
    cin >> n;
    cin >> k;
    for (int i=1; i<=n;i++){
        fn = fn * i;
    }
    for (int i=1; i<=k;i++){
        fk = fk * i;
    }
    for (int i=1; i<=n-k;i++){
        fn_k = fn_k *i;
    }
    c = fn / fk * fn_k
    cout << c << endl;
    return 0;
}
