//name- Pranjal Puri
//roll no.-2010991415
//set no.-3
//question 2
#include <bits/stdc++.h>

using namespace std;

void findPair(int arr[], int n, int k)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
    {
        if (map.find(k - arr[i]) != map.end())
        {
            cout << "Pair found (" << arr[map[k - arr[i]]] << ", "
                 << arr[i] << ")\n";
            return;
        }
        map[arr[i]] = i;
    }
    cout << "Pair not found";
}
int main()
{
    int n;
    cout<<"Size of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"input k(sum):";
    cin>>sum;
    
    findPair(arr,n,sum);

    return 0;
}

/*void findPair(int nums[], int n, int k)
{

    for (int i = 0; i < n - 1; i++)
    {
       
        for (int j = i + 1; j < n; j++)
        {
       
            if (nums[i] + nums[j] == k)
            {
                cout<< nums[i], nums[j];
                return;
            }
        }
    }
 
  
    cout<<"Pair not found";
}
 
int main(void)
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, k);
 
    return 0;
}*/
