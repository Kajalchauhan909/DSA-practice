#include <iostream>
using namespace std;

class Solution
{
public:
    int whileLoop(int d)
    {

        int i = 1, sum = 0;
        while (i <= 50)
        {
            sum = sum + d;
            d = d + 10;
            i = i + 1;
        }
        return sum;
    }
};
int main()
{
    Solution a;
    int d;
    cout << "enter the number ";
    cin >> d;
    int z = a.whileLoop(d);
    cout << "Sum :" << z;
}