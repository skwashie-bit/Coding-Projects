#include <iostream>
using namespace std;
int main() {
    char c;
    cout<<"Enter vehicle type  C: Car, T:Truck, B:Bus"<<endl;
    cin>>c;
    int h;
    cout<<"Enter the no. of hours parked"<<endl;
    cin>>h;
    if(c=='C')
    {
        if(h>2)
        {
            cout<<"Car C $1.25/hr for first "<<2<<" hours and $1.50/hr after"<<h-2<<" hours"<<endl;
        }
        else
        {
            cout<<"Car C $1.25/hr for first "<<h<<" hours"<<endl;
        }
    }
    else if(c=='T')
    {
        if(h>2)
        {
            cout<<"Truck T $2.75/hr for first "<<2<<" hours and $3.75/hr after"<<h-2<<" hours"<<endl;
        }
        else
        {
            cout<<"Truck $2.75/hr for first "<<h<<" hours"<<endl;
        }
    }
    else if(c=='B')
    {
        if(h>1)
        {
            cout<<"Bus B $9.50/hr for first "<<1<<" hours and $6.75/hr after"<<h-1<<" hours"<<endl;
        }
        else
        {
            cout<<"Bus B $9.50/hr for first "<<h<<" hours"<<endl;
        }
    }
    else {
        cout << "Not a valid vehicle type" << endl;
    }

    return 0;
}
