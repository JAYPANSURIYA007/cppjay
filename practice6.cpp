#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,m,p;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            cout<<" ";
}
        for(k=1;k<=2*i-1;k++){
           cout<<"*";
        }
    cout<<endl;
    
    }
    for(l=4;l>=1;l--){
        for(m=1;m<=5-l;m++){
            cout<<" ";
        }
        for(p=1;p<=2*l-1;p++){

        cout<<"*";
        }
    cout<<endl;
    }
    return 0;

}