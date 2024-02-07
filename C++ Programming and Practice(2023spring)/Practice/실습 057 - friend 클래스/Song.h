#include <string>
using namespace std;

class Song {
 public:
  string name;
  string artist;

  Song(string n, string a) : name(n), artist(a) {} // constructor

  bool equals(Song other) {
    return name == other.name &&
        artist == other.artist;
  }

  string toString() {
    return  name + " by " + artist;
  }

};
