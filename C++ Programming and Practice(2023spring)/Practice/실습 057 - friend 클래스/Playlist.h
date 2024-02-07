#include "SinglyLinkedList.h"
using namespace std;

class Playlist {
 public:
  Playlist() : songList(new SinglyLinkedList()) {}

  void addSong(string name, string artist);
  void removeSong(Song song);
  void printPlaylist();

 private:
  SinglyLinkedList* songList;
};