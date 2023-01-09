#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 89;
    virtual void DisplayFunc(void)
    {
        cout << "The Value of the var_base in the base class will be :" << var_base << endl;
    }
};

class DerievedClass : public BaseClass
{
public:
    int var_der = 56;
    void DisplayFunc(void)
    {
        cout << "The Value of the var_base in the derieved class will be :" << var_base << endl;
    }
};
int main()
{
    BaseClass *ptr_Base_Class;
    BaseClass obj_BaseClass;
    DerievedClass obj_DerClass;

    ptr_Base_Class = &obj_DerClass;

    ptr_Base_Class->DisplayFunc();

    return 0;
}
