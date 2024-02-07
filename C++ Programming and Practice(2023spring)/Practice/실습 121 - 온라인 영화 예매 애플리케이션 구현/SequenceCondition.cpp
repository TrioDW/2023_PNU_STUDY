#include "SequenceCondition.h"
#include "Screening.h"

SequenceCondition::SequenceCondition(int seq) : sequence{seq} { }

bool SequenceCondition::test(Screening& screening) {
  return screening.isSequence(sequence);
}