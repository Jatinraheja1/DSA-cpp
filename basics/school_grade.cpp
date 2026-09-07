#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks :";
    cin>>marks;
    if(marks<25){
        cout<<"grade is F";
    }
    else if(marks>=25 && marks<=44){
        cout<<"grade is E";
    }
     else if(marks>=45 && marks<=49){
        cout<<"grade is D";
    }
    else if(marks>=50 && marks<=59){
        cout<<"grade is C";
    }
    else if(marks>=60 && marks<=79){
        cout<<"grade is B";
    }
    else if(marks>=80 && marks<=100){
        cout<<"grade is A";
    }
    return 0;
}