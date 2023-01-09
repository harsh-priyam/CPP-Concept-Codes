#include<iostream>
#include<fstream>

using namespace std;

int main()
{
      string str = "I will not let you destroy my world";
      string str2;

//  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONCEPT-Reading~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

      // Opening files using Constructor and Reading it
      ofstream out("file1.txt");
        out<<str;  



//  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONCEPT-WRITING~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    

     // Opening files using Constructor and Reading it
     ifstream in("file2.txt");
     getline(in , str2); /* or */  /*This Can Read the spaces */
    // in>>str2; This could not read the spaces or new line
     cout<<str2;



    return 0;
}
