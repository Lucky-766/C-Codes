#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Number is negative"<<endl;
    }
    else if(n==0){
        cout<<"Number is 0"<<endl;
    }
    else{
        cout<<"Number is positive"<<endl;
    }
    return 0;
}