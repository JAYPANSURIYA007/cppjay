#include<iostream>
using namespace std;
int main(){
    int i,n,t1,t2,nextterm;
    t1=0;
    t2=1;
    nextterm=t1+t2;
    cout<<"enter the number:";
    cin>>n;
    cout<<int(t1)<<endl<<int(t2)<<endl;

    for(int i=3;i<=n;i++){
        cout<<int(nextterm)<<endl;  
        t1=t2;
        t2=nextterm;
        nextterm =t1+t2;
         }


}
