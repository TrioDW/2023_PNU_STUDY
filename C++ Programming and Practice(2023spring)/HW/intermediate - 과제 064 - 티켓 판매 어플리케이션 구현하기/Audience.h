#include "Membership.h"

class Audience {

 public :
  Audience() { }
  Audience(int money, Membership membership) : money(money), membership(membership) { }

  void pay(int p) { this->money -= p; }

  int buy(Ticket t) {
   if (membership.isAvailable()) {
     membership.use();
     this->ticket = t;
     return 0;
   }
   this->pay(t.getFee());
   this->ticket = t;
   return t.getFee();
 }

 private :
  Membership membership;
  Ticket ticket;
  int money;
};