#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter the number to check:"<<endl;
    cin>>n;
    int res=pow(n,2);
    while(n>0){
        if(n%10!=res%10){
            flag=1;
            break;
        }
        n/=10;
        res/=10;
    }
    if(flag==1){
        cout<<"Automorphic number"<<endl;
    }else{
        cout<<"Non Automorphic number"<<endl;
    }
    return 0;
}