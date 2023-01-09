/*Objects Memory Allocations and with the Use Of the Arrays */

#include <iostream>
using namespace std;

class Library
{
private:
    int ID[100];
    int price[100];
    int counter;

public:
    void myID(void);
    void BookCounter(void) { counter = 0; }
    void DisplayID(void);
};

void Library ::myID(void)
{
    cout << "Enter the ID for the Book " << counter + 1 << endl;
    cin >> ID[counter];
    cout << "Enter its Price " << endl;
    cin >> price[counter];
    counter ++;
};

void Library ::DisplayID(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "With the ID = " << ID[i] << " has the book price of " << price[i] << endl;
    }
};

int main()
{
    Library BhartiBhawan;

    BhartiBhawan.BookCounter();
    BhartiBhawan.myID();
    BhartiBhawan.myID();
    BhartiBhawan.DisplayID();

    return 0;
}
