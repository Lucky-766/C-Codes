#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    int candies[n];
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
    int extracandies=0;
    cout<<"Enter the number of of extra candies:"<<endl;
    cin>>extracandies;
    int size=sizeof(candies)/sizeof(candies[0]);
    for(int i=0;i<n;i++){
        if(candies[i]+extracandies>=size){
            cout<<"true"<<" ";
        }
        else{
            cout<<"false"<<" ";
        }
    }
    return 0;
}