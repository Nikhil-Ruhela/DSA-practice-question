#include<iostream>
#include<algorithm>
using namespace std;

int move(int arr[] , int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;
    
    while(mid<=high){
        switch (arr[mid])
        {
        case 0:
            mid++;
            break;
        
        default:
        if(arr[mid]<0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
            break;
        }
    }
    
}

 int print_array(int arr[] , int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"";
        }
        cout<<endl;
    }
int main(){
     int arr[] = {-2-5,-1,-3,6,8,9,7,0};
    int n= 9;
    move(arr, n); // Call the sort function
    print_array(arr, n);
    
    return 0;
}