//Write a program to read your name and age, and print them in the format:Hello <name>, you are <age> years old.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;

    cout<<"Hello "<<name<<", you are "<<age<<" years old."<<endl;
    return 0;
}
