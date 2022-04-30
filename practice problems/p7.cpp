#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"non-prime"<<endl;
            count++;
            break;
        }  
    }
    if(count==0){
        cout<<"prime"<<endl;
    }
    return 0;
}