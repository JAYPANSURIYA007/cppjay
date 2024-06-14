#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){

        cout<<"enter the alement of"<<int(i)<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];

    }
}