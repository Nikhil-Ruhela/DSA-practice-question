#include<iostream>
using namespace std;

 int partition(int arr[], int l, int r) {
        int pivot = arr[r];
        int i = l - 1;
        for (int j = l; j < r; j++) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[r]);
        return i + 1;
    }

    int quickselect(int arr[], int l, int r, int k) {
        if (l <= r) {
            int pi = partition(arr, l, r);
            if (pi == k) {
                return arr[pi];
            } else if (pi > k) {
                return quickselect(arr, l, pi - 1, k);
            } else {
                return quickselect(arr, pi + 1, r, k);
            }
        }
        return -1;
    }

    int kthSmallest(int arr[], int l, int r, int k) {
        return quickselect(arr, l, r, l + k - 1); // k-1 because k is 1-based index
    }
    
int main(){
    int arr[] = {1,3,4,2,0,-1};
    int n = 6;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    int Kth_element = kthSmallest(arr , 0 , 6 , k);
    cout<<k<<"th smallest element is : "<<Kth_element;
    return 0;
}