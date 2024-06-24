#include<iostream>
using namespace std;
class volume{
    public:
    
    void test (int a){
        cout<<"volume of squar:"<<a*a*a<<endl;
    }
    void test (int a,int b,int c){
        cout<<"volume of reqtangle:"<<a*b*c<<endl;
    }
    void test (double r){
        cout<<"volume of sphare:"<<1.33*3.14*r*r*r<<endl;
    }
    void test (int a ,int h){
        cout<<"volume of cone:"<<0.33*3.14*a*a*h<<endl;
    }
};
int main(){
    volume t;
    t.test(10);
    t.test(10,20,30);
    t.test(10.00);
    t.test(10,50);
}
