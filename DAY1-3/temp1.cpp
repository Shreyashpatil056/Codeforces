#include<iostream>
using namespace std;

void arrayreverse(int arr[], int n, int start, int end){
  if(start > end){
    return;
  }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] =temp;

    arrayreverse(arr, n, start+1, end-1 );
}

void printarray(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}

int main(){
  int arr[] ={1,2,3,4,5,6,7,8,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout<<n<<endl;
  printarray(arr, n);
  arrayreverse(arr, n, 0, n-1);
  printarray(arr, n);
  return 0;
}