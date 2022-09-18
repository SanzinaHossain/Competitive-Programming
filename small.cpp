#include<iostream>
using namespace std;
int getTwoSmallest(int arr[], int n) {
   int first = INT_MAX, sec = INT_MAX,l,m;
   for (int i = 0; i < n; i++) {
      if (arr[i] < first) {
         sec = first;
         m=i;
         first = arr[i];
         l=i+1;
      }else if (arr[i] < sec) {
         sec = arr[i];
         m=i+1;
      }
   }
   cout << "First smallest = " << first << endl;
   cout << "Second smallest = " << sec << endl;
   cout<<l<<' '<<m;
}
int main() {
  int array[101],n,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>array[i];
  }
   getTwoSmallest(array, n);
}
