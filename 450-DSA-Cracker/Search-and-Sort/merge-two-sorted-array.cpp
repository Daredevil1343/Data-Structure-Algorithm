#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void merge(int arr1[],int arr2[], int n, int m)
        {
            int j=0,i=n-1;
            while(j<m&&i>-1&&arr2[j]<arr1[i])
            {
                swap(arr2[j++],arr1[i--]);
                sort(arr1,arr1+n);
                sort(arr2,arr2+m);
            }
        }
};


int main(){
    int n,m,i;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(i=0;i<n;i++)
    cin>>arr1[i];
    for(i=0;i<m;i++)
    cin>>arr2[i];
    Solution asy;
    asy.merge(arr1,arr2,n,m);
    for(i=0;i<m;i++)
    cout<<arr1[i];
    for(i=0;i<m;i++)
    cout<<arr2[i];
    return 0;
}