#include <iostream>
#include <map>
#include <string>
using namespace std;
// class
enum Genre {Action, Comedy, Drama, Romance, SciFi};
enum Rating {OneStar, TwoStars, ThreeStars, FourStars, FiveStars};

int main() {
  map<string, int> map_cnt;
  map<string, int> map_genre;
  map<string, int> map_rating;

  while (true) {
    string movie_name;

    getline(cin, movie_name);

    if (movie_name == "q")
      break;

    else {
      int N, M;
      cin >> N >> M;

      if (map_cnt.find(movie_name) == map_cnt.end()) {
        map_cnt[movie_name] = 1;
        map_genre[movie_name] = N;
        map_rating[movie_name] = M;
      } else {
        map_cnt[movie_name] += 1;
        map_rating[movie_name] += M;
      }

    }
    cin.ignore();
  }
  int size = map_cnt.size();
  for (auto [name, cnt] : map_cnt) {
    cout << name << ": " << cnt << " ratings, average rating " << map_rating[name] / cnt << " stars, genre: " << map_genre[name] << "\n";
  }
  return 0;
}
