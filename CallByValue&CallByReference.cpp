/*Call By Reference using Pointers */


#include <iostream>
using namespace std;

void SwappingFunction(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1, num2;

    printf("Enter any value for num1\n");
    scanf("%d", &num1);
    printf("Enter any value for num2\n");
    scanf("%d", &num2);

    printf("Before Swapping the value for num1 is %d and num2 is %d\n", num1, num2);

    SwappingFunction(&num1,&num2);

 printf("\n");
    printf("After Swapping the value for num1 is %d and num2 is %d\n", num1, num2);

    return 0;
}


/*Using the Reference Call without using Pointers*/

/*
#include <iostream>
using namespace std;

void SwappingFunction(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1, num2;

    printf("Enter any value for num1\n");
    scanf("%d", &num1);
    printf("Enter any value for num2\n");
    scanf("%d", &num2);

    printf("Before Swapping the value for num1 is %d and num2 is %d\n", num1, num2);

    SwappingFunction(num1, num2);

 printf("\n");
    printf("After Swapping the value for num1 is %d and num2 is %d\n", num1, num2);

    return 0;
}
*/
