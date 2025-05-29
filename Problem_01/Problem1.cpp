#include<iostream>
using namespace std;


class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int w1 = word1.size();
        int w2 = word2.size();
        string merged = "";
        int i = 0, j = 0;

        while (i < w1 || j < w2) 
        {
            if (i < w1)
            {
                merged += word1[i];
                i++;
            }
            if (j < w2) 
            {
                merged += word2[j];
                j++;

            }
        }

        return merged;
    }

};

int main()
{
   
   

    Solution s;
   string merge = s.mergeAlternately("abc", "def");
   cout << "The first merged string is: " << merge;
   cout << endl << endl;

   string merge2 = s.mergeAlternately("ab", "pqrs");
   cout << "The 2nd merged string is: " << merge2;
   cout << endl << endl;

   string merge3 = s.mergeAlternately("abcd", "pq");
   cout << "The 3rd merged string is: " << merge3;
   cout << endl << endl << endl;
   

    return 0;

}