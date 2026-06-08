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
        for (char j = 'A'; j <= 'A' + row - i; j++)
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
        char c = 'A' + i;
        for (char j = 'A'; j <= 'A' + i; j++)
        {

            cout << c;
        }

        cout << endl;
    }
}
void pattern7(int row)
{
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < row - i - 1; j++)
        {
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i +1)/2;
         for(int j =0;j<2*i +1;j++)
         {  
            cout<<ch;
            //if(j<i)  you can just simply use this condition to solve
            if( j>=breakpoint)
            ch--;
            else
            ch++;
            }
         for (int j = 0; j < row - i - 1; j++)
        {
            cout<<" ";
        }
        cout << endl;
    }
}
void pattern8(int row)
{
    for (int i = 1; i <= row; i++)
    {
        char ch ='A'+ (row - i);
        for (int j = 0; j <i; j++)
        {  
            cout<<ch;
            ch++;
        }
        cout << endl;
    }
}
void pattern9(int row)
{
    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j <row-1; j++)
        {   if (i==0 || i==row-1 || j==0 || j==row-2)
            cout<<"*";
            else 
            cout<<" ";

        }
        cout << endl;
    }
}
void pattern10(int row)
{
    for (int i = 0; i < row; i++)
    {
        
        for (int j = row; j >i; j--)
        {   
          cout<<"*";  
          
        }
        for (int j = 0; j <2*i; j++)
        {   
          cout<<" ";  
          
        }
        for (int j = row; j >i; j--)
        {   
          cout<<"*";  
          
        }
        
        cout << endl;
    }
      for (int i = 0; i <row; i++)
    {
        
        for (int j =0; j <=i; j++)
        {   
          cout<<"*";  
          
        }
        for (int j = 0; j <2*( row-i-1); j++)
        {   
          cout<<" ";  
          
        }
        for (int j = 0; j <=i; j++)
        {   
          cout<<"*";  
          
        }
        
        cout << endl;
    }
}
int main()

{

    int row;
    cout << "enter the number of rows";
    cin >> row;
    pattern10(row);
    
}