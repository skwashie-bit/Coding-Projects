#include <iostream>
using namespace std;

int main()
{
   int a, b, c, d, e;
   int average;
   int sum;
   cout << "Enter a value:";
   cin >> a;
   cout << "Enter a value:";
   cin >> b;
   cout << "Enter a value:";
   cin >> c;
   cout << "Enter a value:";
   cin >> d;
   cout << "Enter a value:";
   cin >> e;

   sum = a + b + c + d + e;
   cout << "The sum of those numbers is:" << sum << endl;

   average = sum / 5;
   cout << "The average is:" << average << endl;

   /*
    Anything here is ignored by the compiler.

    Also here :)
    */




    return 0;
}
