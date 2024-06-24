#include<iostream>
using namespace std;
class demo{
  
    public:
    void test(){
        cout<<"defualt function"<<endl;
    }
    void test(int a){
        cout<<"perameter function call:"<<a<<endl;
    }
    void test(int a , int b){
        cout<<"addition a and b:"<<a+b<<endl;
    }
};

    int main(){
        demo t;
        t.test();
        t.test(10);
        t.test(10,20);
    return 0;
    }
