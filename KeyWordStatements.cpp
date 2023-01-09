/* Concept of Pointers using Arrow KeyWord */

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void SetFunction(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void DisplayFunc(void)
    {
        cout << "The Real Part will be " << real << " and the imaginary  part will be " << imaginary << endl;
    }
};

int main()
{
//    Complex c1;       /* Using The Concepts of Simple Pointers */
  //  Complex *ptr = &c1;

    Complex *ptr = new Complex ; /* Using the Concepts of new statements */ 

     // (*ptr).SetFunction(5, 6);
    //  (*ptr).DisplayFunc();

      ptr->SetFunction(5,6);  /* Using Arrow KeyWord */
      ptr->DisplayFunc();
    return 0;
}
