//Find the sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n,rem;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    cout<<"The sum of the digits is "<<sum;
    return 0;
}