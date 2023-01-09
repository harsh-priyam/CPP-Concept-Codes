/* The Concept of This Pointer */

#include <iostream>
using namespace std;

class Class
{
private:
    int age;

public:
    void SetData(int age)
    {
       // age = age;  This will give a garbage value as the variable name is same........
       // and in order to get through this error we have to use the Concept of This pointer 
       
       this -> age = age; /*Now it will throw no error or any garbage value */
    }
    void GetData(void)
    {
        cout << "The Value of  age will be :" << age;
    }
};

int main()
{
    Class Rohan;
    Rohan.SetData(21);
    Rohan.GetData();

    return 0;
}
