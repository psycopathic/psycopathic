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

char arr[3][10] = {
    {'q','w','e','r','t','y','u','i','o','p'},
    {'a','s','d','f','g','h','j','k','l',';'},
    {'z','x','c','v','b','n','m',',','.','/'}};

char search(char c, char a) {
    if(a=='R'){
        for(int i=0;i<3;i++){
            for(int j=0;j<10;j++){
                if(arr[i][j] == c && j > 0){ 
                    return arr[i][j-1];
                }
            }
        }
    }
    else{
        for(int i=0;i<3;i++){
            for(int j=0;j<10;j++){
                if(arr[i][j] == c && j < 9){ 
                    return arr[i][j+1];
                }
            }
        }
    }
    return ' ';
}


int main() {
    char a;
    cin >> a;
    string s;
    cin >> s;
    string res = ""; 
    
    for(int i = 0; i < s.length(); i++) {
        res += search(s[i], a); 
    }
    
    cout << res << endl;
    return 0;
}
