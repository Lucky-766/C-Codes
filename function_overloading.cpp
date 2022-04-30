#include<bits/stdc++.h>
using namespace std;
class college{
    public:
    void fun(){
        cout<<"I am a function with no arguments."<<endl;
    }
    void fun(int n){
        cout<<"I am function with integer argument."<<endl;
    }
    void fun(double x){
        cout<<"I am function with double argument."<<endl;
    }
};
int main() {
    college obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    return 0;
}