#include <bits/stdc++.h>
using namespace std;
void sub(int i, int arr[], int n, vector<int> &ds)
{
    if (i == n)
    {
        for (auto it : ds){
            cout << it << " ";
        }   
        
        if (ds.size() == 0)
            cout << "{}";
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);
    sub(i + 1, arr, n, ds);
    ds.pop_back();
    sub(i + 1, arr, n, ds);
}
int main()
{
    int arr[] = {4, 2, 5};
    int n = 3;
    vector<int> ds;
    sub(0, arr, n, ds);
}