#include<iostream>
#include <vector>
using namespace std;


void findMissing(int *a, int n){
    for(int i=0;i<n;i++){
        int index = abs(a[i]);
        if(a[index-1]>0){
            a[index-1] *= -1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<i+1<<" ";
        }
    }

}


int main(){
    int n;
    int a[]={1,3,1,3,4};
    n= sizeof(a)/sizeof(a[0]);

    findMissing(a,n);


    return 0;
}