#include<iostream>
using namespace std;

class student{
        protected:
        int adno;
        char sname[20];
        float eng , maths ,sci;
        

   public:
   void getdata(){
        cout<<"enter the adnumber:"<<endl;
        cin>>adno;
        cout<<"enter the sname:"<<endl;
        cin>>sname;
        cout<<"enter the eng marks:"<<endl;
        cin>>eng;
        cout<<"enter the maths marks:"<<endl;
        cin>>maths;
        cout<<"enter the sci marks:"<<endl;
        cin>>sci;
}
int ctotal(){
    return eng+maths+sci;
} 
};


class derive:public student{
    public:
    int total=0;
    void desplay(){
        total = ctotal();
        cout<<"total is :"<<total;
   
    }

 };

int main()
{
    class derive ob;
    ob.getdata();
    ob.desplay();
return 0;
}