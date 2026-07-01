#include <bits/stdc++.h>
using namespace std;
void  bubble(int arr[],int n)
{
    for (int i = n-1; i > 0; i++)
    {
        int did_swap=0;
        for (int j = 0; j <= n - 1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                did_swap=1;
            }
        }   
    if(did_swap==0){
        break;
    }
    }
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
    bubble(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}