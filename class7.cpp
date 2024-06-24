#include<iostream>
using namespace std;

class book{
  private:
  int bookno;
  char booktitle[20];
  float price=3;
  float tcost;
  float totalcost(int copy);
  int copy;
  
  
  public: 
  book(){
        cout<<"bookno:";
        cin>>bookno;
        cout<<"booktitle:";
        cin>>booktitle;
        cout<<"copy:";
        cin>>copy;
            totalcost(copy);
        
        
   }
   ~book(){
        cout<<"bookno:";
        cin>>bookno;
        cout<<"booktitle:";
        cin>>booktitle;
        cout<<"copy:";
        cin>>copy;
            totalcost(copy);
        
        
   }
   void purchase(){
      cout<<"bookno"<<bookno<<endl;
      cout<<"booktitle"<<booktitle<<endl;
      cout<<"book copy"<<copy<<endl;
      cout<<"totalcost"<<tcost<<endl;

   }

};
float book:: totalcost(int copy){
    tcost = price*copy;
}
int main(){
    class book b;

    b.purchase();
}