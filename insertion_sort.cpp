#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int current=arr[i];
        int j=i-1;
        if(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        cout<<arr[i]<<" ";
    }
    return 0;
}