#include<iostream>

    using namespace std;

    int main(){

        float unit,rs,min,total=0;

        int charge=50;

        cout<<"enter unit:-";
        cin>>unit;

        cout<<endl;

        // total = rs*unit+charge;

        if(unit <= 100 && unit >50)
        {
            rs = 0.60;
            
        }
        else if(unit > 100 && unit <= 200)
        {
            rs = 0.80;
            cout<<unit;
        }
        else if(unit > 200 && unit <= 300)
        {
            rs = 0.90;
            cout<<unit;
        }else{

            rs=1;
        }

        total = unit * rs + charge;

        cout<<endl;

        cout<<total<<endl;

        return 0;
    }