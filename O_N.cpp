#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;                      // o(1)
    cin >> n;                   // o(1)
    int a[n];                   // o(1)
    for (int i = 0; i < n; i++) // o(n)
    {
        cin >> a[i];
    }
    int s = 0;                  // o(1)
    for (int i = 0; i < n; i++) // o(n)
    {
        s += a[i];
    }
    cout << s << endl; // o(1)
    return 0;
}

// ignore constants - o(1)
// find the maximum complexity - o(n)