#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n>0){
        int rem=n%10;
        cout<<rem<<endl;
        n=n/10;
    }
    return 0;
}