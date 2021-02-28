#pragma once
#include <string>

using namespace std;

class Money
{
private:
	int g1000, g500, g200, g100, g50, g20, g10, g5, g2, g1, c50, c10;
public:
	int GetG1000() const { return g1000; }
	int GetG500() const { return g500; }
	int GetG200() const { return g200; }
	int GetG100() const { return g100; }
	int GetG50() const { return g50; }
	int GetG20() const { return g20; }
	int GetG10() const { return g10; }
	int GetG5() const { return g5; }
	int GetG2() const { return g2; }
	int GetG1() const { return g1; }
	int GetC50() const { return c50; }
	int GetC10() const { return c10; }

	void SetG1000(int value);
	void SetG500(int value);
	void SetG200(int value);
	void SetG100(int value);
	void SetG50(int value);
	void SetG20(int value);
	void SetG10(int value);
	void SetG5(int value);
	void SetG2(int value);
	void SetG1(int value);
	void SetC10(int value);
	void SetC50(int value);

	void Read(Money& a, Money& b);
	bool Init(int gg1000, int gg500, int gg200, int gg100, int gg50, int gg20, int gg10, int gg5, int gg2, int gg1, int cc50, int cc10);
	void Display(Money& a, Money& b) const;
	string ToString(Money& a, Money& b) const;
	double get_sum1(Money& a);
	double get_sum2(Money& b);
	void Divide(Money& a, Money& b) const;
	void Comparison(Money& a, Money& b) const;
};