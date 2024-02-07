#include <iostream>
using namespace std;

struct item {
  int id;
  string name;
  int quantity;
  int price;
};

void printText()
{
  cout << "1. Add item \n";
  cout << "2. Delete item \n";
  cout << "3. View item details \n";
  cout << "4. View total cost \n";
  cout << "5. Quit \n";
  cout << "Enter your choice: ";
}

int main()
{
  int item_count = 0;
  item* cart = nullptr;

  while (true) {
    printText();

    int num;
    cin >> num;

    if (num == 5) break;

    int temp;
    int cost = 0;

    switch (num) {
      case 1: {
        int quantity, price;
        string name;

        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item quantity: ";
        cin >> quantity;
        cout << "Enter item price: ";
        cin >> price;

        if (item_count == 0) {
          item* new_cart = new item[item_count + 1] {
              {item_count, name, quantity, price}
          };
          cart = new_cart;
        } else {
          item* new_cart = new item[item_count + 1];
          for (int i = 0; i < item_count; i++)
            new_cart[i] = cart[i];
          new_cart[item_count] = {item_count, name, quantity, price};
          cart = new_cart;
        }
        cout << "Item " << item_count++ << " added successfully. \n";
        break;
      }

      case 2: {
        cout << "Enter item ID: ";
        cin >> temp;

        int idx = 0;
        item* new_cart = new item[item_count - 1];
        for (int i = 0; i < item_count; i++) {
          if (cart[i].id == temp)
            continue;
          new_cart[idx++] = cart[i];
        }
        cart = new_cart;
        item_count--;
        cout << "Item deleted successfully. \n";
        break;
      }

      case 3: {
        cout << "Enter the item number: ";
        cin >> temp;
        bool find = false;

        item tmp;

        for (int i = 0; i < item_count; i++) {
          if (cart[i].id == temp) {
            tmp = cart[i];
            find = true;
          }
        }

        if (find) {
          cout << "Item " << temp << ": \n";
          cout << "Name: " << tmp.name << "\n";
          cout << "Quantity: " << tmp.quantity << "\n";
          cout << "Price: " << tmp.price << "\n";
        } else cout << "Item not found.\n";
        break;
      }

      case 4:
        for (int i = 0; i < item_count + 1; i++)
          cost += cart[i].price * cart[i].quantity;
        cout << "Total cost: " << cost << "\n";
        break;
      default:
        break;
    }
  }
  // delete
  return 0;
}