#include <bits/stdc++.h>

using namespace std;
void insertioner(int arr[], int n, int j)
{
    if (j == n)
        return;

    for (int i = j; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
        else
        {
            break;
        }
    }

    insertioner(arr, n, j + 1);
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

    insertioner(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}