#include "Ticket.h"
#include <vector>
using namespace std;

class TicketOffice {

 public :
  TicketOffice() { }
  TicketOffice(vector<Ticket> tickets) : tickets(move(tickets)) { }

  Ticket getTicket() {
   Ticket t = tickets.back();
   tickets.pop_back();
   return t;
 }
 void plusAmount(long plus) {
   this->amount += plus;
 }

 private :
  vector<Ticket> tickets;
  long amount;
};