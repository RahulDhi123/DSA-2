// PAIR SUM(BRUTE FORCE)

#include<iostream>
#include<vector>
using namespace std;

vector <int> Pair(int arr[],int size,int target){
    vector <int> vec;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                vec.push_back(i);
                vec.push_back(j);

            }
        }
    }
    return vec;
}

int main(){
    int arr[5]={1,2,7,11,15};
    vector <int> v;
    v=Pair(arr,4,9);

    cout<<v[0];
    cout<<endl;
    cout<<v[1];
}

