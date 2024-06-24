#include<iostream>
using namespace std;
class Volume
{
    public:
    test(int a)
    {
        //square 
        cout<<"Volume of square:"<<a*a*a<<"\n";
    }
    test(int a,int b,int c)
    {
        //rectangle
        cout<<"Volume of cuboid:"<<a*b*c<<"\n";
    }
    test(double a)
    {
        //Sphere
       float pi=3.14;
        cout<<"Volume of sphere:"<<1.33*pi*a*a*a<<"\n";
    }
    test(int a,int b)
    {
        //cone
       float pi=3.14;
        cout<<"Volume of cone:"<<0.33*pi*a*a*b;
    }
};
int main()
{
     Volume t;
     t.test(10);
     t.test(10,50,25);
     t.test(10.00);
     t.test(10,200);

    return 0;
}