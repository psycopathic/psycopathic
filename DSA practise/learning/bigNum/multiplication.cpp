#include<bits/stdc++.h>
using namespace std;
string multiply(string num1, string num2) {
        int length1 = num1.length();
        int length2 = num2.length();
        if(length1 == 0 || length2 == 0)
            return "0";

        vector<int> arr(length1+length2, 0);

        for(int i = length1 - 1; i >= 0; i--) {
            int carry = 0;
            int n1 = num1[i] - '0';
            for(int j = length2 - 1; j >= 0; j--) {
                int n2 = num2[j] - '0';
                int sum = n1 * n2 + arr[i + j + 1] + carry;
                carry = sum / 10;
                arr[i + j + 1] = sum % 10;
            }
            arr[i] += carry;
        }

        int i = 0;
        while(i < arr.size() && arr[i] == 0) {
            i++;
        }

        if(i == arr.size())
            return "0";

        string result = "";
        while(i < arr.size()) {
            result += to_string(arr[i++]);
        }

        return result;
    }

int main()
{
	string str1 = "1235421415454545454545454544";
	string str2 = "1714546546546545454544548544544545";
	
	if((str1.at(0) == '-' || str2.at(0) == '-') && 
		(str1.at(0) != '-' || str2.at(0) != '-' ))
		cout<<"-";


	if(str1.at(0) == '-')
		str1 = str1.substr(1);

	if(str2.at(0) == '-')
		str2 = str2.substr(1);

	cout << multiply(str1, str2);
	return 0;
}
