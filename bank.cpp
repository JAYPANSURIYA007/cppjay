#include<iostream>
using namespace std;
class bank{

     protected:
      int ATM_pin,pin,code,cash,mobil_number;
      float atm_balance=0.0;
      int amount,balance=5000;
    
      
      public:

      void account(){
        
        cout<<"ENTER YOUR PIN NUMBER:";
        cin>>pin;
        if(pin==0000){
          cout<<"JAY ACCOUNT";
        }else{
          cout<<"EXIT";
        
        }
        
        }
      

       void pin1(){
        cout<<"ENTER THE MOBILE NO.:";
        cin>>mobil_number;
        cout<<"ENTER THE VARIFICATION CODE:";
        cin>>code;
        cout<<"CREAT A NEW  PIN NUMBER:";
        cin>>ATM_pin;
        
        

       }

       void withdrawal(){
        
        cout<<"ENTER YOUR ATM CARD"<<endl;
        cout<<"ENTER THE  PIN NUMBER:";
        cin>>ATM_pin;
        cout<<"ENTER THE AMMOUNT:";
        cin>>cash;
       
                if (balance=(balance-cash)){
       
          cout<<"BALANCE IS:"<<balance<<endl;
        }else 
            { 
                cout <<balance; 
            } 
       }
       

      void deposite(){
        cout<<"ENTER YOUR ATM CARD"<<endl;
      
         cout<<"ENTER THE  PIN NUMBER:";
        cin>>ATM_pin;
        cout<<"ENTER THE AMMOUNT:";
        cin>>cash;
         if(pin==0000){
          cout<<"JAY ACCOUNT"<<endl;
        }else{
          cout<<"EXIT"<<endl;
        }
        if (balance=(balance+cash)){
          
          cout<<"BALANCE IS:"<<balance<<endl;
        }else 
            { 
                cout <<balance; 
            } 
         

}
         void exit(){
            cout<<"THANKS FOR VISIT";
         }
};
int main(){ 
    class bank b;
    cout<<"  WELLCOME TO SBI   "<<endl;
    int number;
    do{
        cout<<endl<<"1:- CREAT ACCOUNT"<<endl;
        cout<<"2:- CREAT PIN"<<endl;
        cout<<"3:- CASH WITHDRAWAL"<<endl;
        cout<<"4:- CASH DEPOSITE"<<endl;
        cout<<"5:- EXIT"<<endl;
        cout<<"Select a number:";
        cin>>number;
  cout<<"****************************************************************************************************************************"<<endl;      
            switch(number){
                case 1:
                b.account();
                break;
  cout<<"****************************************************************************************************************************"<<endl;      
               
                case 2:
                b.pin1();
                break;
  cout<<"****************************************************************************************************************************"<<endl;      

                case 3:
                b.withdrawal();
                break;
  cout<<"****************************************************************************************************************************"<<endl;      

                case 4:
               b. deposite();
               break;
  cout<<"****************************************************************************************************************************"<<endl;      

                case 5:
                b.exit();
                break;
  cout<<"****************************************************************************************************************************"<<endl;      


               
                }
    
     } while(number!=5);
    
    
}