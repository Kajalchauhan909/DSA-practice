#include<bits/stdc++.h>
using namespace std;
void arrayy(int arr[],int n,int hashh[])
{
for (int i=0;i<n;i++){
    hashh[arr[i]]+=1;
}
int largest=INT_MIN;
int ans=-1;
for(int i=0;i<13;i++){
    if(largest<hashh[i]){
        largest=hashh[i];
        ans=i;
    }
    
}
cout<<"heighest occured element is :"<<ans<<" comes "<<largest<<" times ";
}
int main()
{
  int n;
    cout << "enter size";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hashh[13]={0};
    arrayy(arr,n,hashh);
    
}
