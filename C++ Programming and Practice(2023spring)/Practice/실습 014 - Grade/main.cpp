#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  cout << "# of students:";

  int num;
  cin >> num;
  vector<string> name;
  vector<int> score;

  int sum = 0;
  string temp1;
  int temp2;

  int max_score = 0;
  string max_name;

  for(int i = 0; i < num; i++) {
    cout << "name & score of student " << i+1 << ":";
    cin >> temp1 >> temp2;

    name.push_back(temp1);
    score.push_back(temp2);
    sum += temp2;

    if (temp2 > max_score) {
      max_score = temp2;
      max_name = temp1;
    }

  }

  int average = sum / num;
  cout << "The average score of the students is " << average << "\n";
  cout << "The student with the highest score is " << max_name << " with a score of " << max_score;
  return 0;
}
