//largest element in array
#include<iostream>
#include<climits>
using namespace std;
int largestelement(int arr[],int size){
    int mx=INT_MIN;
    for (int i = 0; i < size; i++)
    {
       mx=max(mx,arr[i]);
    }
    cout<< mx;



}

int main(){
    int arr[]={1,3,99,7};
    int sz=4;
    largestelement(arr,sz);
    
    return 0;
}