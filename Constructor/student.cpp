#include <iostream>
using namespace std;

class student
{
public:
    int roll, p, c, m, tot;
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
    int n;
    cout << "enter no. of students: ";
    cin >> n;

    student s[n];

    for (int i = 0; i < n; i++)
    {
        s[i].opr();
    }

    cout << "Roll\t"<< "Total\t"<< "Percentage\t" << endl;

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}