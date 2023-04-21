
#include <iostream>
using namespace std;

int Div(int a, int b);

int main()
{
    int A, B;
    int C = 0;

    while (true)
    {
        cout << "Enter a number for A: ";
        cin >> A;
        if (cin.fail() || A < 1)
        {
            cin.clear();
            cin.ignore();
            cout << "INVALID: Number must be greater than 0 " << endl;
        }

        cout << "Enter a number for B: ";
        cin >> B;
        if (cin.fail() || B < 0)
        {
            cin.clear();
            cin.ignore();
            cout << "INVALID: Number must be greater than or equal to 0 " << endl;
        }
        else
            break;
    }
    int holder = B;
    while (true)
    {
        if (holder == 1)
            break;
        if (B > 0)
        {
            holder = Div(A, holder);
            C++;
            B--;
        }
        else
            break;
    }
    cout << "C = " << C;
}

int Div(int A, int B)
{
    return B / A;
}
