#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*issue will be 
    1. visited pe revisiting
    solution 
    unko mark kar de.....*/
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<bool>visited(n,false);
    int maxFreq=0;
    int minFreq=n;
    int maxEle = 0;
    int minEle = 0;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==true)
        continue;

        int count = 1;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[i]=true;
            }
        }
        if(count>maxFreq)
        {
            maxFreq = count;
            maxEle = arr[i];
        }
         if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
    return 0;
}