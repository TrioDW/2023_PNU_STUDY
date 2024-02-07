#include "Skiil.h"
#pragma once
using namespace std;

class EzrealSkill : public Skill {
 public:
  void q() override {
    cout << "RISING SPELL FORCE (끓어오르는 주문의 힘)\n";
  }

  void w() override {
    cout << "MYSTIC SHOT (신비한 화살)\n";
  }

  void e() override {
    cout << "ESSENCE FLUX (정수의 흐름)\n";
  }

  void r() override {
    cout << "ARCANE SHIFT (비전 이동)\n";
  }
};