#include<bits/stdc++.h>
using namespace std;
int  main(){
    double base,exp;
    cout<<"enter the base:"<<endl;
    cin>>base;
    cout<<"enter the exponent:"<<endl;
    cin>>exp;
    double res=pow(base,exp);
    cout<<base<<"^"<<exp<<"=";
    cout<<fixed<<setprecision(2)<<res<<endl;
    return 0;
}