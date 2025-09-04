//Find the factorial of a given number n.
#include<iostream>
using namespace std;
int main(){
    int n;
    long long fact = 1;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial for "<<n<<" is "<<fact;
    return 0;
}