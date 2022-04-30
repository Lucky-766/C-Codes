#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter the character:"<<endl;
    cin>>c;
    int isLowercase,isUppercase;
    isLowercase=(c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u');
    isUppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isLowercase||isUppercase){
        cout<< c << "is vowel"<<endl;
    }
    else{
        cout<< c << "is consonant"<<endl;
    }
    return 0;
}