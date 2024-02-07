#include "Playlist.h"
using namespace std;

void Playlist::addSong(string name, string artist) {
  Song newSong(name, artist);
  songList->addNode(newSong);
}

void Playlist::removeSong(Song song) {
  songList->removeNode(song);
}

void Playlist::printPlaylist() {
  songList->printList();
}

