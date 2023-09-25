#include "discretemaths.h"

bool TestMagnitude(const float _kfX);
bool TestEquals(const float _kfA, const float _kfB, const float _kfPrecision);
bool TestSignum(const float _kfX);
bool TestFloor(const float _kfX);
bool TestCeiling(const float _kfX);
bool TestFactorial(const double _kdn);
bool TestCombination(const double _kdn, const double _kdr);
bool TestPermutation(const double _kdn, const double _kdr);
bool TestCardinality(TSet& _rSet);
bool TestPower(TSet& _rSet);
bool TestEquals(TSet& _rA, TSet& _rB);
bool TestSubset(TSet& _rA, TSet& _rB);
bool TestSuperset(TSet& _rA, TSet& _rB);
bool TestUnion(TSet& _rA, TSet& _rB, TSet& _rResultant);
bool TestIntersection(TSet& _rA, TSet& _rB, TSet& _rResultant);
bool TestDisjoint(TSet& _rA, TSet& _rB);
bool TestSetDifference(TSet& _rA, TSet& _rB, TSet& _rResultant);
bool TestSymmetricDifference(TSet& _rA, TSet& _rB, TSet& _rResultant);
bool TestCompliment(TSet& _rA);
bool TestCartesianProduct(TSet& _rA, TSet& _rB);
