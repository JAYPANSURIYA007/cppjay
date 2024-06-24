#include<iostream>
using namespace std;
class test{
  
    public:
     test(int a,int b,int c){
        cout<<"defualt function"<<endl;
    }
    test(int a){
        cout<<"perameter function call:"<<a<<endl;
    }
    test(int a , int b){
        cout<<"addition a and b:"<<a+b<<endl;
    }
    test(int a,char b){
        cout<<"perameter function call:"<<a<<"\t"<<b<<endl;
    }
    test(char a , int b){
        cout<<"addition a and b:"<<a<<b<<endl;
    }
};

    int main(){
        test t(10),t1(10,20,20),t3(200 ,'j'),t4(500,200);
    return 0;
    }
