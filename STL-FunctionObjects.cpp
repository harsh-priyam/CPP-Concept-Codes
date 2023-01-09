#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {4,9,7,1,55,625};
    //sort(arr,arr+5);  This is in default mode and it will sort in ascending order

    sort(arr,arr+5,greater<int>()); /* This is in manual mode and it will sort as u command */
 
    for (int i = 0; i < 6 ; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}
