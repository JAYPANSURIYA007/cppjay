#include<iostream>
using namespace std;
class bank{

     private:
      int ATM_pin,mobil_number,pin,code,cash;
      float atm_balance=0.0;
      int account_number;
      char name[30],email[50];
      public:

      void account(){
        cout<<"ENTER THE NAME:"<<endl;
        cin>>name;
        cout<<"ENTER THE MOBILE NO.:"<<endl;
        cin>>mobil_number;
        cout<<"ENTER YOUR E-MAIL ADDRESS:"<<endl;
        cin>>email;
        cout<<"CREATE YOUR PIN NUMBER:"<<endl;
        cin>>pin;
      }

       void pin1(){
        cout<<"ENTER THE MOBILE NO.:"<<endl;
        cin>>mobil_number;
        cout<<"ENTER THE VARIFICATION CODE:"<<endl;
        cin>>code;
        cout<<"CREAT A NEW  PIN NUMBER:";
        cin>>ATM_pin;
        
        

       }

       void withdrawal(){
        
        cout<<"ENTER YOUR ATM CARD"<<endl;
       
        cout<<"ENTER THE AMMOUNT:"<<endl;
        cin>>cash;
         cout<<"ENTER THE  PIN NUMBER:";
        cin>>ATM_pin;
        }

      void deposite(){
        cout<<"ENTER YOUR ATM CARD"<<endl;
        cout<<"ENTER THE ACCOUNT NUMBER:";
        cin>>account_number;
        cout<<"ENTER THE AMMOUNT:"<<endl;
        cin>>cash;
         }

         void exit(){
            cout<<"THANKS FOR VISIT";
         }
};
int main(){ 
    class bank account(),pin1(),withdrawal(),deposite(),exit();
    cout<<"  WELLCOME TO SBI   ";
    int number;
    do{
        cout<<"1:- CREAT ACCOUNT"<<endl;
        cout<<"2:- CREAT PIN"<<endl;
        cout<<"3:- CASH WITHDRAWAL"<<endl;
        cout<<"4:- CASH DEPOSITE"<<endl;
        cout<<"5:- EXIT"<<endl;
        cout<<"Select a number:"<<endl;
        cin>>number;
            switch(number){
                case 1:
                account();
                exit();
                break;
               
                case 2:
                pin1();
                exit();
                break;

                case 3:
                withdrawal();
                exit();
                break;

                case 4:
            
            
                deposite();
                exit();
                break;

                case 5:
                exit();
                break;


               
                }
    
     } while(number!=5);
    
    bank b;
    b.account();
    b.pin1();
    b.withdrawal();
    b.deposite();
    b.exit();
}