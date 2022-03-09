#include <iostream>
using namespace std;

int main()
{
int i, t;
    cin >> t;
    while (t--)
    {
        char A;
        int n;
        i = 0;
        cin >> A >> n;
        if (A == 'I')
        {
            i = 0;
            int sum = 0;
            int *p = new int[n];
            for (i = 0; i < n; i++)
            {
                cin >> *(p + i);
                sum = *(p + i) + sum;
            }
            cout << sum / n << endl;
            delete[] p;
        }
        else if (A == 'C')
        {
            // cin >> n;
            char *p = new char[n];
            char max;
            for (i = 0; i < n; i++)
            {
                cin >> *(p + i);
                if (*(p + i) > max)
                {
                    max = *(p + i);
                }
            }
            cout << max << endl;
        }
        else if (A == 'F')
        {
            // cin >> n;
            double min;
            double *p = new double[n];
            while (n--)
            {

                cin >> *(p + i);
                if (i == 0)
                {
                    min = *(p + i);
                }
                if (*(p + i) < min)
                {
                    min = *(p + i);
                }
                i++;
            }
            cout << min << endl;
        }
    }
    return 0;
}
