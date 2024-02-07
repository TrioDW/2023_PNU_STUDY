#include <iostream>
#include <regex>
#include <map>
#include <algorithm>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

bool comp(const pair<string, int> &a, const pair<string, int> &b)
{
  if (a.second == b.second)
    return a.first < b.first;
  else
    return a.second > b.second;
}

int main() {

  map<string, int> words;

  string str;
  while (cin >> str && str != "^") {
    string filtered {regex_replace(str, regex("[.|,|:|;]"),"")};
    transform(filtered.begin(), filtered.end(), filtered.begin(), ::tolower);

    if (words.find(filtered) != words.end())
      words[filtered]++;
    else
      words.insert({filtered, 1});
  }
  cout << "#Words: " << words.size() << "\n";

  vector<pair<string, int>> vec(words.begin(), words.end());

  sort(vec.begin(), vec.end(), comp);


  cout << "Top 5 Word Frequencies \n";
  cout << "1 " << vec[0].first << ": " << vec[0].second << "\n";
  cout << "2 " << vec[1].first << ": " << vec[1].second << "\n";
  cout << "3 " << vec[2].first << ": " << vec[2].second << "\n";
  cout << "4 " << vec[3].first << ": " << vec[3].second << "\n";
  cout << "5 " << vec[4].first << ": " << vec[4].second << "\n";

  cout << "Find Word Frequencies \n";

  string temp;
  while((cin >> temp) && (temp != "QUIT")) {

    string filtered {regex_replace(temp, regex("[.|,|:|;]"), "")};
    transform(filtered.begin(), filtered.end(), filtered.begin(), ::tolower);

    cout << filtered << ": " << words[filtered] << "\n";
  }

  cout << "Bye!";

  return 0;
}
