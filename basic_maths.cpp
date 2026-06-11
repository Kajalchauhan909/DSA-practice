#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count_digit(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    cout << "count of digit : " << count;
}
int reverse(int num)
{
    int sum = 0;

    while (num > 0)
    {
        int temp = num % 10;
        sum = sum * 10 + temp;
        num = num / 10;
    }
    cout << "reverse of number : " << sum;
}
int palindrom(int num)
{
    int sum = 0;
    int dup = num;
    while (num > 0)
    {
        int temp = num % 10;
        sum = sum * 10 + temp;
        num = num / 10;
    }
    if (sum == dup)
        cout << "the number is palindrom";
    else
        cout << "the number is not palindrom";
}
int armstrong_number(int num)
{
    int sum = 0;
    int dup = num;
    while (num > 0)
    {
        int temp = num % 10;
        sum = sum + temp * temp * temp;
        num = num / 10;
    }
    if (sum == dup)
        cout << "the number is armstrong";
    else
        cout << "the number is not armstrong";
}
int all_divisor(int num)
{
    /*cout<<"the divisor of "<<num<<" are :";
  for(int i=1;i<=num/2;i++){

      if (num%i==0)
      {
          cout<<i<<",";
      }
  }
   cout<<num;
   // this approach taking more time complexity hence we use
   // another approach of solving square root method;
   */
    vector<int> ls;                    // this is vector list
    for (int i = 1; i * i <= num; i++) // here we can also use sqrt ( ) instead we use i*i as example num=36 then i sq will not exceed 6
    {
        if (num % i == 0)
        {
            ls.push_back(i);

            if (num / i != i)
            {
                ls.push_back(num / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    // print using for each itterator
    for (auto it : ls)
        cout << it << " ";
}
int prime(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if (num / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
        cout << "the numbrer is prime";
    else
        cout << "the number is not prime";
}
int hcf(int num, int num2)
{
    /*int gcd=1;
 for(int i=1 ;i <= min(num,num2);i++)
 {
     if(num%i==0 && num2%i==0)
     gcd=i;
 }
 cout<<"hcf is :"<<gcd;
 */
    // another method using euclidean
    while (num > 0 && num2 > 0)
    {
        if (num > num2)
            num = num % num2;
        else
            num2 = num2 % num;
    }
    if (num == 0)
        cout << num2;
    else
        cout << num;
}

int main()
{
    int num, num2;
    cout << "enter the number :";
    cin >> num;
    cout << "enter the number 2 :";
    cin >> num2;
    // count_digit(num);
    // reverse(num);
    // palindrom(num);
    // armstrong_number(num);
    // all_divisor(num);
    // prime(num);
    hcf(num, num2);
}
