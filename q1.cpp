//name- Pranjal Puri
//roll no.-2010991415
//set no.-3
//question 1
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 

void rearrangeArray(int arr[], int n)
{
    
    for (int i = 1; i < n; i += 2)
    {
        
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }
 
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }
}
 
int main(void)
{
    //int arr[] = { 1, 2 , 3, 4, 5, 6, 7 };
    int arr[]={9,6,8,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    rearrangeArray(arr, n);
 
   
    for (int i = 0; i < n; i++) {
       cout<< arr[i];
    }
 
    return 0;
}
