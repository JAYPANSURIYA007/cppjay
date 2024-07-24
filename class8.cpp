#include <iostream>
using namespace std;
class repot
{

private:
    int adno;
    char sname[20];
    float marks[5];
    float total = 0;

    float ctotal();

public:
    void getdata()
    {

        cout << "enter the adnumber:";
        cin >> adno;
        cout << "enter the sname:";
        cin >> sname;
        for (int k = 0; k < 5; k++)
        {
            cout << "enter marks:";
            cin >> marks[k];

            total += marks[k];
        }
        cout << "total:" << total << endl;
    }
    void showdata()
    {
      
            cout << "adno:" << adno << endl;
            cout << "sname:" << sname << endl;
            cout << "total:" << total << endl;
         
    }
};


int main()
{
    class repot st[5];
    for (int i = 0; i < 5; i++)
    {
        st[i].getdata();
        st[i].showdata();
    }
    return 0;
}