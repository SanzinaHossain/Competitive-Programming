#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int low,int high);
void mergeS(int arr[], int low, int mid, int high);
int main()
{
    int i,n,ar[100],mid;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    mergeSort(ar,0,n-1);

}

void mergeSort(int arr[],int low,int high)
{
    int mid;
    if(low<=high)
    {
       mid=(low+high)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    mergeS(arr,low,mid,high);
    }
}

void mergeS(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 =  high - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1+ j];
    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}
