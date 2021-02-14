#include <iostream>
using namespace std;
int main()
{
    int day, month,year;
    cout<<"Please enter a numeric month day and two digit year, separated by spaces\n";
    cin>>month>>day>>year; // ask user to enter the date and store it in the above variables.
    if(month*day==year) // check for conditon whether month times day equals year
        cout<<"It's a MAGIC date!\n";
    else // if condition is not true print not MAGIC date!
        cout<<"It's not a MAGIC date!\n";
    return 0;
}
