#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when the Constructor is being called of " << count << endl;
        
    }
    ~num()
    {
        count--;
        cout << "This is the time when the Destructor is being called of " << count << endl;
        
    }
};
int main()
{
    cout << " We are inside the main Function " << endl;
    cout << " Creating Our First Object " << endl;
    num n1;

    {
        cout << "~~~~~Entering inside the core~~~~~" << endl;
        cout << "Now Making two more objects !" << endl;
        num n2, n3;
        cout << "~~~~~~~Exiting from the core~~~~~~" << endl;
    }
    cout << "Going Back to main function " << endl;

    return 0;
}
