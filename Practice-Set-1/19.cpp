//Write a program to calculate the simple interest.
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    float si;
    cout<<"Enter your principal:";
    cin>>p;
    cout<<"Enter your rate:";
    cin>>r;
    cout<<"Enter your time:";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"SIMPLE INTEREST:"<<si;
    return 0;
}