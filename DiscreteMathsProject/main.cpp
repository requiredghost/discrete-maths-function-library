#include <iostream>
#include "test.h"

using namespace std;


int main() {

	TSet rSetA = TSet(); //The base set
	rSetA.AddElement(1);
	rSetA.AddElement(2);
	rSetA.AddElement(3);
	rSetA.AddElement(4);

	TSet rSetB = TSet(); 
	rSetB.AddElement(5);
	rSetB.AddElement(6);
	rSetB.AddElement(7);
	rSetB.AddElement(8);

	TSet rSetC = TSet();
	rSetC.AddElement(1);
	rSetC.AddElement(2);
	rSetC.AddElement(3);

	TSet rSetD = TSet();
	rSetD.AddElement(1);
	rSetD.AddElement(2);
	rSetD.AddElement(7);
	rSetD.AddElement(8);

	TSet rSetE = TSet(); 

	TSet rSetF = TSet(); 
	rSetF.AddElement(1);
	rSetF.AddElement(2);
	rSetF.AddElement(3);
	rSetF.AddElement(4);

	int iCounterPass = 0;
	int iCounterFail = 0;
	cout << "Testing the Math Library" << endl;
	cout << "---------------------------------------" << endl << endl;

	cout << "Testing Magnitude:" << endl;
	if (TestMagnitude(-5)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Equals: " << endl;
	if (TestEquals(5.12345, 5.1234, 0.00001)==false) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Signum: " << endl;
	if (TestSignum(10)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Floor: " << endl;
	if (TestFloor(5.9)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Ceiling: " << endl;
	if (TestCeiling(5.1)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Factorial: " << endl;
	if (TestFactorial(5)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Combination: " << endl;
	if (TestCombination(10,5)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Permutation: " << endl;
	if (TestPermutation(10, 5)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Cardinality: " << endl;
	if (TestCardinality(rSetA)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Power: " << endl;
	if (TestPower(rSetA)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Equals: " << endl;
	if (TestEquals(rSetA,rSetB)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Subset: " << endl;
	if (TestSubset(rSetC,rSetA)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Superset: " << endl;
	if (TestSuperset(rSetA,rSetC)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Union: " << endl;
	if (TestUnion(rSetA,rSetD,rSetE)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Intersection: " << endl;
	if (TestIntersection(rSetA,rSetD,rSetE)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Disjoint: " << endl;
	if (TestDisjoint(rSetA,rSetB)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Set Difference: " << endl;
	if (TestSetDifference(rSetA, rSetD, rSetE)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Symmetric Difference: " << endl;
	if (TestSymmetricDifference(rSetA, rSetD, rSetE)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Compliment: " << endl;
	if (TestCompliment(rSetF)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}
	cout << endl;

	cout << "Testing Cartesian Product: " << endl;
	if (TestCartesianProduct(rSetA, rSetD)) {
		iCounterPass++;
	}
	else {
		iCounterFail++;
	}

	cout << endl;
	cout << "Tests Run: " << iCounterFail + iCounterPass << endl;
	cout << "Tests Passed: " << iCounterPass << endl;
	cout << "Tests Failed: " << iCounterFail << endl;
	return 0;
}