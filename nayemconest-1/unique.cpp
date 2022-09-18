#include <bits/stdc++.h>

using namespace std;




int countDistinct(int arr[], int n)
{



    set <int> s;

    int res = 0;

    for (int i = 0; i < n; i++) {




        if (s.find(arr[i]) == s.end()) {

            s.insert(arr[i]);

            res++;

        }

    }



    return res;
}




int main()
{

    int arr[] = { 6, 10, 5, 4, 9, 120, 4, 6, 10 };

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << countDistinct(arr, n);

    return 0;
}
