#include <bits/stdc++.h>
using namespace std;
void print8(int n)
{
    class Solution
    {
    public:
        void pattern8(int n)
        {
            for (int i = n; i > 0; i--)
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
        }
    };
}
int main()
{
    int n;
    cout << "enter no. of rows :";
    cin >> n;
    print8(n);
    return 0;
}