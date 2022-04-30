#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check:"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}