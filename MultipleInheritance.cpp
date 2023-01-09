#include <iostream>
using namespace std;

class Input_num_A
{
protected:
    int atom_A;

public:
    void SetData_A(int a)
    {
        atom_A = a;
    }
};
class Input_num_B
{
protected:
    int atom_B;

public:
    void SetData_B(int b)
    {
        atom_B = b;
    }
};
class Input_num_C
{
protected:
    int atom_C;

public:
    void SetData_C(int c)
    {
        atom_C = c;
    }
};

class Atom_Sum : public Input_num_A, public Input_num_B, public Input_num_C
{
public:
    void DisplayData()
    {
        cout << "The Value of Atom_A is " << atom_A << endl;
        cout << "The Value of Atom_B is " << atom_B << endl;
        cout << "The Value of Atom_C is " << atom_C << endl;
        cout << "The Value of the Sum of the Data will be " << atom_A + atom_B + atom_C << endl;
    }
};
int main()
{
    Atom_Sum ModelX;

    ModelX.SetData_A(63);
    ModelX.SetData_B(29);
    ModelX.SetData_C(93);

    ModelX.DisplayData();

    return 0;
}
