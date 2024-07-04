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
        cout<<"ENTER B";
        cin>>b;
    }
    void sum(){
        cout<<"sum into a and b :"<<a+b;
    }
};
class base1 {
protected:
        int c;

        public:
        void setC(){
            cout<<"ENTER C:";
            cin>>c;
        }
       
    };
    class derive2:public base1,public derive1{
    protected:

    int d;
    public:
    void setD(){
        cout<<"ENTER D:";
        cin>>d;
    }
    void sum(){
        cout<<"sum into a and b :"<<a*b*c*d;
    }
    };

int main()

{
    class derive2 obj;
    obj.setA();
    obj.setB();
    obj.setC();
    obj.setD();
    obj.sum();
    class derive1 ob;
    ob.setA();
    ob.setB();
    ob.sum();       

    return 0;
}