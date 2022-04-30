#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Both are equal."<<endl;
    }
    else if(a>b){
        cout<<"a is greater than b."<<endl;
    }
    else{
        cout<<"b is greater than a."<<endl;
    }
    return 0;
}