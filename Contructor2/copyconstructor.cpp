#include <iostream>
using namespace std;

class val
{
    public:
    int x;
    val(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<x<<endl;
    }
    val(val &z)
    {
        x = z.x ;
    }
};



int main()
{
    val v(12), q(v);
    v.display();
    q.display();
    
    
    return 0;
}