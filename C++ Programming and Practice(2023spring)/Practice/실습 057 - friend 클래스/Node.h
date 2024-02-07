#include "Song.h"

class Node {
 public:
  Node(Song d) : data(d), next(nullptr) {} // constructor (생성자)

  friend class SinglyLinkedList;

 private:
  Song data;
  Node* next;
};