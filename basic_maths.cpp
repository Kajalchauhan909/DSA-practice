#include <iostream>
using namespace std;
int count_digit(int num)
{
    int count = 0;
    while (num > 0)
    {count++;
        num=num/10;
    }
    cout<<"count of digit : "<<count;
}
int reverse(int num)
{ int sum=0;
   
    while (num > 0)
    {   int temp= num%10;
        sum=sum*10+temp;
        num=num/10;
    }
    cout<<"reverse of number : "<<sum;
}

int main()
{
    int num;
    cout << "enter the number";
    cin >> num;
   // count_digit(num);
    reverse(num);
}
