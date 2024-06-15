#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
 while(m--){
    for(int i=1;i<n;i++){
        if(s[i]=='G' && s[i-1]=='B'){
            swap(s[i-1],s[i]);
            i++;
        }
    }
 }
    cout<<s<<endl;
}