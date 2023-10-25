#include <iostream>
using namespace std;

class Array
{
    public:
    int *a, n, i ;

    Array()
    {
        cout<<"How many students: ";
        cin>>n; // number of students

        a = new int(n); // Memory allocation

        for ( i = 0; i < n; i++)
        {
            cout<<"Enter data: ";
            cin>> a[i];    // taking data from user
        }
    }

    void display() // display students data in loop
    {
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<endl;
        }
        
    }
};

int main()
{
    Array a1, b1 ;

    a1.display();
    b1.display();
    
    return 0;
}