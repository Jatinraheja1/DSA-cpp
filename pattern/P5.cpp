#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=n;i>0;i--){
        for(int j=n;j>n-i;j--){
            cout<<"*";
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