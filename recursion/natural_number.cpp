#include<bits/stdc++.h>
using namespace std;
int number(int i, int n)
{
    if(i>n)
    return 0;
// cout<<i<<" ";   // you can print 1 to n 
    number(i+1,n);
    cout<<i<<" ";   // and by this n to 1

}
int main()
{
    int n;
    cout<<"enter th number ";
    cin>>n;
    number(1,n);
}