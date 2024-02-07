#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "patient.h"
using namespace std;

double calculateBMI (double weight, double height) {
  return weight / (height * height);
}

int N;

void createPatientInfo() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    string name; cin >> name;
    int age; cin >> age;
    double weight; cin >> weight;
    double height; cin >> height;
    double BMI = calculateBMI(weight, height);
    patients->push_back(
        {name= name, age= age, weight = weight,
         height= height, BMI= BMI} );
  }
}

bool comp(const PatientInfo &a, const PatientInfo &b) {
  return (a.BMI) > (b.BMI);
}

void printAllPatients() {
  sort((*patients).begin(), (*patients).end(), comp);

  cout << "Information for all patients: \n";
  cout << fixed << setprecision(2);
  for(auto [name, age, weight, height, BMI] : *patients)
    cout << name << " " << age << " " << weight << " " << height << " " << BMI << "\n";
}

void searchPatientName() {
  cout << "Enter the name: ";
  string name; cin >> name;

  cout << "Patient found: \n";
  auto temp = *find_if((*patients).begin(), (*patients).end(), [&name] (const PatientInfo &p) {
    return p.name == name;
  });
  cout << temp.name << " " << temp.age << " " << temp.weight << " " << temp.height << " " << temp.BMI << "\n";
}

void printOverBMI() {
  cout << "Enter the BMI threshold: \n";
  double limit; cin >> limit;

  cout << "Patients with BMI more than " << limit << ":\n";

  for (int i = 0; i < N; i++) {
    auto p = *patients;
    if (p[i].BMI > limit)
      cout << p[i].name << " " << p[i].age << " " << p[i].weight << " " << p[i].height << " " << p[i].BMI << "\n";
  }
}

void removeUnderBMI() {
  cout << "Enter the BMI threshold: \n";
  double limit; cin >> limit;
  cout << "Information for all patients:\n";

  for (int i = 0; i < N; i++) {
    auto p = *patients;
    if (p[i].BMI > limit)
      cout << p[i].name << " " << p[i].age << " " << p[i].weight << " " << p[i].height << " " << p[i].BMI << "\n";
  }
}