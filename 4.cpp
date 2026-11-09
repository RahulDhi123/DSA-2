// MAJORITY ELEMENT (BRUTE FORCE)

#include<iostream>
using namespace std;

int main(){
    int arr[10]={3,2,2,3,3,3,1,3,1,3};
    int n=10/2;

    for(int i=0;i<10;i++){
        int count=0;
        for(int j=0;j<10;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n){
            cout<<"majority element:"<<arr[i];
            break;
        }
    }
}