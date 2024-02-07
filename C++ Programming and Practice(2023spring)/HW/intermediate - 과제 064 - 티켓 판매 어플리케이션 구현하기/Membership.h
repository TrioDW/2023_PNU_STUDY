
class Membership {

 public :
  Membership() { }
  Membership(int RemainCnt) : RemainCnt(RemainCnt) { }

  void use() {
   this->RemainCnt--;
 }

 bool isAvailable() const {
   if (RemainCnt > 0)
     return true;
   else
     return false;
 }

 private :
  int RemainCnt;
};