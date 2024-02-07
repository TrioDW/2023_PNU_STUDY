#include "Skiil.h"
#pragma once
using namespace std;

class GangplankSkill : public Skill {
 public:
  void q() override {
    cout << "TRIAL BY FIRE (불의 심판)\n";
  }

  void w() override {
    cout << "PARRRLEY (혀어어어업상)\n";
  }

  void e() override {
    cout << "REMOVE SCURVY (괴혈병 치료)\n";
  }

  void r() override {
    cout << "POWDER KEG (화약통)\n";
  }
};