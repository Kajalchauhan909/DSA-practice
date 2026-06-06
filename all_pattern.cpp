#include <iostream>
using namespace std;
void pattern1(int row)
{ int start=1;
    for (int i=0;i<row;i++){
        if(i%2==0){
            start=0;
        }
        else start=1;
        for(int j=0;j<i;j++){
cout<<start;
start=1-start;
        }
        cout<<endl;
    }
}
void pattern2(int row)
{ int start=1;
    for (int i=0;i<row;i++){
        if(i%2==0){
            start=0;
        }
        else start=1;
        for(int j=0;j<i;j++){
cout<<start;
start=1-start;
        }
        cout<<endl;
    }
}
int main()
{

    int row;
    cout << "enter the number of rows";
    cin >> row;
    pattern2(row);
}