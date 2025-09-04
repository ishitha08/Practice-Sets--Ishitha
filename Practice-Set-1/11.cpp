//Gradees
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the mark scored by the student:";
    cin>>n;
    if(n>=90){
        cout<<"Grade:A";
    }
    else if(n>=80&&n<=89){
        cout<<"Grade:B";
    }
    else if(n>=70&&n<=79){
        cout<<"Grade:C";
    }
    else if(n>=60&&n<=69){
        cout<<"Grade:D";
    }
    else{
        cout<<"Grade:F";
    }
    return 0;
}