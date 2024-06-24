#include<iostream>
using namespace std;
class repot{

private:
int adno;
char sname[20];
float marks[5];
float total;

float ctotal(int eng,int maths,int sci);

public:    
void getdata(){
    for(int j=0;j<5;j++){
       cout<<"enter the adnumber:";       
        cin>>adno;
        cout<<"enter the sname:";
        cin>>sname;
        cout<<"enter marks:";
        cin>>marks[j];
    }

}
void showdata(){
    for(int j=0;j<5;j++){
        cout<<"enter marks:";
        cin>>marks[j];
     cout<<"adno:"<<adno<<endl;
   cout<<"sname:"<<sname<<endl;
        }

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