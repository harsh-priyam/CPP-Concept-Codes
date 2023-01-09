#include <iostream>

using namespace std;

class Complex
{
private:
    int a, b;

public:
    void ReadData(void)
    {
        cout << "The Complex Number will be " << a << "+" << b << "i" << endl;
    }

    Complex(void);  /* Constructors Declaration */
};

Complex ::Complex(void)   /* Constructors Declaration */
{
    a = 5;
    b = 7;
}

int main()
{
    Complex n1;
    n1.ReadData();

    return 0;
}
