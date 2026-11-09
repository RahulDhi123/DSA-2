// BEST TIME TO BUY AND SELL STOCK

#include<iostream>
using namespace std;
int main(){
    vector<int>prices={7,1,5,3,6,4};
    if(prices.size()==1){
        return 0;
    }
    int buy=0;
    int maxProfit=0;
    int profit=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<prices[buy]){
            buy=i;
        }
        else{
            profit=prices[i]-prices[buy];
        }

        maxProfit=max(maxProfit,profit);
    }

    cout<<"MAX PROFIT:"<<maxProfit;
}