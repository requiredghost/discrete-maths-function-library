#include "test.h"
#include <iostream>

using namespace std;

bool TestMagnitude(const float _kfX)
{
	cout << "Expected Value: " << 5 << endl;
	cout << "Magnitude Value: " << Magnitude(_kfX) << endl;

	if (Magnitude(_kfX) == 5) {
		return true;
	}

	return false;
}

bool TestEquals(const float _kfA, const float _kfB, const float _kfPrecision)
{
	cout << "Expected Value: False(0)" << endl;
	cout << "Equals Value: " << Equals(_kfA, _kfB, _kfPrecision) << endl;

	return Equals(_kfA, _kfB, _kfPrecision);
}


bool TestSignum(const float _kfX)
{
	cout << "Expected Value: 1" << endl;
	cout << "Signum Value: " << Signum(_kfX) << endl;

	if (Signum(_kfX) == 1) {
		return true;
	}

	return false;
}

bool TestFloor(const float _kfX)
{
	cout << "Expected Value: 5" << endl;
	cout << "Floor Value: " << Floor(_kfX) << endl;

	if (Floor(_kfX) == 5) {
		return true;
	}

	return false;
}

bool TestCeiling(const float _kfX)
{
	cout << "Expected Value: 6" << endl;
	cout << "Ceiling Value: " << Ceiling(_kfX) << endl;

	if (Ceiling(_kfX) == 6) {
		return true;
	}

	return false;
}

bool TestFactorial(const double _kdn)
{
	cout << "Expected Value: 120" << endl; //5
	cout << "Factorial Value: " << Factorial(_kdn) << endl;

	if (Factorial(_kdn) == 120) {
		return true;
	}

	return false;
}

bool TestCombination(const double _kdn, const double _kdr)
{
	cout << "Expected Value: 252" << endl; // 10 5
	cout << "Combination Value: " << Combination(_kdn, _kdr) << endl;

	if (Combination(_kdn, _kdr) == 252) {
		return true;
	}

	return false;
}

bool TestPermutation(const double _kdn, const double _kdr)
{
	cout << "Expected Value: 30240" << endl; // 10 5
	cout << "Permutation Value: " << Permutation(_kdn, _kdr) << endl;

	if (Permutation(_kdn, _kdr) == 30240) {
		return true;
	}

	return false;
}

bool TestCardinality(TSet& _rSet)
{
	cout << "Expected Value: 4" << endl;
	cout << "Cardinality Value: " << Cardinality(_rSet) << endl;

	if (Cardinality(_rSet) == 4){
		return true;
	}

	return false;
}

bool TestPower(TSet& _rSet)
{
	cout << "Expected Value: 16" << endl;
	cout << "Power Value: " << Power(_rSet) << endl;

	if (Power(_rSet) == 16) {
		return true;
	}

	return false;
}

bool TestEquals(TSet& _rA, TSet& _rB)
{
	cout << "Expected Value: False(0)" << endl;
	cout << "Equals Value: " << Equals(_rA,_rB) << endl;

	if (!Equals(_rA, _rB)) {
		return true;
	}

	return false;
}

bool TestSubset(TSet& _rA, TSet& _rB)
{
	cout << "Expected Value: True(1)" << endl;
	cout << "Subset Value: "<< Subset(_rA, _rB) << endl;

	if (Subset(_rA, _rB)) {
		return true;
	}

	return false;
}

bool TestSuperset(TSet& _rA, TSet& _rB)
{
	cout << "Expected Value: True(1)" << endl;
	cout << "Superset Value: "<< Superset(_rA, _rB) << endl;

	if (Superset(_rA, _rB)) {
		return true;
	}

	return false;
}

bool TestUnion(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	_rResultant.SetClear();
	cout << "Expected Value: 6 (cardinality)" << endl;
	cout << "Union Value: " << Cardinality(Union(_rA,_rB,_rResultant)) << endl;
	
	if (Cardinality(Union(_rA, _rB, _rResultant)) == 6) {
		return true;
	}

	return false;
}

bool TestIntersection(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	_rResultant.SetClear();
	cout << "Expected Value: 2 (cardinality)" << endl;
	cout << "Intersection Value: " << Cardinality(Intersection(_rA, _rB, _rResultant)) << endl;

	if (Cardinality(Intersection(_rA, _rB, _rResultant)) == 2) {
		return true;
	}

	return false;
}

bool TestDisjoint(TSet& _rA, TSet& _rB)
{
	cout << "Expected Value: True (1)" << endl;
	cout << "Disjoint Value: " << Disjoint(_rA,_rB) << endl;
	if (Disjoint(_rA, _rB)) {
		return true;
	}
	return false;
}

bool TestSetDifference(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	_rResultant.SetClear();
	cout << "Expected Value: 2 (cardinality)" << endl;
	cout << "Intersection Value: " << Cardinality(SetDifference(_rA, _rB, _rResultant)) << endl;

	if (Cardinality(SetDifference(_rA, _rB, _rResultant)) == 2) {
		return true;
	}
	return false;
}

bool TestSymmetricDifference(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	_rResultant.SetClear();
	cout << "Expected Value: 4 (cardinality)" << endl;
	cout << "Intersection Value: " << Cardinality(SymmetricDifference(_rA, _rB, _rResultant)) << endl;

	if (Cardinality(SymmetricDifference(_rA, _rB, _rResultant)) == 4) {
		return true;
	}
	return false;
}

bool TestCompliment(TSet& _rA)
{	
	int iComp = Cardinality(Compliment(_rA));
	cout << "Expected Value: 96 (Cardinality)" << endl;
	cout << "Compliment Value: " << iComp << endl;
	if (iComp == 96) {
		return true;
	}
	return false;
}


bool TestCartesianProduct(TSet& _rA, TSet& _rB)
{

	cout << "Expected Value: 16" << endl;
	cout << "CartesianProduct Value: " << CartesianProduct(_rA,_rB)<< endl;
	if (CartesianProduct(_rA, _rB) == 16) {
		return true;
	}
	return false;
}
