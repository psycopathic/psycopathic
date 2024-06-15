#include <iostream>
#include <vector>
using namespace std;
const int row =3;
const int col=3;
void Check_Neighbours(int r, int c, vector<vector<int>>& arr) {
    int dr[] = {1, -1, 0, 0};
    int dc[] = {0, 0, 1, -1};
    arr[r][c] = 1 - arr[r][c];
    for (int i = 0; i < 4; i++) {
        int newRow = r + dr[i];
        int newCol = c + dc[i];
        
        if (newRow >= 0 && newRow < row && newCol >= 0 && newCol < col) {
            arr[newRow][newCol] = 1 - arr[newRow][newCol];
        }
    }
}
int main() {

    vector<vector<int>> arr(row , vector<int>(col , 1));
     int Light_Pressed[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> Light_Pressed[i][j];
           Light_Pressed[i][j]=Light_Pressed[i][j]%2;
            if(Light_Pressed[i][j]==1)
            {
              Check_Neighbours(i, j,arr)  ;
            }
        }
    }
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}