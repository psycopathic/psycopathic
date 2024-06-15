/*Limak is going to participate in a contest on the last day of the 2016. The contest will start at 20:00 and will last four hours, exactly until midnight. There will be n problems, sorted by difficulty, i.e. problem 1 is the easiest and problem n is the hardest. Limak knows it will take him 5·i minutes to solve the i-th problem.
Limak's friends organize a New Year's Eve party and Limak wants to be there at midnight or earlier. He needs k minutes to get there from his house, where he will participate in the contest first.
How many problems can Limak solve if he wants to make it to the party?*/
// tere hisaabse total time kitna hoga 
// 1.left time with use he 240 minutes 
// 2.humko number of questions diya he 'n' aur time for reaching he 'k'
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
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int total_time = 240 - k;
    int timePerPromblem = 5;
    int solvedProblem = 0;
    while(total_time>=timePerPromblem && solvedProblem<n)
    {
        total_time = total_time-timePerPromblem;
        timePerPromblem=+5;
        solvedProblem++;
    }
    cout<<solvedProblem<<endl;
    return 0;
}