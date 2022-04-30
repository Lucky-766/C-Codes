#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    int temp=n;
    cout<<"enter the to check:"<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){ 
            sum+=i;
        }    
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    if(temp==sum){
        cout<<"perfect number"<<endl;
    }
    else{
        cout<<"not a perfect number"<<endl;
    }
    return 0;
}