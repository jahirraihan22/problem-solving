#include <iostream>
using namespace std;

int main()
{
    int hour[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n;
    bool flag1 = true, flag2 = true;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 12 * 59)
    {
        cout << "This is not time number " << endl
             << "Enter number between 0 - " << 12 * 59 << endl;
    }
    int s = sizeof(hour) / sizeof(hour[0]);
    for (int i = 0; i < s; i++)
    {
        if (n % hour[i] == 0)
        {
            int sec = n / hour[i];
            if (sec <= 59)
            {
                cout << hour[i] << ":" << sec << endl;
                flag1 = false;
                flag2 = false;
            }
            else
            {
                flag2 = true;
            }
        }
    }
    if (flag1 && flag2)
    {
        cout << n << " is not time number" << endl;
    }
    return 0;
}