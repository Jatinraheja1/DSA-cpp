#include <bits/stdc++.h>
using namespace std;
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "enter no. of rows : ";
    cin >> n;
    print7(n);
    return 0;
}