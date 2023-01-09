#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_num;

public:
    void SetRoll_num(int r)
    {
        roll_num = r;
    }
    void Printnum(void)
    {
        cout << "The Roll Number for the Student will be : " << roll_num << endl;
    }
};

class Test : public virtual Student
{
protected:
    int physics;
    int maths;

public:
    void Set_Marks(int m1, int m2)
    {
        physics = m1;
        maths = m2;
    }
    void Print_Marks(void)
    {
        cout << "The Marks Obtained in the physics will be : " << physics << endl;
        cout << "The Marks Obtained in the Maths will be : " << maths << endl;
    }
};

class Sports : public virtual Student
{
protected:
    int score;

public:
    void Set_Score(int sc)
    {
        score = sc;
    }
    void Print_Score(void)
    {
        cout << "The Score obtained in the Physical activity will be :" << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    int total;

public:
    void Print_Total(void)
    {
        total = physics + maths + score;
        Printnum();
        Print_Marks();
        Print_Score();
        cout << "The Total Score of the student will be : " << total << endl;
    }
};

int main()
{
    Result Harsh;
    Harsh.SetRoll_num(23);
    Harsh.Set_Marks(89, 82);
    Harsh.Set_Score(9);
    Harsh.Print_Total();

    return 0;
}
