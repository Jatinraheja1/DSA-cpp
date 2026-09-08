#include <bits/stdc++.h>
using namespace std;
void print9(int n)
{
    class Solution
    {
    public:
        void pattern9(int n)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j < n - i; j++)
                {
                    cout << " ";
                }
                for (int j = 0; j < (2 * i - 1); j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = n; i > 0; i--)
            {
                for (int j = 0; j < n - i; j++)
                {
                    cout << " ";
                }
                for (int j = 0; j < 2 * i - 1; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
    };
}
int main()
{
    int n;
    cout << "enter no. of rows :";
    cin >> n;
    print9(n);
    return 0;
}