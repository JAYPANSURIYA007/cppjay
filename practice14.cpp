#include<iostream>

    using namespace std;

    int main(){

        float basicsalary,hra,da,gross;

        cout<<"enter salary:-";
        cin>>basicsalary;

        if(basicsalary<5000)
        {
            hra = basicsalary*0.08;
            da = basicsalary*0.2;
        }
        else if(basicsalary>5000 && basicsalary<10000)
        {
            hra = basicsalary*0.12;
            da = basicsalary*0.3;
        }
        else if(basicsalary>10000 && basicsalary<15000)
        {
            hra = basicsalary*0.15;
            da = basicsalary*0.4;
        }else{
            hra = basicsalary*0.2;
            da = basicsalary*0.5;
        }

        gross = basicsalary + hra + da;

        cout<<"basic salary:="<<float(basicsalary)<<endl;
        cout<<"HRA:="<<float(hra)<<endl;;
        cout<<"DA:="<<float(da)<<endl;
        cout<<"gross of salary:="<<float(gross)<<endl;;


        return 0;

}