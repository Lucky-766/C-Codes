#include<iostream>
using namespace std;
void fib(int n){
    int a=0;
    int b=1;
    int nextTerm;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        nextTerm=a+b;
        a=b;
        b=nextTerm;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the number upto which you want series:"<<endl;
    cin>>n;
    fib(n);
    return 0;
}