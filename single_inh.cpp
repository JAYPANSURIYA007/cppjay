#include<iostream>
using namespace std;

class base{
        int a=10;
        int b=20;
        protected:
        int d=2006;

        public:
        int c=10;
        int sum(){
            return a+b;
        }
};
class derive:public base{
    
    public:
    int total=0;
    void desplay(){
        total=sum();
        cout<<"total is :"<<total << c << d ;
    }
};

int main()

{
    class derive ob;
    ob.desplay();
return 0;

}