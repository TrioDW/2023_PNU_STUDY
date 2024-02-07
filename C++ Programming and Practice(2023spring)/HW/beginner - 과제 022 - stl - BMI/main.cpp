#include <vector>
#include <memory>
#include "patient.h"
using namespace std;
// struct PatientInfo vector unique_ptr const
unique_ptr< vector<PatientInfo> > patients (new vector<PatientInfo>);

int main() {
  createPatientInfo();
  printAllPatients();
  searchPatientName();
  printOverBMI();
  removeUnderBMI();
  return 0;
}