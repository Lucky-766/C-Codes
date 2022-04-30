#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to check:"<<endl;
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
    if(temp%sum==0){
        cout<<"Harshad number"<<endl;
    }else{
        cout<<"Not aHarshad number"<<endl;
    }
    return 0;
}