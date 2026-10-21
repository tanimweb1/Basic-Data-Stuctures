#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[2000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[m];

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int idx;
    cin >> idx;

    for (int i = n - 1; i >= idx; i--)
    {
        a[i + m] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        a[idx + i] = b[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}