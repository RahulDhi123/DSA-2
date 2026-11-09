// CONTAINER WITH MOST WATER

#include<iostream>
using namespace std;

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int st=0;
    int end=height.size()-1;
    int maxArea=0;

    while(st<end){
        int width=end-st;
        int length=min(height[st],height[end]);
        int area=length*width;

        maxArea=max(maxArea,area);

        if(height[st]<height[end]){
            st++;
        }
        else{
            end--;
        }
    }

    cout<<"MAX AREA IS:"<<maxArea;
}