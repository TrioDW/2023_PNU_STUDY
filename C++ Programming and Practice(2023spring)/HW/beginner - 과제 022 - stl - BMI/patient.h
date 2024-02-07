#include <string>
#include <memory>
using namespace std;

struct PatientInfo {
  string name;
  int age;
  double weight;
  double height;
  double BMI;
};

extern unique_ptr< vector<PatientInfo> > patients;

void createPatientInfo();
void printAllPatients();
void searchPatientName();
void printOverBMI();
void removeUnderBMI();