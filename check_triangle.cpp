#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the sides of a triangle:"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral triangle"<<endl;
    }
    else if(a==b || a==c || b==c){
        cout<<"Isoscseles triangle"<<endl;
    }
    else{
        cout<<"Scalene triangle"<<endl;
    }
    return 0;
}