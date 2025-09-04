//Check whether a given number is a palindrome or not.
#include<iostream>
using namespace std;
int main(){
    int n,rem,rev=0;
    cout<<"Enter a number:";
    cin>>n;
    int original=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==original){
        cout<<"PALINDROME NUMBER";
    }
    else{
        cout<<"NOT PALINDROME NUMBER";
    }
    return 0;
}