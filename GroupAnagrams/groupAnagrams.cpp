#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<algorithm>

using namespace std;

vector<vector <string>> groupAnagrams(vector<string> &strs)
{
  unordered_map <string, vector<string>> groupAna;
  for(string word: strs)
  {
    string key = word;
    sort(key.begin(), key.end());
    groupAna[key].push_back(word);
  }

  vector<vector <string>> res;

  // collect the vectr arrays from unordered map
  for(auto & pair : groupAna)
  {
    res.push_back(pair.second);
  }

  return res;
}
    



