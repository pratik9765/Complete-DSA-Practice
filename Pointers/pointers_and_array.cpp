#include <iostream>
using namespace std;


void update(int *p ){
    *p = *p + 10;
}

int main() {

    // int arr[4] = {12,14,16,18};
    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;

    // int* p = arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;


    // int arr[4] = {12,14,16,18};
    // cout<<*arr<<endl;
    // cout<<*arr + 1 <<endl;
    // cout<<*(arr + 1) <<endl;
    // cout<<*(arr + 3) <<endl;


    // int arr[4] = {12,14,16,18};
    // cout<<arr[0]<<endl;
    // cout<<0[arr]<<endl;


    // int arr[10];
    // cout<<sizeof(arr)<<endl;
    // int* ptr = arr;
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;



    // char ch[10] = "Babbar";
    // char* c = ch;
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;

    // cout<<&c<<endl;
    // cout<<*c<<endl;
    // cout<<c<<endl;


    // char ch[10] = "sherBano";
    // char* c = &ch[0];

    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<*(ch + 3)<<endl;
    // cout<<c<<endl;
    // cout<<&c<<endl;
    // cout<<*(c + 3)<<endl;
    // cout<<c + 2<<endl;
    // cout<<*c<<endl;
    // cout<<c+8<<endl;


    int a = 5;
    int* ptr = &a;
    update(ptr);
    cout<<a<<endl;




    return 0;
}