#include <iostream>

using namespace std;

struct student
{
    int age;
    char fav_char;
    int marks;
};

int main()
{
   struct student harsh,sahil,aman;

   harsh.age = 20;
   harsh.fav_char = 's';
   harsh.marks = 99;

   sahil.age = 19;
   sahil.fav_char = 'a';
   sahil.marks = 98;

   aman.age = 21;
   aman.fav_char = 'p';
   aman.marks= 97;

cout<<"Harsh's age is :"<<harsh.age<<endl;
cout<<"Harsh's fav_char is :"<<harsh.fav_char<<endl;
cout<<"Harsh's marks is :"<<harsh.marks<<endl;


cout<<"Sahil's age is :"<<sahil.age<<endl;
cout<<"Sahil's fav_char is :"<<sahil.fav_char<<endl;
cout<<"Sahil's marks is :"<<sahil.marks<<endl;


cout<<"Aman's age is :"<<aman.age<<endl;
cout<<"Aman's fav_char is :"<<aman.fav_char<<endl;
cout<<"Aman's marks is :"<<aman.marks<<endl;


    return 0;
}
