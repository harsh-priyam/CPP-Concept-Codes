#include <iostream>
#include <list>
using namespace std;

void Display(list<int> &lst)
{
    list<int>::iterator lst1;

    for (lst1 = lst.begin(); lst1 != lst.end(); lst1++)
    {
        cout << *lst1 << " ";
    }
}

void Project(list<int> &link)
{
    list<int>::iterator link1;
    for (link1 = link.begin(); link1 != link.end(); link1++)
    {
        cout << *link1 << " ";
    }

    cout << endl;
}

int main()
{
    list<int> list1;
    list<int> list2;

    list1.push_back(5);
    list1.push_back(445);
    list1.push_back(45);
    list1.push_back(59);
    list1.push_back(50);

    list2.push_back(89);
    list2.push_back(489);
    list2.push_back(69);
    list2.push_back(10);
    list2.push_back(99);

    //    ~~~~~~~~~~Concepts on Removal of Certain Datas~~~~~~~~~~~~~~~~

    //  list1.pop_back(); /*Last element delete */
    //  list1.pop_front(); /*First element delete */
    //    list1.remove(45);   /* Deletes the one selective item */

    //   ~~~~~~~~~~~Concepts on Sorting of Datas~~~~~~~~~~~~~~~~~

    //  list1.sort(); /*Sorting*/
   //  list1.reverse(); /*Reversing the Set */
   
     Display(list1);

    // Manually Long method to access the list
    /*   list<int>::iterator iter;
    iter = list1.begin();
    cout << *iter << endl;
    iter++;
    cout << *iter << endl;
    iter++;
    cout << *iter << endl;
    iter++;
    cout << *iter << endl;
    iter++;
    cout << *iter << endl; */
    


//~~~~~~~~~~~~~~~Operations Related To the List 2 ~~~~~~~~~~~~~~~~~~~~~~~~

   // list1.merge(list2); /* Merging two Set into One Single Set */ 
   // Project(list2);

    return 0;
}
