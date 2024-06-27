#include<iostream>
using namespace std;
class repot{

private:
int adno;
char sname[20];
float marks[3];
float total=0;


float ctotal(int eng,int maths,int sci);

public:    
void getdata(){
    for(int j=1;j<=3;j++){
       cout<<"enter the adnumber:";       
        cin>>adno;
        cout<<"enter the sname:";
        cin>>sname; 
       for(int k=1;k<=3;k++){
        cout<<"enter marks:";
        cin>>marks[k];

    
total+=marks[k];
       }
cout<<"total:"<<total<<endl;
       }
    
}
void showdata(){
    for(int j=1;j<=3;j++){
        cout<<"enter marks:";
     cout<<"adno:"<<adno<<endl;
   cout<<"sname:"<<sname<<endl;
   cout<<"total:"<<total<<endl;
   int k;
        total+=marks[k];
        cin>>marks[k];
            
            
        }
        //  cout<<"total"<<ctotal(eng,maths,sci)<<endl;
            // int j;
}


};
float repot::  ctotal(int eng,int maths,int sci){
    return eng+maths+sci;
}

int main(){
 class repot st[3];
for(int i=0;i<3;i++){
 st[i].getdata();
st[i].showdata();
}
return 0;
}