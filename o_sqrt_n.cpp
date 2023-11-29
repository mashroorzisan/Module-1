#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // o(sqrt(n))
    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " " << n / i << endl;
    //     }
    // }

    // 1 2 3 4 5 6<=36
    for (int i = 1; i * i <= n; i++)
    {
        cout << i << " ";
        if (n / i != i)
            cout << n / i << endl;
    }
    return 0;
}