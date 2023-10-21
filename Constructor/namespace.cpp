#include <iostream>
using namespace std;

// user defined namespace
namespace xyz
{
    class Animal
    {
    public:
        char nm[100];

        void accept()
        {
            cout << "Enter Your name: " << endl;
            cin >> nm;
        }
        void display()
        {
            cout << nm;
        }
    };
}

int main()
{
    // :: is a scope resolution operator
    xyz::Animal a;

    a.accept();
    a.display();

    return 0;
}