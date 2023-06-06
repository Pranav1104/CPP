#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout<<x+y<<endl;
}

void add(int x, int y, int z)
{
    cout<<x+y+z<<endl;
}


int main()
{
    add(3,4);
    add(3,4,5);

    return 0;
}