#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;
void print_menu();
structer Answer{
  string dish_name;
  double dish_price;
  int qty;
  double total;

};
class Item{
  private:
  striing Itam_name;
  double Item_price;

  public:
  Item(){};
  Item(string name,double price)
  {
    Item-name=name;
    Item_price=price;
  }
  Answer Calculator(int qty)
  {
    Answer result;
  
    result.dish_name=Item_name;
    result.dish_price=Item_price;
    result.qty=qty;
    result.total=Item_price*qty;
    return result;
}
void print_Item_data()
{
  cout<<endl
  <<"item name :"<<Item_name<<endl;
  cout<<"item price :"<<Item_price;
}
};
  
  int main()
{
 Item item[26];
    cout<<"*******************************HOTEL SKILL QODE*****************************"<<endl;
    cout<<"*********************************FOOD MENU**********************************"<<endl;
    
    

        cout<<"NO.       DISH----------------------------------------PRICE"<<endl;
        cout<<"1.        MANHURIYAM----------------------------------100/-"<<endl;
        cout<<"2.        MANHAV SHUP---------------------------------160/-"<<endl;
        cout<<"3.        MASALA PAPAD -------------------------------20/-"<<endl;
        cout<<"4.        BUTTER ROTI---------------------------------20/-"<<endl;
        cout<<"5.        NAAN----------------------------------------50/-"<<endl;
        cout<<"6.        BUTTER NAAN --------------------------------₹70"<<endl;
        cout<<"7.        KAJUKARI------------------------------------₹250"<<endl;
        cout<<"8.        PANIR MASALA TADKA--------------------------₹230"<<endl;
        cout<<"9.        PANIR BHURJI--------------------------------₹180"<<endl;
        cout<<"10.       PANIR TIKKA --------------------------------₹270"<<endl;
        cout<<"11.       PARRATHA------------------------------------₹40"<<endl;
        cout<<"12.       MALAI KOFTA---------------------------------₹160"<<endl;
        cout<<"13.       GULAB JAMUN---------------------------------₹150"<<endl;
        cout<<"14.       KHIR----------------------------------------₹170"<<endl;
        cout<<"15.       KULFI---------------------------------------₹100"<<endl;
        cout<<"16.       RAJ BHOG------------------------------------₹300"<<endl;
        cout<<"17.       COOKI AND CREAM-----------------------------₹200"<<endl;
        cout<<"18.       BAJRANO ROTLO-------------------------------₹100"<<endl;
        cout<<"19.       UNDHIYU-------------------------------------₹150"<<endl;
        cout<<"20.       THUMBS UP-----------------------------------₹40"<<endl;
        cout<<"21.       COCA KOLA-----------------------------------₹30"<<endl;
        cout<<"22.       HOT BOURNVITA-------------------------------₹80"<<endl;
        cout<<"23.       COLD BOURNVITA------------------------------₹70"<<endl;
        cout<<"24.       WHISKEY-------------------------------------₹10000"<<endl;
        cout<<"25.       LIQUER--------------------------------------₹5000"<<endl;
        cout<<"26.       MASALA TEA----------------------------------₹50"<<endl;
        cout<<"27.       TEA-----------------------------------------₹30"<<endl;
        cout<<"28.       COFFE---------------------------------------₹50"<<endl;
        cout<<"29.       CANGAN WATER--------------------------------₹50"<<endl;
        cout<<"30.       BLACK WATER---------------------------------₹500"<<endl;
        cout<<"31.       WATER---------------------------------------₹25"<<endl;

        int choise;
        int count=0;

        Answer ItemNo[50];
    
     
do
{
  Start:

    cout<<endl
    <<"**************************************************************************************************"
    <<endl
    <<" ";

    cout<<endl
    <<"FOR MANU PRESS 1"<<endl;
    cout<<"ORDER DISH PRESS 2"<<endl;
    cout<<"SURRENT STATUS PRESS 3"<<endl;
    cout<<"MAKE BILL PRESS 4"<<endl;
    cout<<"EXIT PRESS 0"<<endl;

    cout<<endl
    <<"**************************************************************************************************"
    <<endl
    <<" ";
    
      cout<<endl
      <<"*************************************************************************************************"
      <<" ";
      
      cout<<endl
      <<"ENTER YOUR CHOISE :";
      cin>>choise;
      
      cout<<endl
      <<"*************************************************************************************************"
      <<" ";

       if (choise<0||choise>4)
       {
        cout<<endl
        <<"Invild Input !"<<endl;
        goto start;
       }else if (choise=0)
       {
        goto end;
       }
       else if(choise=1){
        print_menu();
       }else if(choise=2)
       {
        int dish_number;
        cout<<endl<<"ENYER DISH NUMBER :";
        cin>>dish_number;
        if(dish_number>31||dish_number<1)
        {
           cout<<endl
        <<"Invild Input !"<<endl;
        goto start;
        }
        int QTY;
        
       }
  return 0;
}