#include <iostream>
using namespace std;

class Complex
{
private:
   int a, b;

public:
   Complex(int x, int y)
   {
      a = x;
      b = y;
   }

   Complex(int x)
   {
      a = x;
      b = 0;
   }

   Complex(void)
   {
      a = 0;
      b = 0;
   }

   void ReadFunc(void)
   {
      cout << "The Value For the Complex Number  will be :\n"
           << a << "+" << b << "i" << endl;
   }
};

int main()
{
   Complex n1(5, 8);
   n1.ReadFunc();

   Complex n2(7);
   n2.ReadFunc();

   Complex n3;
   n3.ReadFunc();

   return 0;
}
