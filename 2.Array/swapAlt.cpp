#include <iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlt(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main() {
   int arr[6]={2,3,4,1,6,5};
    swapAlt(arr,6);
    printArray(arr,6);
    return 0;
}