#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout<<x+y<<endl;
}
void add(int x, double y)
{
    cout<<x+y<<endl;
}

int main()
{

    add(3,4);
    add(3, 3.4);
    
    return 0;
}