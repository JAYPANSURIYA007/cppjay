#include<iostream>
using namespace std;

 class number{
protected:
 int a;
 public:
 
    
    void setA(){
    cout<<"enter a ";
    cin>>a;
    }        
    };
    class number1:public number{
        protected:
        int b;
        public:

        void setB(){
            cout<<"enter b";
            cin>>b;

        }
    };
    class derive:
    public number1{
        public:
        void product(){
            cout<<"enter a and b:"<<a*b;
        }
    };
int main()
{
    class derive c;
    c.setA();
    c.setB();
    c.product();

return 0;
}