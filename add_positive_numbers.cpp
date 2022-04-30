#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n>=0){
        sum=sum+n;
    }
    cout<<sum<<endl;
    return 0;
}