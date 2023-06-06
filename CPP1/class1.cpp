#include <iostream>
using namespace std;

class student
{
public:
    int roll, p, c, m, tot;
    float per;


void accept()
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
    cout << roll << " " << tot << " " << per;
}
};

int main()
{
    student s;
    s.accept();
    s.opr();
    s.display();

    return 0;
}

