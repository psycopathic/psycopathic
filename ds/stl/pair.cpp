//are the contain which can contain two heterogeneous data at once
//pair are present in utility container
#include<iostream>
#include<utility>
using namespace std;

//INITIALISATION  1

// int main(){
//     pair<int,char>pair;
//     pair.first = 100;
//     pair.second = 'G';
//     cout<<pair.first<<endl;
//     cout<<pair.second<<endl;
//     return 0;
// }

//INITIALISATION  2

// int main(){
//     pair<string,double> pair("Geeksforgeeks",1.23);
//     cout<<pair.first<<endl;
//     cout<<pair.second<<endl;
//     return 0;
// }

//INITIALISATION 3

// int main(){
//     pair<int,double> pair;

//     //pair.first = "string";
//     cout<<pair.first<<endl;
//     cout<<pair.second<<endl;
//     return 0;
// }


//make pair initialisation mae use aata hae
//swap is overloaded for pairs
//the way to use it is p1.swap.(p2);

int main(){
    pair<char,int>p1 = make_pair('A',1);
    pair<char,int>p2 = make_pair('b',2);
    cout<<"before swapping"<<endl;
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    p1.swap(p2);
    cout<<"after swapping"<<endl;
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    return 0;
}