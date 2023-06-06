#include <iostream>
using namespace std;

class shape
{
    double ans ;
    public :

    void area(int r)
    {
        ans = 3.14 * r * r ;
        cout<<"area of circle is: "<<ans<<endl;
    }

    void area(int l, int b)
    {
        ans = l * b ;
        cout<<"area of rectangle is: "<<ans<<endl;
    }

    void area(double half, int h, int b)
    {
        ans = half * h * b ;
        cout<<ans<<endl;
    }


};



int main()
{
    shape s ;
    s.area(5);
    s.area(4,5);
    s.area(0.5, 4, 5);


    
    
    return 0;
}