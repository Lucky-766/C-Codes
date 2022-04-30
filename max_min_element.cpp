#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Maxno=0;
    int Minno=0;
    for(int i=0;i<n;i++){
        Maxno=max(Maxno,arr[i]);
        Minno=min(Minno,arr[i]);
    }
    cout<<Maxno<<" "<<Minno<<endl;
    return 0;
}