#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}