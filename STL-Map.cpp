// Map is an Assosiative array 


#include<string>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    map<string,int> AgeMap;
    AgeMap["Son"] = 20;
    AgeMap["Daughter"] = 23;
    AgeMap["Mother"] = 45;
    AgeMap["Father"] = 47;

    AgeMap.insert({{"DadaJi",87},{"DadiJi",83}});  /*Insertion of more data in the Map */

    map<string,int>:: iterator itr; 

    for (itr = AgeMap.begin();itr != AgeMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
    return 0;
}
