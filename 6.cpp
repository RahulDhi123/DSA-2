// MAJORITY ELEMENT OPTIMIZED (MOORE'S ALGORITHM)


#include<iostream>
using namespace std;

int major(vector<int>vec){
    int freq=0;
    int ans=0;
    for(int i=0;i<vec.size();i++){
if(freq==0){
    ans=vec[i];
}
if(ans==vec[i]){
   freq++;
}else{
    freq--;
}
    }


return ans;
}


int main(){
    vector<int>vec={1,3,2,2,3,3,3,3,3,2,2,1,3,3,2};
    int ans=major(vec);
    cout<<"MAJOR ELEMENT IS:"<<ans<<endl;

}