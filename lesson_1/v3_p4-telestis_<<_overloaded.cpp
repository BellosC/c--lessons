/*CPP1.overloading,cpp Εκτύπωση διαφορετικών τύπων δεδομένων*/

// o telestis "<<" leme oti einai iperfortwmenos (overloaded) dioti mporei na provalei stin othoni, 
//diaforetikous tupous dedomenwn

#include <iostream>
using namespace std;

int main()
{
    int x=5;
    double y= 5.01;
    
    cout<<"To x einai ";
    cout<<x;
    cout<<"\n";
    cout<<"kai to y einai ";
    cout<<y;
    cout<<"\n";
    cout<<"Apotelesma ";
    cout<<x+y;
    
    return 0;
}