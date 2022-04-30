#include<iostream>
using namespace std;
void display(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        cout<<n<<endl;
    }
}
int main(){
    cout<<"Enter the range:"<<endl;
    int lowerlimit,upperlimit;
    cin>>lowerlimit>>upperlimit;
    cout<<"prime between given range are:"<<endl;
    for(int i=lowerlimit;i<=upperlimit;i++){
        display(i);
    }
    return 0;
}