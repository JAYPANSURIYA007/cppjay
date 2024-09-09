#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void print_menu();

struct Answer
{
  string dish_name;
  double dish_price;
  int qty;
  double total;
};
class Item
{
private:
  string Item_name;
  double Item_price;

public:
  Item() {};
  Item(string name, double price) : Item_name(name), Item_price(price) {}

  // Item_price = price;
  Answer Calculator(int qty)
  {
    Answer result;
    result.dish_name = Item_name;
    result.dish_price = Item_price;
    result.qty = qty;
    result.total = Item_price * qty;

    return result;
  }

  void print_Item_data()
  {
    cout << endl
         << "ITEM NAME :" << Item_name << endl;
    cout << "Item price:" << Item_price;
  }
};

int main()
{
  Item item[26];
  item[1] = Item("palak paneer", 170);
  item[2] = Item("Paneer pakoda", 220);
  item[3] = Item("VEg burger", 110);
  item[4] = Item("Veg Grill Sandwich", 160);
  item[5] = Item("Veg Fry rice", 350);
  item[6] = Item("Veg biriyani", 350);
  item[7] = Item("Mix Veg Pizzah", 450);
  item[8] = Item("Jeera Rice", 160);
  item[9] = Item("Potato Cheeps", 80);
  item[10] = Item("Masala dosa", 90);
  item[11] = Item("Momos", 90);
  item[12] = Item("Frenki", 140);
  item[13] = Item("Sweet corn", 110);
  item[14] = Item("Gulab Jamun", 60);
  item[15] = Item("Kulfi", 40);
  item[16] = Item("Vanila Ice-cream", 110);
  item[17] = Item("Chocolate cake", 500);
  item[18] = Item("Thums-up", 35);
  item[19] = Item("Mountain Duo", 30);
  item[20] = Item("Maza", 35);
  item[21] = Item("Sosayo", 25);
  item[22] = Item("Millk", 50);
  item[23] = Item("Chocolate Milk", 80);
  item[24] = Item("Water", 30);
  int choise;
  int count = 0;
  Answer ItemNo[50];
  do
  {
  start:
    cout << endl
         << "**********************************************************************************************************"
         << endl
         << " ";
    cout << endl
         << "FOR Menu Press 1" << endl;
    cout << "Oreder Dish Press 2" << endl;
    cout << "Current Status press 3" << endl;
    cout << "Make Bill press 4" << endl;
    cout << "EXIT Press 0" << endl;

    cout << endl
         << "**********************************************************************************************************"
         << endl
         << " ";

    cout << endl
         << "Enter Your choise :";
    cin >> choise;

    cout << endl
         << "**********************************************************************************************************"
         << endl
         << " ";
    if (choise < 0 || choise > 4)
    {
      cout << endl
           << "Invilde Input !" << endl;
      //   goto start;
    }
    else if (choise == 0)
    {
      goto end;
    }
    else if (choise == 1)
    {
      print_menu();
    }
    else if (choise == 2)
    {
      int Dish_Number;
      cout << endl
           << "Eneter Dish Number:";
      cin >> Dish_Number;
      if (Dish_Number > 25 || Dish_Number < 0)
      {
        cout << endl
             << "Invild Input !" << endl;
        goto start;
      }
      int Qty;
      cout << endl
           << "Enter Qty :";
      cin >> Qty;
      if (Qty < 1)
      {

        cout << endl
             << "Invild Input !" << endl;
        goto start;
      }
      else
      {
        cout << endl
             << "**********************************************************************************************************"
             << endl
             << " ";
        cout << endl
             << "Your Order has been confirmed" << endl
             << " ";
      }
      ItemNo[count] = item[Dish_Number].Calculator(Qty);
      count++;
  
    }
else if (choise == 3)
{
  cout << endl
             << " NO              NAME         QTY  PRICE AMOUNT" << endl
       << " ";
  for (int i = 0; i < count; i++)
  {
    cout << endl
         << i + 1 << " "
         << setw(24) << ItemNo[i].dish_name << "  "
         << setw(3) << ItemNo[i].qty << " "
         << setw(5) << ItemNo[i].dish_price << " "
         << setw(6) << ItemNo[i].total << endl;
  }
  cout << " " << endl;
}
else if (choise == 4)
{
  cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";
  cout << endl
       << "                                    PK PAIN RESTAURANT                     " << endl
       << "                                    34/404 TATA HOUSING MOTI BHOYAN         " << endl
       << "                                    MOBILE NO. 9638527410                  " << endl
       << " ";

  cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";

  cout << endl
       << "       Date : 09/09/2024        " << endl
       << "       Time : 11:30             " << endl
       << " ";

  cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";

  double total = 0;
  cout << endl
       << " NO        NAME            QTY   PRICE  AMOUNT" << endl
       << " ";


  cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";
  for (int i = 0; i < count; i++)
  {
    cout << endl
         << i + 1 << " "
         << setw(24) << ItemNo[i].dish_name << "  "
         << setw(3) << ItemNo[i].qty << " "
         << setw(5) << ItemNo[i].dish_price << " "
         << setw(6) << ItemNo[i].total << endl;
          total += ItemNo[i].total;
  }
  cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";
  double GST = (total * 18.0) / 100;

  cout << endl
       << "            "
       << "            GST 18% "<<setw(36)<< GST<<endl;
   
     cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";
  total += GST;
  cout << endl
       << "                 "
       << "      Total      "<<setw(48)<<total<<endl;
       
  cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";
  cout
      << endl
      << "                               Thank you  for visit        "
      << " ";

  cout
      << endl
      << "*********************************************************************************************************************"
      << endl
      << " ";
}

end : cout
      << " ";
}
while (choise > 0 && choise < 5) ;

return 0;
}

