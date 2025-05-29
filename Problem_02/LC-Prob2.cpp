#include<iostream>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int l1 = str1.length();
        int l2 = str2.length();

        int i = 0;
        string res = "";
        string sub = "";

        //when l1 is large string
        if (l1 > l2)
        {
            for (int i = 0; i < l1; i++)
            {
                if (str1[i] != str2[i % l2])
                {
                    cout << "Strings are not concatenated." << endl;
                    return "";
                }
                else
                {
                    sub = str1.substr(0, l2);
                    if (str2 == sub)
                    {
                        i = l2;
                        while (i < l1)
                        {
                            res += str1[i];
                            i++;

                        }
                    }
                }
            }
        }

       //when l2 is lrge string
        if (l2 > l1)
        {
            for (int i = 0; i < l2; i++)
            {
                if (str2[i] != str1[i % l1])
                {
                    cout << "Strings are not concatenated." << endl;
                    return "";
                }
                else
                {
                    sub = str1.substr(0, l1);
                    if (str1 == sub)
                    {
                        i = l1;
                        while (i < l2)
                        {
                            res += str2[i];
                            i++;

                        }
                    }
                }
            }
        }

        
        return res;
    }
};

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter 2nd string: ";
    cin >> str2;

    Solution s;
    string result = s.gcdOfStrings(str1, str2);
    cout << "The result of the string is:  " << result;
    cout << endl << endl << endl;

    return 0;
}