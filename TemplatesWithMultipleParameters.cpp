//~~~~~~~~~~~~~~~Templates with Multiple Parameters~~~~~~~~~~~~~~~


#include <iostream>
using namespace std;

template <class T1, class T2>

class ClassofNums
{
public:
    T1 num1;
    T2 num2;
    ClassofNums(T1 a, T2 b)
    {
        num1 = a;
        num2 = b;
    }

    void DisplayFunc(void)
    {
        cout << this->num1 << endl
             << this->num2;
    }
};

int main()
{
    ClassofNums<int, char> obj(8, 'H');
    obj.DisplayFunc();

    return 0;
}
