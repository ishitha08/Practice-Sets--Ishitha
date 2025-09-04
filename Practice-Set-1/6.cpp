//Write a program to print the multiplication table of a given number using a for loop.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"THE MULTIPLICATION TABLE FOR:"<<a<<endl;
    for(int i=1;i<=10;i++){
        cout<<i<<" X "<<a<<" = "<<i*a<<endl; 
    }
    return 0;
}