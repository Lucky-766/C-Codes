#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to check:"<<endl;
    cin>>n;
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>temp){
        cout<<"Abundant Number";
    }else{
        cout<<"Not an Abundant Number";
    }
    return 0;
}