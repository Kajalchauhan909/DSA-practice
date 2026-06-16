#include <bits/stdc++.h>
using namespace std;
int function1(int n)
{
    if (n == 0)
        return 0;
    return n + function1(n - 1);
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    cout<<function1(n);
}