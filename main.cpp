#include <iostream>
using namespace std;
int main()
{
    char plan;
    float minutes,cost;
    printf("Enter Plan <A, B or C> and number of minutes used this month.");
    scanf("%c",&plan);
    scanf("%f",&minutes);
    if((plan=='A')||(plan=='B')||(plan=='C'))
    {
        if(plan=='A')
        {
            cost=39.99;
            if(minutes>450)
                cost=cost+(minutes-450)*.45;
        }
        else if(plan=='B')
        {
            cost=59.99;
            if(minutes>900)
                cost=cost+(minutes-900)*.40;
        }
        else if(plan=='C')
        {
            cost=69.99;

        }
        printf("\nFor your plan %c with %.2f minutes of usage, your bill is : $%.2f",plan,minutes,cost);
    }

    return 0;
}
