//Take two integers as input and print the larger one using if-else.
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    if(a>b){
        cout<<a<<" is greater than "<<b;
    }
    else{
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}