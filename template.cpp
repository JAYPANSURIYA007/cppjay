#include<iostream>
using namespace std;

template<class T>
void display(T t1)
{
    cout<<"Displaying Template"<<t1<<endl;
}
template<class x, class y>
void Display(x a, y b)
{
    cout<<"Displaying trmplat:"
    <<a<<"\t"
    <<b<<endl;

}
template<class t>
t sum(t x,t y)
{
    return x+y;
}
int main()
{

    display(200);
    display(200.20);
    display('g');
    
    Display('h',252);
    Display('i',202.02);
    Display(200,202.05);
    
    cout<<sum(1,2)<<endl;
    cout<<sum(11.20,22.28)<<endl;

return 0;
}