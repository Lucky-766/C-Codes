#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Enter the operator:"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
        default:
        cout<<"Operator not found."<<endl;
        break;

    }
    return 0;
}