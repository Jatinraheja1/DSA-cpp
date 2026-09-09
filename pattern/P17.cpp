#include <bits/stdc++.h>
using namespace std;
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j;
        }
        for (char j = 'A' + i - 1; j >= 'A'; j--)
        {
            cout << j;
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "enter no. of rows :";
    cin >> n;
    pattern17(n);
    return 0;
}