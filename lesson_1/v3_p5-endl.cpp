/*CPP1.overloading.cpp Χρηση του endl*/

#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    double y = 5.01;
//tropos 1:    
    cout<<"To x einai ";
    cout<<x;
    cout<<endl;
    cout<<"kai to y einai ";
    cout<<y;
    cout<<endl;
    cout<<x+y;
    cout<<endl;
    cout<<"---------------------------------------";
    cout<<endl;
//tropos 2:
    cout<<"to x einai "<<x<<endl<<"kai to y einai "<<y<<"\n";
    
    return 0;
}