#include<iostream>
using namespace std;

class cpp{

  private:
int  flightnumber; 
float distance,fuel;
char destination[10000];
float calfuel(int flightnumber, float distance ,float fuel );

    
    public:
 
    void readdata(){
        
        cout<<"enter the int  flightnumber:";
        cin>>flightnumber;
       
        cout<<"enter the distance:";
        cin>>distance;
        // cout<<"enter the fuel:";
        // cin>>fuel;
       
        cout<<"enter the destination:";
        cin>>destination;
       
        if(distance<=1000){
            cout<<"fuel is 500";
        }else if(distance>1000 && distance<=2000){
            cout<<"fuel is 1100";
        }else{
            cout<<"fuel is 2200";
        }
        
       
    }
    void showdata(){
    
    cout<<"flightnumber:"<<flightnumber<<endl;
    cout<<"distance:"<<distance<<endl;
    
    // cout<<"fuel:"<<fuel<<endl;
    
    cout<<"destination:"<<destination<<endl;
    cout<<"calculate"<<calfuel( flightnumber, distance ,fuel);
    
    if(distance<=1000){
    
            cout<<"fuel is 500";
    
        }else if(distance>1000 && distance<=2000){
   
            cout<<"fuel is 1100";
  
        }else{
  
            cout<<"fuel is 2200";
        }
        
    }
};
float cpp:: calfuel(int flightnumber, float distance ,float fuel){
    
   
}
int main(){
    class cpp c;
    c.readdata();
    c.showdata();
    return 0;
}