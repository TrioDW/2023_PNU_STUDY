#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

void SinglyLinkedList::addNode(Song data) {
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

void SinglyLinkedList::removeNode(Song data) {
  Node* currentNode = head;
  Node* prevNode = nullptr;

  while (currentNode != nullptr) {
    if (currentNode->data.equals(data)) {
      if (prevNode == nullptr)
        head = currentNode->next;
      else
        prevNode->next = currentNode->next;

      delete currentNode;
      break;
    }
    else {
      prevNode = currentNode;
      currentNode = currentNode->next;
    }
  }
}

void SinglyLinkedList::printList() {
  Node* currentNode = head;

  cout << "Playlist: \n";
  while (currentNode != nullptr) {
    cout << currentNode->data.toString() << "\n";
    currentNode = currentNode->next;
  }
}