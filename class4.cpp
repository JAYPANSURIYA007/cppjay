#include<iostream>
using namespace std;

class Test{

  private:
int testcode,nocandidate,centerreqd ;
char description[10000];
float calcntr(int testcode,int nocandidate, int centerreqd );

    
    public:
 
    void readdata(){
        
        cout<<"enter the testcode:";
        cin>>testcode;
        cout<<"enter the nocandidate:";
        cin>>nocandidate;
        cout<<"enter the centerreqd:";
        cin>>centerreqd;
        cout<<"enter the description:";
        cin>>description;
        
       
    }
    void showdata(){
    
    cout<<"testcode:"<<testcode<<endl;
    cout<<"nocandidate:"<<nocandidate<<endl;
    cout<<"centerreqd:"<<centerreqd<<endl;
    cout<<"description:"<<description<<endl;
    cout<<"calculate"<<calcntr(testcode,nocandidate,centerreqd);
   
    }
};
float Test:: calcntr(int testcode,int nocandidate, int centerreqd){
    return (nocandidate/100+1);
}
int main(){
    class Test t;
    t.readdata();
    t.showdata();
    return 0;
}