#include <iostream>
using namespace std;
class pattern
{
public:
    void triangle(int row)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j <=i; j++)
            {
                cout << " ";
            }
            for (int j = 2*row -2*i-1; j >0; j--)
            {
                cout << "*";
            }
            for (int j = 0; j<=i ; j++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    pattern p;
    int row;
    cout << "enter the number of rows";
    cin >> row;
    p.triangle(row);
}
