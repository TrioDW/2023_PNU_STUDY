#include <mutex>
#include <vector>
using namespace std;

class WorkerThread {
 public:
  void play();
 private:
  void readWorker();
  void writeWorker(int value);
  mutex mu;
  vector<SharedPreferences*> answers;
};
