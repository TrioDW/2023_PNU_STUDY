#include <iostream>
#include <iomanip>
#include "patient.h"
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<unique_ptr<PatientInfo>> patientInfo;
  cout << fixed;
  cout << setprecision(2);

  while(N--) {
    patientInfo.push_back(createPatientInfo());
  }

  double BMI;
  printAllPatientInfo(patientInfo);
  cout << "Enter the name: ";
  cout << "Patient found:\n"; searchPatientName(patientInfo);
  cout << "Enter the BMI threshold: "; cin >> BMI;
  cout << "Patients with BMI more than " << BMI << "\n"; printOverBMI(patientInfo, BMI);
  cout << "Enter the BMI threshold: "; cin >> BMI;
  removeUnderBMI(patientInfo, BMI);
  printAllPatientInfo(patientInfo);
}