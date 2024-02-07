#include "TicketSeller.h"

class Theater {

 public :
  Theater() { }
  Theater(TicketSeller ticket_seller) : ticket_seller(ticket_seller) { }

  void enter(Audience audience) {
   ticket_seller.sellTo(audience);
 }

 private :
  TicketSeller ticket_seller;
};