#include<iostream>
using namespace std;
int main(){ 
    int num,d,i,sum,t;
    int a;
    cout<<"enter the first number:"<<endl;
    cin>>a;
    int b;
    cout<<"enter the second number:"<<endl;
    cin>>b;
    for(num=a;num<=b;num++){
        t=num;
        while(t>0){
            d=t%10;
            sum+=d*d*d;
            t/=10;
        }
        if(sum==num){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}