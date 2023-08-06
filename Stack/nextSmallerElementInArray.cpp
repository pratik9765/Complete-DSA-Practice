#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        int currElement = v[i];

        while(s.top()>=currElement){
            s.pop();
        }

        // smaller element is found
        ans[i] = s.top();

        // push krdo current element ko
        s.push(currElement);
    }

    cout<<"Printing "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl; 





    return 0;
}