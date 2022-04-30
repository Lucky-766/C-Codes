#include<iostream>
using namespace std;
int Sum(int n){
    int sum=n*(n+1)/2;
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number upto which you want sum:"<<endl;
    cin>>n;
    cout<<Sum(n)<<endl;
    return 0;
}