#include <iostream>
using namespace std;

class val 
{
    public:
    int x;
    val(int x)
    {
        this -> x = x ; 
        // first x is globle (if !this then 1st x is local)
    }
    void display()
    {
        cout<<x;
    }
};


int main()
{
    val v(12);
    v.display();
    
    return 0;
}