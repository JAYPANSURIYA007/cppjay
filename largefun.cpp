#include<iostream>
using namespace std;
class large{
     friend void number(large a);
     int x,y,z;

     public:
    
    void getdata(int a,int b,int c){
        x=a,y=b,z=c;
        
    }
};

     void number(large a)
    {
        
        if (a.x>a.y&&a.x>a.z){
            cout<<"X is large"<<endl;
        }
       else if (a.y>a.x&&a.y>a.z){
            cout<<"Y is large"<<endl;
        }
        else  {
            cout<<"Z is large"<<endl;
        }
    }

   
    int main()
{
    large t;
    t.getdata(25,200,50);
    number(t);
    
    
    return 0;
}