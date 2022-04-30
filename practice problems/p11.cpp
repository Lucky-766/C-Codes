#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int temp=n;
    int d;
    int rev=0;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev){
        cout<<"It is pallindrome"<<endl;
    }
    else{
        cout<<"It is not pallindrome"<<endl;
    }
    return 0;
}