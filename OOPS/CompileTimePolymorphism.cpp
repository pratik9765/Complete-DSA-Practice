#include <iostream>
using namespace std;

// Function Overloding
// class Maths{
//     public:

//     int sum(int a,int b){
//         return a+b;
//     }

//     int sum(int a,int b,int c){
//         return a+b+c;
//     }

//     int sum(int a,float b){
//         return a+b+10;
//     }

// }; 
// int main(){
//     Maths m1;

//     cout<<m1.sum(2,3)<<endl;
//     cout<<m1.sum(2,3,3)<<endl;
//     cout<<m1.sum(2,4.91f);  



//     return 0;
// }




class Param{
    public: 
    int val;

    void operator +(Param& obj2){
        int value1 = this->val;
        int value2 = obj2.val;

        cout<<(value2-value1)<<endl;
    }
};



int main(){
    Param obj1,obj2;
    obj1.val =7;
    obj2.val =2;

    // This should print the difference betn them
    obj1 + obj2;

    return 0;
}