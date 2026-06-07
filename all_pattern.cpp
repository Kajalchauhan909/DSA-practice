#include <iostream>
using namespace std;
void pattern1(int row)
{
    int start = 1;
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            start = 0;
        }
        else
            start = 1;
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern2(int row)
{
    int start = 1;
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            start = 0;
        }
        else
            start = 1;
        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern3(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * (row - i); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}
void pattern4(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j;
        }
        
        cout << endl;
    }
}
void pattern5(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (char j = 'A'; j <= 'A'+row -i; j++)
        {
            cout << j;
        }
        
        cout << endl;
    }
}
void pattern6(int row)
{ 
    for (int i = 0; i < row; i++)
    {
        char c= 'A' + i;
        for (char j = 'A'; j <= 'A' + i; j++)
        { 
           
            cout << c ;
        }
        
        cout << endl;
    }
}
int main()
{

    int row;
    cout << "enter the number of rows";
    cin >> row;
    pattern6(row);
}