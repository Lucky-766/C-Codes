#include<iostream>
using namespace std;
void even_odd(int n){
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    even_odd(n);
    return 0;
}