//Arrays of Objects Using the Concept of Pointers 

#include <iostream>
using namespace std;

class ShopDetails
{
private:
    int ID;
    int price;

public:
    void SetData(int a , int b)
    {
        ID = a;
        price = b;
    }
    void GetData(void)
    {
        cout << "The Id of this object is : " << ID << endl;
        cout << "The price of this object is : " << price << endl;
    }
};

int main()
{
    
    int size = 3;
    ShopDetails *ptr = new ShopDetails [size];
    ShopDetails *ptrTemp = ptr;
    int p,q;
for (int i = 0; i < size; i++)
{
    cout<<"Enter the ID and the price for the item "<<i+1<<endl;
    cin>>p>>q;
    ptr -> SetData(p,q);
    // (*ptr).SetData(p,q);
    ptr++;
}
     for (int i = 0; i < size; i++)
     {
         cout<<"Item Number : "<<i+1<<endl;     
         ptrTemp ->GetData();
         ptrTemp++;
     }
     

     
          

    return 0;
}
