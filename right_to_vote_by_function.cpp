#include<iostream>
using namespace std;
void rightTovote(int age){
    if(age>=18){
        cout<<"person can vote"<<endl;
    }
    else{
        cout<<"person can not vote"<<endl;
    }
}
int main(){
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    rightTovote(age);
    return 0;
}