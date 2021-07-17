#include <iostream>
#include <math.h>

using namespace std;


int snt (int n)
{
    if (n < 2)
        return 0;

    if (n == 2)
        return 1:

    for (int i = 0; i < sqrt(n); i ++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main ()
{
// Start add, Tung fix bug 20
    int n;
// Start add, Tung fix bug 20

// Start add, Tung add fix bung 23
    int b; cin >> b;
    if (snt(b))
        cout << b << " la so nguyen to!\n";
// End add, Tung add fix bung 23

// Start add, Tung add fix bung 21

    cout  << "Cac so nguyen to be hon " << n << " la:\n";
    for (int i = 0; i < n ; i++)
    {
        if (snt(i))
            cout << i << " ";
    }

// End add, Tung add fix bung 21


}
