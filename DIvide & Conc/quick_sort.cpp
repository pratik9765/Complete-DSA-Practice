#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    // ste1 select pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step2 find right position for pivot element and place it there
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    int rightIndex = s + count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex = rightIndex;

    // step3 left me chota and right mai bada
    int i =s;
    int j =e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }

        // 2 cases
        // A) you found the element to swap
        // B) No need for swapping
        if(i < pivotIndex && j >pivotIndex){
            swap(arr[i],arr[j]);
        }

    }

    return pivotIndex;    

}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }

    // partition logic -> return pivot index
    int p = partition(arr,s,e);

    // recursive call
    // left call
    quickSort(arr,s,p-1);
     
    // right call
    quickSort(arr,p+1,e);
}

int main(){

    int arr[] = {8,1,3,4,20,50,50,50,50,50,1,1,1,1,2,2,2,50,30};
    int n = 19;

    int s = 0;
    int e = n-1;
    quickSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}