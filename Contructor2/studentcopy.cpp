#include <iostream>
using namespace std;

class student
{
public:
    int roll, p, c, m, tot, x;
    float per;

    student()
    {

        cout << "Enter Roll number: ";
        cin >> roll;
        cout << "Enter phy: ";
        cin >> p;
        cout << "Enter chem: ";
        cin >> c;
        cout << "Enter maths: ";
        cin >> m;
    }

    student(student &z) // copy all the data from s1 to s2;
    {
        roll = z.roll;
        p = z.p;
        c = z.c;
        m = z.m;
    }

    void opr()
    {
        tot = p + c + m;
        per = (float)tot / 3;
    }

    void display()
    {
        cout << roll << "\t" << tot << "\t" << per << "\t" << endl;
    }
};

int main()
{
    student s1, s2(s1);

    s1.opr();
    s2.opr();

    cout << "Roll\t"<< "Total\t"<<"Percentage\t" << endl;

    s1.display();
    s2.display();

    return 0;
}