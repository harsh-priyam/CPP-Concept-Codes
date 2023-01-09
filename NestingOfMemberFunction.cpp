#include <iostream>
#include <string>
using namespace std;

class binary
{
    string str;

public:
    void Get_Binary(void);
    void Chk_Binary(void);
    void Rep_Binary(void);
    void Dis_Binary(void);
};

void binary ::Get_Binary(void)
{

    cout << "Enter  any number for the conversion" << endl;
    cin >> str;
};

void binary ::Chk_Binary(void)
{
    int i;
    for (i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "Invalid Binary Numbers" << endl;
            exit(0);
        }
    }
};

void binary ::Rep_Binary(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    }
};

void binary ::Dis_Binary(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i);
    }
};
int main()
{
    binary b;

    b.Get_Binary();
    b.Chk_Binary();
    b.Rep_Binary();
    b.Dis_Binary();

    return 0;
}
