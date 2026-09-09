#include <bits/stdc++.h>
using namespace std;
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A' + (n - i - 1); j <= 'A' + n - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "enter no. of rows :";
    cin >> n;
    pattern18(n);
    return 0;
}