#include <iostream>
using namespace std;
class Base
{
private:
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base ::setdata(void)
{
    data1 = 40;
    data2 = 60;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

class Inherited : public Base
{
private:
    int data3;

public:
    void input();
    void output();
};
void Inherited ::input()
{
    data3 = data2 * getdata1();
}
void Inherited ::output()
{
    cout << "The Value of Data 1 will be : " << getdata1() << endl;
    cout << "The Value of Data 2 will be : " << data2 << endl;
    cout << "The Value of Data 3 will be : " << data3 << endl;
}

int main()
{
    Inherited result;
    result.setdata();
    result.input();
    result.output();

    return 0;
}
