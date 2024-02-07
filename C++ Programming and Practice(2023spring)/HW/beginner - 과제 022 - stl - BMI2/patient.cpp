#include <iostream>
#include <algorithm>
#include "patient.h"
using namespace std;

unique_ptr<PatientInfo> createPatientInfo() {

  string name; int age;
  double weight, height;

  cin >> name >> age >> weight >> height;

  auto patientInfo = make_unique<PatientInfo>();
  *patientInfo = {name, age, weight, height, weight / (height * height)};

  return patientInfo;
}

void printPatientInfo(const PatientInfo& patientInfo) {

  cout << patientInfo.name << " " << patientInfo.age << " " << patientInfo.weight << " " << patientInfo.height << " " << patientInfo.BMI << "\n";
}

void printAllPatientInfo(vector<unique_ptr<PatientInfo>> &patientInfos) {

  sort(patientInfos.begin(), patientInfos.end(), [] (unique_ptr<PatientInfo> &a, unique_ptr<PatientInfo> &b) {
    return (a->BMI) > (b->BMI);
  });

  cout << "information for all patients:\n";
  for_each(patientInfos.begin(), patientInfos.end(), [] (unique_ptr<PatientInfo> &patientInfo) {
    printPatientInfo(*patientInfo);
  });
}

void searchPatientName(vector<unique_ptr<PatientInfo>> &patientInfos) {

  string name; cin >> name;

  auto found = find_if(patientInfos.begin(), patientInfos.end(), [&name] (unique_ptr<PatientInfo> &patientInfo) {
    return patientInfo->name == name;
  });
  if(found != patientInfos.end()) printPatientInfo(**found);
}

void printOverBMI(vector<unique_ptr<PatientInfo>> &patientInfos, double BMI) {

  for_each(patientInfos.begin(), patientInfos.end(), [&BMI] (unique_ptr<PatientInfo> &patientInfo) {
    if(BMI < patientInfo->BMI) printPatientInfo(*patientInfo);
  });
}

void removeUnderBMI(vector<unique_ptr<PatientInfo>> &patientInfos, double BMI) {

  patientInfos.erase(remove_if(patientInfos.begin(), patientInfos.end(), [&BMI] (unique_ptr<PatientInfo> &patientInfo) {
    return BMI > patientInfo->BMI;

  }), patientInfos.end());
}