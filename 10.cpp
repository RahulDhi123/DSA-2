// BUBBLE SORT

#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,3,8,6,7,2,1,4,9,0};
    for(int i=0;i<9;i++){
        int Swap=0;
        for(int j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                Swap=1;

                
            }
        }
        if(Swap==0){
            break;
        }
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}