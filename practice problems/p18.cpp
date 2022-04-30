//strong number check
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number to check:"<<endl;
    cin>>n;
    int temp=n;
    while(n>0){
        int d=n%10;
        int fact=1;
        for(int i=1;i<=d;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(temp==sum){
        cout<<"strong number"<<endl;
    }
    else{
        cout<<"not a strong number"<<endl;
    }
    return 0;
}