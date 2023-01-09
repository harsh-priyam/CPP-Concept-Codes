#include<iostream>
using namespace std;
int main()
{
    int age;

    cout<<"Enter your age"<<endl;
    cin>>age;

    if (age > 0 && age < 18)
    {
        cout<<"You Cannot Vote"<<endl;
    }
    else if (age == 18)
    {
        cout<<"You can Vote but only for the junior elections"<<endl;
    }
    else if (age > 18)
    {
        cout<<"You can Vote!!"<<endl;
    }
    else
    {
        cout<<"You have'nt Born yet"<<endl;
    }
    

    return 0;
}
