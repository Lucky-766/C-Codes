#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the limit of series:"<<endl;
    cin>>n;
    int a=0,b=1,next;
    for(int i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=a+b;
            a=b;
            b=next;
        }
        cout<<next<<" ";
    }
    return 0;
}