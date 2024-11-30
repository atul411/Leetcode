#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string complexNumberMultiply(string num1, string num2)
    {
        int num1Real = getReal(num1), num1Imag = getImag(num1);
        int num2Real = getReal(num2), num2Imag = getImag(num2);
        int newReal = num1Real * num2Real - num1Imag * num2Imag;
        int newImag = num1Real * num2Imag + num2Real * num1Imag;
        return to_string(newReal) + "+" + to_string(newImag) + "i";
    }
    int getReal(string str)
    {
        int sign = 1, start = 0;
        if (str[0] == '-')
        {
            sign = -1;
            start = 1;
        }
        int end = start;
        while (str[end] != '+')
        {
            end++;
        }
        return stoi(str.substr(start, end - start)) * sign;
    }
    int getImag(string str)
    {
        int start = str.size() - 1;
        while (str[start] != '-' and str[start] != '+')
        {
            start--;
        }
        int sign = 1;
        if (str[start] == '-')
        {
            sign = -1;
        }
        return stoi(str.substr(start + 1, str.length() - start - 2)) * sign;
    }
};
int main()
{
    Solution s;
    cout << s.complexNumberMultiply("1+1i", "1+1i");
}