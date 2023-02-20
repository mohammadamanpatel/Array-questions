#include<iostream>
using namespace std;
void moveallnegatives(int arr[],int n)
{
    int l = 0;
    int h = n-1;
    while(l<h)
    {
        if(arr[l]<0)
        {
            l++;
        }
        else if(arr[h]>0)
        {
            h--;
        }
        else
        {
           swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }
}
int main()
{
    int arr[7] = {1,2,3,-4,-2,4,-5};
    int n = 7;
    moveallnegatives(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
