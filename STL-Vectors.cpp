#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to create a Vector
    vector<int> vec1;     //zero length integer vector
    vector<char> vec2(4); // 4 element chracter vector

    vector<char> vec3(vec2); // 4 element chracter vector from vec 2
    display(vec3);
    vector<int> vec4(6, 3); // 6-element vector of 3s
    display(vec4);
    cout << vec4.size();

    vec2.push_back('5');
    display(vec2);

    vector<int> vec1;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter an element to add to this vector" << endl;
        cin >> element;
        vec1.push_back(element);
    }
    //vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 5, 566);
    display(vec1);
    return 0;
}
