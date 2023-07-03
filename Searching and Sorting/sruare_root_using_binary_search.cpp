#include <iostream>
#include <vector>
using namespace std;

int sqrt(int n){
    int target = n;
    int s=0;
    int e=n;
    int mid= s+ (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            // right search
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;

    double ans = sqrt(n);
    cout<<"Square root of "<<n<<" is : "<<ans<<endl; 

    int precision;
    cout<<"Enter the number of floating digits in precision : "<<endl;
    cin>>precision;

    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=ans; j*j<=n;j=j+step){
            ans=j;
        }
        step = step/10;
    }

    cout<<"Final answer is "<<ans<<endl;


    return 0;
}