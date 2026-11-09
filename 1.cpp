// KADANE'S ALGORITHM
#include<iostream>
using namespace std;
int main(){
    int arr[10]={-4,2,6,-6,9,8,7,3,-2,5};
    int mSum=0;
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        mSum=max(sum,mSum);
        

    }
    cout<<mSum;
}