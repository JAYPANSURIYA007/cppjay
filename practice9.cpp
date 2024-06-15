#include<iostream>
using namespace std;
int main(){
char name[50];
gets(name);

for(int i=0;name[i]!='\0';i++){
    cout<<char(name[i]);
}

}