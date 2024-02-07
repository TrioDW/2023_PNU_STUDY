#include <string>
#include <memory>
#include <vector>
using namespace std;

struct PatientInfo {
  string name;
  int age;
  double weight;
  double height;
  double BMI;
};

unique_ptr<PatientInfo> createPatientInfo ();
void printPatientInfo (const PatientInfo& patientInfo);
void printAllPatientInfo (vector<unique_ptr<PatientInfo>> &patientInfos);
void searchPatientName (vector<unique_ptr<PatientInfo>> &patientInfos);
void printOverBMI (vector<unique_ptr<PatientInfo>> &patientInfos, double BMI);
void removeUnderBMI (vector<unique_ptr<PatientInfo>> &patientInfos, double BMI);