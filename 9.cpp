// PRODUCT OF ARRAY EXCEPT SELF(BRUTE FORCE)

#include<iostream>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4};
    vector<int>v;
    for(int i=0;i<vec.size();i++){
        
        int pro=1;
    
        for(int j=0;j<vec.size();j++){
            if(i!=j){
                pro=pro*vec[j];
            }
        }
        v.push_back(pro);
    }


    for(int val:v){
        cout<<val<<endl;

    }
}