#include<bits/stdc++.h>
using namespace std;
int main(){
    int first,second;
    cout<<"enter the two numbers to check friendly pair:"<<endl;
    cin>>first>>second;
     int sum1=0;
     int sum2=0;
     for(int i=1;i<first;i++){
         if(first%i==0){
             sum1+=i;
         }
     }
     for(int i=1;i<second;i++){
         if(second%i==0){
             sum2+=i;
         }
     }
     if(sum1==second && sum2==first){
         cout<<"It is friendly pair";
     }else{
         cout<<"It is not a friendly pair";
     }
    return 0;
}