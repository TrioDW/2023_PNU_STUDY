
class Ticket {

 public :
  Ticket() { }
  Ticket(int fee) : fee(fee) { }

  int getFee() { return this->fee; }

 private :
  int fee;
};