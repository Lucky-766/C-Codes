#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    int temp=n;
    int d;
    int rev=0;
    while(n>0){
        d=n%10;
        rev=rev+d*d*d;
        n=n/10;
    }
    if(temp==rev){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}