// 1.Select an element in each iteration from the unsorted array(using a loop).
// 2.Place it in its corresponding position in the 
// sorted part and shift the remaining elements accordingly (using an inner loop and swapping).
// 3.The “inner while loop” basically shifts the elements using swapping.



#include<iostream>
#include<vector>
#include<algorithm>             
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
using namespace std;
void insertionSort(vector<int>res)
{
   int n = res.size();
   for(int i=0;i<n;i++)
   {
    int j = i;
    while(j>0 && res[j-1]>res[j])
    {
        swap(res[j-1],res[j]);
        j--;
    }
   }
   cout<<"The array after than insertion sort\n";
   for(int i=0;i<n;i++)
   {
    cout<<res[i]<<" ";
   }
}
int main()
{
    int n;
    cin>>n;
    vector<int>res(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        res[i] = x;
    }
    insertionSort(res);
    return 0;
}