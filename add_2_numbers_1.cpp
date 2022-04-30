#include<iostream>
using namespace std;
int Sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    cout<<Sum(a,b)<<endl;
    return 0;
}