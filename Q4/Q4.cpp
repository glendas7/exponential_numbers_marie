
#include <iostream>
using namespace std;

int mult(int a, int b);

int main()
{
    int A, B;
    int C = 1;

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
    while (true)
    {
        if (B > 0)
        {
            C = mult(A, B);
            if (B == 2)
                B -= 2;
            else
                B--;
        }
        else
            break;
    }
    cout << "C = " << C;
}

int mult(int A, int B)
{
    if (B == 0)
        return 1;
    if (B == 1)
        return A;
    return A * A;
}
