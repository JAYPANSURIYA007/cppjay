#include<iostream>
using namespace std;

class base{
    protected:
        int a;
        public:

        void setA(){
            cout<<"ENTER A:";
            cin>>a;
        }
};
    class derive1:public base{
        protected:
        int b;
        public:

        void setB(){
            cout<<"enter b";
            cin>>b;
        }
        void sum(){
            cout<<"sum into a and b:"<<a+b;
        }
    };
    class derive2: public base{
        protected:
        int c;

        public:
        void setC(){
            cout<<"enter c:";
            cin>>c;
        }
        void sum(){
            cout<<"sum into a and c:"<<a*c;
        }
    };
    int main(){
        class derive1 obj;
        obj.setA();
        obj.setB();
        obj.sum();

        class derive2 obj1;
        obj1.setA();
        obj1.setC();
        obj1.sum();
    }

