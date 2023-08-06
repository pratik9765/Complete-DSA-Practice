#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>
using namespace std;


vector<int> nextSmallerElement(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());

    // left to right
    for(int i=input.size()-1;i>=0;i--){
        int currElement = input[i];

        while(s.top()!= -1 && input[s.top()] >= currElement){
            s.pop();
        }

        // chotta element mil gaya 
        ans[i] = s.top();
          
        // push curr element
        s.push(i);
    }
    return ans;

}



vector<int> prevSmallerElement(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());

    // left to right traverse
    for(int i=0; i<input.size();i++){
        int currElement = input[i];

        while(s.top()!= -1 && input[s.top()]>=currElement){
            s.pop();
        }

        // smaller element is found
        ans[i] = s.top();

        // push krdo current element ko
        s.push(i);
    }
    return ans;
}

int getRectangularAreaHistogram(vector<int>&heights){
    // step 1 prevSmaller output
    vector<int>prev = prevSmallerElement(heights);


    // step 2 nextSmaller output
    vector<int>next = nextSmallerElement(heights);

    int maxArea = INT_MIN;
    int size = heights.size();
    for(int i=0;i<heights.size();i++){
        int length = heights[i];

        if(next[i]==-1){
            next[i] = size;
        }
        int width = next[i] - prev[i] -1;
        int area = length*width;

        maxArea = max(maxArea,area);
    }

    return maxArea;

}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout<<"Ans is : "<<getRectangularAreaHistogram(v);

}