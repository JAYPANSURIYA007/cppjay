#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    char input[100];
    ofstream os;
    os.open("xyz.txt");
    cout<<"please enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;

    cout<<"PLEASE ENTER YORE CONTECT NUMBER:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
  
  
     //read data
    ifstream is;
    string line;
    is.open("xyz.txt");

    cout<<endl<<"Reading from a text file:"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    
    }
    is.close();
    
return 0;
}