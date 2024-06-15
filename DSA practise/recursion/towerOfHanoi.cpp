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
int moveCount = 0;
void towerOfHanoi(int n,char from_rod,char to_rod,char aux)
{
    if(n==0)
    return;
    else{
        towerOfHanoi(n-1,from_rod,aux,to_rod);
        cout<<"Disk moved from "<<from_rod<<" to "<<aux<<endl;
        moveCount++;                                                        //having multiple meaning is being ambiguious
        towerOfHanoi(n-1,aux,to_rod,from_rod);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of tower"<<endl;
    cin>>n;
    towerOfHanoi(n,'a','c','b');
    cout<<"number of moves required "<<moveCount<<endl;
    return 0;
}