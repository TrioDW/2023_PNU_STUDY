#include "TicketOffice.h"
#include "Audience.h"

class TicketSeller {

 public :
  TicketSeller() { }
  TicketSeller(TicketOffice ticket_office) : ticketOffice(ticket_office) { }

  void sellTo(Audience audience) {
   int fee = audience.buy(ticketOffice.getTicket());
   ticketOffice.plusAmount(fee);
 }

 private :
  TicketOffice ticketOffice;

};