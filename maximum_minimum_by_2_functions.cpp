#include<iostream>
using namespace std;
void maximum(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<" is maximum"<<endl;
    }
    else if(a<b && b>c){
        cout<<b<<"is maximum"<<endl;
    }
    else{
        cout<<c<<"is maximum"<<endl;
    }
}
void minimum(int a,int b,int c){
    if(a<b && a<c){
        cout<<a<<"is minimum"<<endl;
    }
    else if(b<a  && b<c){
        cout<<b<<"is minimum"<<endl;
    }
    else{
        cout<<c<<"is minimum"<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
   // maximum(a,b,c);
    minimum(a,b,c);
    return 0;
}