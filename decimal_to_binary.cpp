#include<iostream>
using namespace std;
int DecimalToBinary(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x*=2;
    }
    x/=2; 
    while(x>0){
    int lastdigit=n/x;
    n-=lastdigit*x;
    x/=2;
    ans=ans*10+lastdigit;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number that you want to convert in binary:"<<endl;
    cin>>n;
    cout<<DecimalToBinary(n)<<endl;
    return 0;
}