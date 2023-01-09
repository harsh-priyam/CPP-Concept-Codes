#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number()
    {
        a = 0;
    } /*Default Constructors */

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout << "The Copy Constructor invoked!!!!!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The Value for the object will be " << a << endl;
    }
};

int main()
{
    Number x, y, z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();

    z2 = z;  /* Copy Constructor Not Invoked */

    Number z3 = z; /* Copy Constructor Invoked  */
    z3.display(); 
    
    return 0;
}
