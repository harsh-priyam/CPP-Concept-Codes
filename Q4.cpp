/* FIND THE DISTANCE BETWEEN TWO POINTS VIA CLASSES AND WITH PARAMETERIZED AND DEFAULT CONSTRUCTORS */

#include <iostream>
#include <cmath>
using namespace std;

class Points
{
private:
    int x1, x2, y1, y2, dis;

   

public:
    void Distance(void)
    {

        dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

        cout << "The Distance between the two points will  be " << dis << endl;
    }

    Points(int, int, int, int);
};

Points ::Points(int a, int b, int c, int d)
{
    x1 = a;
    x2 = b;
    y1 = c;
    y2 = d;
}

int main()
{

    Points p(1, 5, 2, 5);
    p.Distance();

    return 0;
}
