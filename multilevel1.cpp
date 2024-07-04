#include<iostream>
using namespace std;
 class student{
    protected:

int adno;
char sname[20];


    public:
    
    void getdata(){
        cout<<"enter the adnumber:"<<endl;
        cin>>adno;
        cout<<"enter the sname:"<<endl;
        cin>>sname;
        
} 
 };
  class student1:public student{
    protected:
    float eng, maths, sci;
    public:
    void getdata1(){
        cout<<"enter the eng marks:"<<endl;
        cin>>eng;
        cout<<"enter the maths marks:"<<endl;
        cin>>maths;
        cout<<"enter the sci marks:"<<endl;
        cin>>sci;}

  };

 

    class derive:public student1{

    public:
float total=0;
    
void desplay(){
total = eng+maths+sci;
cout<<"total is "<<total;
}
    
    
    };


int main()

{
     class derive d;
    d.getdata();
    d.getdata1();
    d.desplay();
    
return 0;
}