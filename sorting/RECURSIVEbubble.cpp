#include <bits/stdc++.h>
using namespace std;
void bubbler(int arr[], int n)
{
    if (n == 1)
        return;
    bool didswap=0;    
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            didswap=1;
        }
    }
    if (didswap==0) return;
    bubbler(arr, n - 1);
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
    bubbler(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}