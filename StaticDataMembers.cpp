#include <iostream>
using namespace std;

class Students
{
      int id;
      static int count;

public:
      void Setdata(void)
      {
            cout << "Enter the Id " << endl;
            cin >> id;
            count++;
      }
      void getData(void)
      {
            cout << "The Id of this Employee is " << id << " and this is employee number " << count << endl;
      }

      static void getCount(void)
      {
            cout << "The Value of the count is " << count << endl;
      }
};
int Students :: count;

int main()
{
      Students harsh, aman, sahil;

      harsh.Setdata();
      harsh.getData();
      Students ::getCount();
      
      aman.Setdata();
      aman.getData();
      Students ::getCount();

      sahil.Setdata();
      sahil.getData();
      Students ::getCount();

      return 0;
}
