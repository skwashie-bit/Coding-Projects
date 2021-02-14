#include <iostream>
using namespace std;

int main()
{
    //initialzinzing variables for number of shares,buy cost,sell cost,commission
    double no,buy_cost,sell_cost,commission;
    //asking to enter number of shares,buy cost,sell cost,commission
    cout<<"Enter number of shares purchased, purchase price of stock, commission rate and sale price ";
    //accepting number of shares,buy cost,sell cost,commission
    cin>>no>>buy_cost>>commission>>sell_cost;
    //setting output to 2 decimal points
    cout<<fixed;
    cout<<"setprecision(2)";
    //printing Transaction Details
    cout<<"Transaction Details"<<endl;
    //printing Cost of stock before commission
    cout<<"Cost of stock before commission $"<<buy_cost*no<<endl;
    //printing Comission on purchase
    cout<<"Comission on purchase $"<<buy_cost*no*commission<<endl;
    //printing Total cost of purchase
    cout<<"Total cost of purchase $"<<buy_cost*no+buy_cost*no*commission<<endl;
    //printing Sale revenue before commission
    cout<<"Sale revenue before commission $"<<sell_cost*no<<endl;
    //printing Commission on sale
    cout<<"Commission on sale $"<<sell_cost*no*commission<<endl;
    //printing Total cost on sale
    cout<<"Total cost on sale $"<<sell_cost*no-sell_cost*no*commission<<endl;
    //printing Profit or loss on sale
    cout<<"Profit or loss on sale $"<<(sell_cost*no-sell_cost*no*commission)-(buy_cost*no+buy_cost*no*commission)<<endl;

    return 0;
}
