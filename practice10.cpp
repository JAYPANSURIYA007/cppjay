#include<iostream>
using namespace std;
int main(){
    int diagsum,uppersum,lowersum,total;
    diagsum=0;
    uppersum=0;
    lowersum=0;
    total=0;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter the element of"<<int(i)<<" & "<<int(j)<<":";
            cin>>arr[i][j];
        }
    }
         for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
            diagsum+=arr[i][j];
            }else if(i<j){
                uppersum+=arr[i][j];
            }else{
                lowersum+=arr[i][j];
            }
    }

         }
         cout<<endl;
         cout<<"diagsum:"<<diagsum<<endl;
         cout<<"uppersum:"<<uppersum<<endl;
         cout<<"lowersum:"<<lowersum<<endl;
         }
    