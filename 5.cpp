// MAJORITY ELEMENT (OPTIMAL)

#include<iostream>
using namespace std;

int major(vector<int> vec,int size){
    int freq=1;
   
    sort(vec.begin(),vec.end());
    
   int ans=vec[0];
    for(int i=1;i<size;i++){
        cout<<vec[i]<<endl;
        if(vec[i]==vec[i-1]){
            freq++;
            

        }
        else{
            freq=1;
            ans=vec[i];
        }

        if(freq>size/2){
            return ans;
        }
    }
    
}
int main(){
    vector<int>vec={1,1,2,2,3,3,3,3,2,2,2,1,2,2,2};
    int ans=major(vec,15);
    cout<<"MAJOR ELEMENT IS:"<<ans<<endl;

}