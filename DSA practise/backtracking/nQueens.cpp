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
void printBoard(int n,int board[][20]){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool canPlace(int board[][20],int n,int row,int col){
    for(int k = 0;k<row;k++){
        if(board[k][col]==1)
        return false;
    }
    int i = row;
    int j = col;
    while(i>=0 && j>=0){
        if(board[i][j]==1)
        return false;
        i--;
        j--;
    }
    // int i = row;
    // int j = col;
    while(i>=0 && j<n){
        if(board[i][j]==1)
        return false;
        i--;
        j--;
    }
    return true;
}
bool solveQueen(int n,int board[][20],int row)
{
    if(row == n)
    {
        printBoard(n,board);
        return true;
    }
    for(int col = 0;col<n;col++)
    {
        if(canPlace(board,n,row,col)){
            board[row][col] = 1;
            bool check = solveQueen(n,board,row+1);
            if(check){
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}
int main()
{
    int board[20][20] = {0};
    int n;
    cin>>n;
    solveQueen(n,board,0);
    return 0;
}