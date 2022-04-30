#include<iostream>
using namespace std;
int Sum(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    cout<<Sum(a,b)<<endl;
    return 0;
}