#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"Enter the two values:"<<endl;
    cin>>a>>b;
    swap(a,b);
    return 0;
}