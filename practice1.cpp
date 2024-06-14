#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    printf("enter the  A number:");
    scanf("%d",&a);
     printf("enter the  B number:");
    scanf("%d",&b);
     printf("enter the  C number:");
    scanf("%d",&c);
    

    if(a>b){
        printf("a is large");
    }else if(b>c){
        printf("b is large");
    }else{
        printf("c is large");
    }
}