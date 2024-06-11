#include<iostream>
#include<vector>
#include<climits>
using namespace std;


   
   int min_element(int A[] , int N){
       int minimum = INT_MAX;
       for(int i = 0;i<N;i++){
           if(A[i] < minimum){
               minimum = A[i];
           }
       }
       return minimum;
   }
   
   int max_element(int A[] , int N){
       int maximum = INT_MIN;
       for(int i = 0;i<N;i++){
           if(A[i] > maximum){
               maximum = A[i];
           }
       }
       return maximum;
   }
   
    int findSum(int A[], int N)
    {
    
    	return min_element(A ,N) + max_element(A,N);
    	
    }


int main(){
    // int array[]= (2,4,-1,5,3,9);
    int array[] = {2, 8, 1, 7, 5, 3, 9};
    
    int sum = findSum(array , 7);
    cout << "The sum of the minimum and maximum elements in the array is: " << sum << endl;
    return 0;
}