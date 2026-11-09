// PAIR SUM(OPTIMIZED)

#include<iostream>
#include<vector>

using namespace std;

vector<int> Pair(int arr[],int size,int target){
    vector<int> vec;
     int st=0;
    int end=size-1;
    while(st<end){
   
    if(arr[st]+arr[end]<target){
        st++;
    }
    else if(arr[st]+arr[end]>target){
        end--;
    }
    else{
        vec.push_back(st);
        vec.push_back(end);
        return vec;
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

