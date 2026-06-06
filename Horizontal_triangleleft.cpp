#include <iostream>
using namespace std;
class pattern
{
public:
    void triangle(int row)
    {
        for (int i = 0; i < (row / 2) + 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }

        for (int i = 0; i < (row / 2); i++)
        {
            for (int j = i; j < row / 2 - 1; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
    }
    void another(int r)
    {
        for (int i = 1; i <= 2 * r - 1; i++)
        {
            int star = i;
            if (i > r)
            {
                star = 2 * r - i;
            }
            for (int j = 1; j <= star; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
    }
};
int main()
{
    pattern p;
    int row, r;
    cout << "enter the number of rows";
    cin >> row;
    p.triangle(row);
    cout << "enter the number of rows";
    cin >> r;
    p.another(r);
}