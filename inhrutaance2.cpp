#include<iostream>
using namespace std;

class cricket{
        protected:
        int bcod;
    char bname[20];
    int innings,notout,runs;
    float betavg;

public:
     void readdata(){
           
           cout<<"enter the bcod:";
        cin>>bcod;
        cout<<"enter the bname:";
        cin>>bname;
        cout<<"enter the innings:";
        cin>>innings;
        cout<<"enter the notout:";
        cin>>notout;
        cout<<"enter the runs:";
        cin>>runs;
        
     }

int calavg(){

    return betavg=runs/(innings-notout);
}

    
};
  class derive: public cricket{
    public:
     float betavg=0;
     
     void  desplay(){
        betavg=calavg();
        cout<<"bet avg"<<betavg;
     }
  };
int main()
{
    class derive ob;
    ob.readdata();
    ob.desplay();
return 0;
}