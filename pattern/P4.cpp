#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter no. of rows : ";
    cin>>n;
    print1(n);
    return 0;
}