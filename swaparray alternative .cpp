/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void printarray(int arr[],int n){
    
    for(int i = 0;i< n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
 void swapalternate(int arr[],int n){
     printarray(arr,n);
         for(int i = 0;i< n ;i+=2){
             if(i+1<n){
                 swap(arr[i],arr[i+1]);
             }
         }
    
     
 }
int main()
{
  // swap alternative elements in std::array
  int arr[6] = {2,3,5,8,4,9};
  int ar[7] = {1,4,6,3,8,9,6};
  
  swapalternate(arr,6);
  swapalternate(ar,7);

  cout<< " after swap"<<endl;
  
  printarray(arr,6);
  printarray(ar,7);
  
  

    return 0;
}