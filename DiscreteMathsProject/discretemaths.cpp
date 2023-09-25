#include "discretemaths.h"

float Magnitude(const float _kfX)
{
	if (_kfX >= 0)
	{
		return _kfX;
	}
	return _kfX * -1;
}

bool Equals(const float _kfA, const float _kfB, const float _kfPrecision)
{
	if (Magnitude(_kfA - _kfB) < _kfPrecision) {
		return true;
	}
	return false;
}

float Signum(const float _kfX)
{
	if (_kfX > 0) {
		return 1.0f;
	}
	if (_kfX < 0) {
		return 0-1.0f;
	}

	return 0.0f;
}

float Floor(const float _kfX)
{
	return trunc(_kfX);
}

float Ceiling(const float _kfX)
{
	return trunc(_kfX + 1.0f);
}

double Factorial(const double _kdn)
{
	int n = _kdn;
	if (n < 0) {
		n = Magnitude(n);
	}

	if ((n % 1) >= 0.5) {
		n = Ceiling(n);
	}
	else {
		n = Floor(n);
	}


	double factorial = 1;

	if (n == 0 || n == 1){
		return 1;
	}
	

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	return factorial;
}

double Combination(const double _kdn, const double _kdr)
{
	double n = _kdn;
	double r = _kdr;

	double combination = Factorial(n) / (Factorial(r)*(Factorial(n - r)));
	return combination;
}

double Permutation(const double _kdn, const double _kdr)
{
	double n = _kdn;
	double r = _kdr;

	double permutation = Factorial(n) / (Factorial(n - r));
	return permutation;
}

int Cardinality(TSet& _rSet)
{
	int cardinality = 0;
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if (_rSet.ContainsElement(i)) {
			cardinality++;
		}
	}

	return cardinality;
}

int Power(TSet& _rSet)
{
	int power = 2;
	int cardinality = Cardinality(_rSet);
	for (int i = 1; i < cardinality; i++)
	{
		if (cardinality > 1) {
			power *= 2;
		}
	}

	return power;
}

bool Equals(TSet& _rA, TSet& _rB)
{
	int counter = 0;
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if ((_rA.ContainsElement(i) && _rB.ContainsElement(i)))
		{
			counter++;
		}
	}
	if (counter == Cardinality(_rA) && counter == Cardinality(_rB)) {
		return true;
	}
	return false;
}

bool Subset(TSet& _rA, TSet& _rB)
{
	int counter = 0;
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if( (_rA.ContainsElement(i) && _rB.ContainsElement(i) ))
		{
			counter++;
		}
	}
	if (Cardinality(_rA) == counter && Cardinality(_rB) > counter) {
		return true;
	}

	return false;
}

bool Superset(TSet& _rA, TSet& _rB)
{
	return Subset(_rB,_rA);
}

TSet& Union(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if (_rA.ContainsElement(i)&& !_rB.ContainsElement(i))
		{
			_rResultant.AddElement(i);
		}
		else if (_rB.ContainsElement(i) && !_rA.ContainsElement(i)) {
			_rResultant.AddElement(i);
		}
		else if (_rB.ContainsElement(i) && _rA.ContainsElement(i)) {
			_rResultant.AddElement(i);
		}

	}


	return _rResultant;
}

TSet& Intersection(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if (_rA.ContainsElement(i) && _rB.ContainsElement(i))
		{
			_rResultant.AddElement(i);
		}
	}


	return _rResultant;
}

bool Disjoint(TSet& _rA, TSet& _rB)
{
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if ((_rA.ContainsElement(i) && _rB.ContainsElement(i)))
		{
			return false;
		}
	}
	return true;
}

TSet& SetDifference(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	// A-B
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if (_rA.ContainsElement(i) && !_rB.ContainsElement(i)) {
			_rResultant.AddElement(i);
		}
	}

	return _rResultant;
}

TSet& SymmetricDifference(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if (_rA.ContainsElement(i) && ((_rA.ContainsElement(i) && _rB.ContainsElement(i)) == false)) {
			_rResultant.AddElement(i);
		}
		if (_rB.ContainsElement(i) && ((_rA.ContainsElement(i) && _rB.ContainsElement(i)) == false)) {
			_rResultant.AddElement(i);
		}
	}
	return _rResultant;
}

TSet& Compliment(TSet& _rA)
{
	TSet rTemp = TSet();
	for (int i = 0; i < Cardinality(_rA)+1; i++)
	{
		if (_rA.ContainsElement(i)) {
			rTemp.AddElement(i);
		}
	}
	_rA.SetUniversal();
	_rA.AddElement(100);
	for (int i = 0; i <= SET_SIZE_MAX; i++)
	{
		if (rTemp.ContainsElement(i)) {
			_rA.RemoveElement(i);
		}
	}

	return _rA;
}

int CartesianProduct(TSet& _rA, TSet& _rB)
{
	int aSize = Cardinality(_rA);
	int bSize = Cardinality(_rB);

	return (aSize*bSize);
}
