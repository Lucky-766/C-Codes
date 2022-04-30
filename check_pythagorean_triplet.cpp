#include<iostream>
using namespace std;
bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=z;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    return false;
}
int main(){
    int x,y,z;
    cout<<"Enter the three numbers:"<<endl;
    cin>>x>>y>>z;
    cout<<check(x,y,z)<<endl;
    return 0;
}