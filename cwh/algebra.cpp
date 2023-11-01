#include<iostream>

using namespace std;

int main(){
    
    
    // 1.   if else if - if statements
    // if (age<18){
    //     cout<<"you are not eligible for voting"<<endl;
    // }
    // else if (age>18)
    // {
    //     cout<<"welcome to the party"<<endl;
    // }
    // else
    // {
    //     cout<<"welcome"<<endl;
    // }


    // 2. swich case
    // switch (age)
    // {
    // case 2:
    //     cout<<"Your are teenager"<<endl;
    //     break;
    // case 18:
    //     cout<<"you are adult"<<endl;
    //     break;
    // case 60:
    //     cout<<"your are uncle or aunty"<<endl;
    // default:
    //     cout<<"you are dead"<<endl;
    //     break;
    // }
    // int i;
    // for ( i = 0; i < 10; i++)
    // {
    //     cout<<i<<endl;
    // }
    int age;

    cout<<"enter your age"<<age<<endl;
    cin>>age;

    switch (age)
    {
    case 60:
    cout<<"few days remaning!!!!";
    break;
    case 80:
    cout<<"few days left!!!!";
    break;
    }
return 0;
}