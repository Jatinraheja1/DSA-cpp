#include <bits/stdc++.h>
using namespace std;
void print14(int n)
{
    class Solution
    {
    public:
        void pattern14(int n)
        {
            for (int i = 0; i < n; i++)
            {
                for (char j = 'A'; j <= 'A' + i; j++)
                {
                    cout << j;
                }
                cout << endl;
            }
        }
    };
}
int main()
{
    int n;
    cout << "enter no.of rows";
    cin >> n;
    print14(n);
    return 0;
}