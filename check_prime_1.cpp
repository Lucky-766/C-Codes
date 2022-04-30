#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int i;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"it is not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"it is prime"<<endl;
    }
    return 0;
}