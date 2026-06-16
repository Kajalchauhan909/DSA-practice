#include<bits/stdc++.h>
using namespace std;
int twoPointer(int r,int l,int arr[])
{
    if(r>=l)
    return 0;
    swap(arr[r],arr[l]);
    return twoPointer(r+1,l-1,arr);
}
int onePointer(int i,int n,int arr[])
{
  if(i>=n/2)
    return 0;
    swap(arr[i],arr[n-i-1]);
    onePointer(i+1,n,arr);  
}
int main(){
    int n;
    cout<<"enter the number of element in array";
    cin>>n;
    int arr[n+1];
    cout<<"enter element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //twoPointer(0,n-1,arr);
    onePointer(0,n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}