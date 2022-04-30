#include<iostream>
using namespace std;
int HexadecimalToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=16;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter hexadecimal number to convert in decimal:"<<endl;
    cin>>n;
    cout<<HexadecimalToDecimal(n)<<endl;
    return 0;
}