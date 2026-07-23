#include<bits/stdc++.h>
using namespace std;

int f(int arr[] ,int low,int high ){
int pivot =arr[low];
int i=low;
int j=high;
while(i<j){
    while(arr[i]<=pivot && i<=high-1){
        i++;
    }
    while(arr[j]>pivot && j>=low+1){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }
}
 swap(arr[low],arr[j]);
return j;
}
void qs(int arr[], int low, int high){
if(low<high){
    int p = f(arr,low,high);
    qs(arr,low,p-1);
    qs(arr,p+1,high);
}
}
int main(){
int arr[]={9,8,1,2,3};
int high=4;
qs(arr,0,high);
for(int i=0 ;i<5 ;i++){
    cout<<arr[i]<<" ";
}
}