#include<iostream>
using namespace std;

class Employee
{
   private:
          int id;
          int salary;
   public:
          void GetData(void)
          {
             cout<<"Enter the ID for the employee"<<endl;
             cin>>id;
             cout<<"Enter the Salary for the Employee"<<endl;
             cin>>salary;
          }
         void GiveData(void)
         {
          cout<<"The Id of the employee is "<<id<<" and the salary is "<<salary<<endl;
         }
};


int main()
{
 /* Employee harsh,harry,shubham,shwetabh,ravi;*/ /*But If there are 5000 employee then array is required*/

Employee AIresearch[4];

for (int i = 0; i < 4 ; i++)
{
    AIresearch[i].GetData();
    AIresearch[i].GiveData();
}
    return 0;
}
