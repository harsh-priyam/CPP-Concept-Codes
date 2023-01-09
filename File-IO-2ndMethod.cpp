/*~~~~~~~~~~~~~~~~~Concept For FILE-I/O System via 2nd Method~~~~~~~~~~~~~~~~~~~*/


#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;


int main()
{
    ofstream hope;
    hope.open("file4.txt");
    hope<<"My name is Harsh Priyam"<<endl;
    hope<<"My age is 20 years"<<endl;
    hope<<"I am a Boy"<<endl;
     hope.close();


     string str;
     ifstream pride;
     pride.open("file5.txt");
    
    /* pride>>str;
     cout<<str; */

// We Can Do this By using the Concept of While Loops 

while (pride.eof() == 0)
{
    getline(pride,str);
    cout<<str<<endl;
}
pride.close();


    





    return 0;
}
