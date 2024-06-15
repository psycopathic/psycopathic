		#include<bits/stdc++.h>
		using namespace std;
		int linearsearch(int *arr,int size,int x)
		{
			for(int i=0;i<size;i++)
			{
				if(arr[i]==x)
				{
					return i;
					break;
				}
			}
		}
		// void swap(int a,int b)
		// {
		// 	int temp=a;
		// 	a=b;
		// 	b=temp;
		// }
		int main(){
		  #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.in", "w", stdout);
    #endif
    int n,count=0;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    int x=*(min_element(arr,arr+n));
     int y=*(max_element(arr,arr+n)); 
    if(x==arr[n-1] && y==arr[0])
    {
    	cout<<0<<endl;
    }
    else
    {
    	int a=linearsearch(arr,n,x);
    	int b=linearsearch(arr,n,y);
    	while(x!=arr[a] && y!=arr[b])
    	{
    		swap(arr[a],arr[a+1]);
    		count++;
    		swap(arr[b],arr[b-1]);
    		count++;
    		a++;
    		b--;
    	}
    }
    cout<<count<<endl;
    return 0;
		}