#include <iostream>
using namespace std;

// void printName(int n){
//     for(int i=0;i<n;i++){

//     cout << "Hello World!" << endl;
//     }
// }


// int getSum (int num1, int num2){
//     return num1 + num2;
// }



// int getMax(int a, int b, int c){
//     int max = (a>b ? (a>c ? a: c) : (b>c ? b : c));
//     return max;
// }

// int sumOfFirstN(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;
// }



// int sumOfFirstEvenN(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){

//         sum=sum+i;
//         }
//     }
//     return sum;
// }



// float areaOfCircle(float r){
//     return 3.14*r*r;
// }


// void evenOrOdd(int num){
//     if(num%2==0){
//         cout<<"Given number is even.";
//     }
//     else{
//         cout<<"Given number is odd.";
//     }
// }




// int getfactorial(int n){
//     int fact= 1;
//     if(n==1){
//         return fact;
//     }
//     else{
//         while(n>0){
//             fact= fact* n;
//             n--;
//         }
//         return fact;
//     }
// }




// void checkPrimeNo(int num){
//     int flag = 1;
//     for(int i=2;i<num/2;i++){
//         if(num%i==0){
//             flag=0;
//         }
//     }

//     if(flag){
//         cout<<"Given number is prime number" ;
//     }
//     else{
//         cout<<"Given number is not a prime number" ;
//     }
// }





// void printPrimeNo(int n){
//     for(int i=2;i<n;i++){
//         for(int j=2;j<n/2;j++){
//             if(i%j==0){
//                 break;
//             }
//             else{
//                 cout<<i;
//                 cout<<endl;
//                 break;
//             }
//         }
//     }
// }




void reverseInteger(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
        }
    cout<<rev;
    }



int main(){
    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // printName(num);



    // int a,b;
    // cout<<"Enter value of a & b : ";
    // cin>>a>>b;
    // int sum = getSum(a,b);

    // cout<<"Sum is : "<<sum;
    

    // int a,b,c;
    // cout<<"Enter 3 numbers : ";
    // cin>>a>>b>>c;
    // int maxNum = getMax(a,b,c);
    // cout<<"Maximum number is : "<<maxNum;



    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // int total = sumOfFirstN(num);
    // cout<<"Sum of first "<<num<<" is : "<<total;



    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // int total = sumOfFirstEvenN(num);
    // cout<<"Sum of first "<<num<<" is : "<<total;



    // float num;
    // cout<<"Enter radius of circle : ";
    // cin>>num;
    // float area = areaOfCircle(num);
    // cout<<"Area of given circle is : "<<area;



    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // evenOrOdd(num);



    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // int factorial =getfactorial(num);
    // cout<<"factorial is : "<<factorial;




    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // checkPrimeNo(num);





    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // printPrimeNo(num);





    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // reverseInteger(num);


    int num1,num2,xyz;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;

    cout<<"Enter a num : ";
    cin>>xyz;

    int count=0;
    for(int i=num1+1;i<num2;i++){
        while(i>0){
            if(i%10==xyz){
                count++;
            }
            i=i/10;
        }
        cout<<count;
    }


    return 0;
}