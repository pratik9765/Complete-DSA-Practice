#include <iostream>
#include <vector>
using namespace std;

double solveDivision(int dividend, int divisor){
    int s=0;
    int e=abs(dividend);
    int mid=s + (e-s)/2;
    int ans = 0;

    while(s<=e){
        if(abs(mid*divisor) == abs(dividend)){
            return mid;
        }
        if(abs(dividend) > abs(mid*divisor)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s + (e-s)/2;
    }

    if((dividend > 0 && divisor > 0) || (divisor<0 && dividend<0)){
        return ans;
    }
    else{
        return ans*-1;
    }

}

int main(){
    double dividend = -37;
    double divisor = 6;

    double solution= solveDivision(dividend,divisor);
    cout<<solution<<endl;

    cout<<"Solution in decimal points :"<<endl;
    
    int precision;
    cout<<"Enter the number of floating digits in precision : "<<endl;
    cin>>precision;

    double step = 0.1;

    for(int i=0;i<precision;i++){
        for(double j=abs(solution); j*abs(divisor)<=abs(dividend); j=j+step){
            solution=j;
        }
        step = step/10;
    }

    if((dividend > 0 && divisor > 0) || (divisor<0 && dividend<0)){
    cout<<"Final answer is "<<solution<<endl;
    }
    else{
    cout<<"Final answer is "<<solution*-1<<endl;
    }


    return 0;
}