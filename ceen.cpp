

#include <bits/stdc++.h>
using namespace std;

int minPerimeter(int n)
{
    int l = sqrt(n);
    int sq = l * l;

    // if n is a perfect square
    if (sq == n)
        return l * 4;
    else
    {
        // Number of rows
        long long int row = n / l;

        // perimeter of the
        // rectangular grid
        long long int perimeter
                      = 2 * (l + row);

        // if there are blocks left
        if (n % l != 0)
            perimeter += 2;
        return perimeter;
    }
}

// Driver code
int main()
{
    int n;
    cin>>n;
    cout << minPerimeter(n);
    return 0;
}
