//Read three integers and print the largest number.
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if(a>b && a>c){
        cout<<a<<" is the greatest ";
    }
    else if(b>a && b>c){
        cout<<b<<" is the greatest";
    }
    else{
        cout<<c<<" is the greatest";
    }
    return 0;
}