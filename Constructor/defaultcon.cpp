#include <iostream>
using namespace std;

class Age
{
public:
    int a;
    Age(int x=0)
    {
        a = x;
    }

    void display()
    {
        cout << "Your age is: "<<a<<endl;
    }
};

int main()
{
    Age d(10), d1;
    
    d.display();
    d1.display();

    return 0;
}