#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the A number:";
    cin>>a;

    cout<<"enter the  B number:";
    cin>>b;
   
   cout<<"enter the  C number:";
    cin>>c;
   
    if(a>b){
    cout<<"a is large";
    }else if(b>c){
        cout<<"b is large";
    }else{
        cout<<"c is large";
    }
}