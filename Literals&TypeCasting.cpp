#include<iostream>
using namespace std;


int main()
{
    
float d = 24.63;
long double e = 46.98;


    cout<<"The Size of d will be "<<sizeof(24.63)<<endl;
    cout<<"The Size of e will be \n"<<sizeof(46.98)<<endl;
    cout<<"The Size of d will be \n"<<sizeof(24.63f)<<endl;
    cout<<"The size of d will be \n"<<sizeof(24.63F)<<endl;
    cout<<"The size of e will be \n"<<sizeof(46.98l)<<endl;
    cout<<"The size of e will be \n"<<sizeof(46.98L)<<endl;


cout<<"The value of d will be using Typecasting: "<<int(d)<<endl;  /* Typecasting as from float to integer */


    return 0;
}