void print_menu()
{
  cout << endl
       << "**************************************************Items*******************************************************************" << endl
       << " ";

  cout << endl
       << "                                              MAIN COURSE                       "
       << endl
       << " ";

  cout << endl
       << "Number                  Item                              Price        " << endl
       << endl
       << "1                   palak paneer                          170           " << endl
       << "2                   Paneer pakoda                         220           " << endl
       << "3                   VEg burger                            110           " << endl
       << "4                   Veg Grill Sandwich                    160           " << endl
       << "5                   Veg Fry rice                          350           " << endl
       << "6                   Veg biriyani                          350           " << endl
       << "7                   Mix Veg Pizzah                        450           " << endl
       << "8                   Jeera Rice                            160           " << endl
       << "9                   Potato Cheeps                          80           " << endl
       << "10                  Masala dosa                            90           " << endl
       << "11                  Momos                                  90           " << endl
       << "12                  Frenki                                140           " << endl
       << "13                  Sweet corn                            110           " << endl
       << " ";

  cout << endl
       << "*********************************************************************************************************************" << endl
       << " ";
  cout << endl
       << "                                               DESERT                                " << endl
       << " ";
  cout << endl
       << "Number                  Item                               Normal           " << endl
       << "14                  Gulab Jamun                            60           " << endl
       << "15                  Kulfi                                  40           " << endl
       << "16                  Vanila Ice-cream                      110           " << endl
       << "17                  Chocolate cake                        500           " << endl
       << " ";
  cout << endl
       << "*********************************************************************************************************************" << endl
       << " ";
  cout << endl
       << "                                               DRINKS                                             " << endl
       << " ";

  cout << endl
       << "Number                  Item                               Normal        " << endl
       << "18                  Thums-up                               35           " << endl
       << "19                  Mountain Duo                           30           " << endl
       << "20                  Maza                                   35           " << endl
       << "21                  Sosayo                                 25           " << endl
       << "22                  Millk                                  50           " << endl
       << "23                  Chocolate Milk                         80           " << endl
       << "24                  Water                                  30           " << endl

       << " ";
}
