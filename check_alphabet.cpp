#include<iostream>
using namespace std;
void check_alphabet(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"it is alphabet"<<endl;
    }
    else{
        cout<<"it is not alphabet"<<endl;
    }
}
int main(){
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    check_alphabet(ch);
    return 0;
}