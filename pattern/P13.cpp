#include <bits/stdc++.h>
using namespace std;
void print13(int n)
{
    class Solution
    {
    public:
        void pattern13(int n)
        {
            int a = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 1; j <= i + 1; j++)
                {
                    cout << a << " ";
                    a++;
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
    print13(n);
    return 0;
}
