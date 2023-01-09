#include<iostream>
using namespace std;

int sum(int a , int b)
{

cout<<"Using Two arguments "<<endl;
return(a+b);

}

int sum(int a , int b , int c)
{

cout<<"Using Three arguments"<<endl;
return(a+b+c);


}


int main()
{
    int a=50,b=80,c=70;
cout<<"the sum is "<<sum(a,b)<<endl;
cout<<"the sum is "<<sum(a,b,c)<<endl;




    return 0;
}
