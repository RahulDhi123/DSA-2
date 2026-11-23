// SELECTION SORT

#include<iostream>
using namespace std;
int main(){
      int arr[10]={5,3,8,6,7,2,1,4,9,0};
      for(int i=0;i<9;i++){
        int si=i;
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[si]){
                si=j;
            }
        }
        swap(arr[i],arr[si]);
      }

      for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}