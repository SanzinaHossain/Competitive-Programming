
#include<bits/stdc++.h>
using namespace std;
int l,m;
int main()
{
    int smallest, secondsmallest;
    int array[100], size, i;
    printf("\n How many elements do you want to enter: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 1 ; i <=size; i++)
        scanf("%d", &array[i]);
    if (array[1] < array[2])
        {
        smallest = array[1];
        l=1;
        secondsmallest = array[2];
        m=2;
        }
    else
    {
      smallest = array[2];
      l=2;
      secondsmallest = array[1];
      m=1;
    }
    for (i = 3; i <=size; i++)
     {
        if (array[i] < smallest)
        {
           secondsmallest = smallest;
            m=i;
           smallest = array[i];
           l=i;
        }

        else if (array[i] < secondsmallest)
        {
            secondsmallest = array[i];
             m=i;
        }
    }
    printf(" \nSecond smallest element is %d", secondsmallest);
    cout<<m;
    cout<<endl;
    cout<<smallest<<' '<<l;
}
