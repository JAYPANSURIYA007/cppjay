#include<iostream>
using namespace std;

 class hotel{
         protected:
         char foodname[300][300]={"MANHURIYAM"};
         char orderedfood[300][300];
         int count =0;
         int NO;
         int qty;

         public:
          
           
            int totalbill = 0;
          void print(){
            cout<<"PLEASE ENTER QTY:";
            cin>>qty;
          }





          void exit(){
            cout<<"THANKS FOR ORDER"<<endl;
          }


 };



int main()
{
    int NO;
    int number;

    hotel h;
    cout<<"*******************************HOTEL SKILL QODE*****************************"<<endl;
    cout<<"*********************************FOOD MENU**********************************"<<endl;
    
    

        cout<<"NO.       DISH----------------------------------------PRICE"<<endl;
        cout<<"1.        MANHURIYAM----------------------------------100/-"<<endl;
       //  cout<<"2.        MANHAV SHUP---------------------------------160/-"<<endl;
        // cout<<"3.        MASALA PAPAD -------------------------------20/-"<<endl;
        // cout<<"4.        BUTTER ROTI---------------------------------20/-"<<endl;
        // cout<<"5.        NAAN----------------------------------------50/-"<<endl;
        // cout<<"6.        BUTTER NAAN --------------------------------₹70"<<endl;
        // cout<<"7.        KAJUKARI------------------------------------₹250"<<endl;
        // cout<<"8.        PANIR MASALA TADKA--------------------------₹230"<<endl;
        // cout<<"9.        PANIR BHURJI--------------------------------₹180"<<endl;
        // cout<<"10.       PANIR TIKKA --------------------------------₹270"<<endl;
        // cout<<"11.       PARRATHA------------------------------------₹40"<<endl;
        // cout<<"12.       MALAI KOFTA---------------------------------₹160"<<endl;
        // cout<<"13.       GULAB JAMUN---------------------------------₹150"<<endl;
        // cout<<"14.       KHIR----------------------------------------₹170"<<endl;
        // cout<<"15.       KULFI---------------------------------------₹100"<<endl;
        // cout<<"16.       RAJ BHOG------------------------------------₹300"<<endl;
        // cout<<"17.       COOKI AND CREAM-----------------------------₹200"<<endl;
        // cout<<"18.       BAJRANO ROTLO-------------------------------₹100"<<endl;
        // cout<<"19.       UNDHIYU-------------------------------------₹150"<<endl;
        // cout<<"20.       THUMBS UP-----------------------------------₹40"<<endl;
        // cout<<"21.       COCA KOLA-----------------------------------₹30"<<endl;
        // cout<<"22.       HOT BOURNVITA-------------------------------₹80"<<endl;
        // cout<<"23.       COLD BOURNVITA------------------------------₹70"<<endl;
        // cout<<"24.       WHISKEY-------------------------------------₹10000"<<endl;
        // cout<<"25.       LIQUER--------------------------------------₹5000"<<endl;
        // cout<<"26.       MASALA TEA----------------------------------₹50"<<endl;
        // cout<<"27.       TEA-----------------------------------------₹30"<<endl;
        // cout<<"28.       COFFE---------------------------------------₹50"<<endl;
        // cout<<"29.       CANGAN WATER--------------------------------₹50"<<endl;
        // cout<<"30.       BLACK WATER---------------------------------₹500"<<endl;
        // cout<<"31.       WATER---------------------------------------₹25"<<endl;

     cout<<"PLEASE SELECT A NUMBER:";
     cin>>NO;
     
do
{
    switch(number)
    

     case 1:
     h.print();
     break;
     
    //  case 2:
    //  h.exit();
    //  break;
    
} while (number!=1);
    

        

        

    
  return 0;
}