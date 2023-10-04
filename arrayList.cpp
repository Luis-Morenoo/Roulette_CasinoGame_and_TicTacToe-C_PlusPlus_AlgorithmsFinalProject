#include "arrayList.h"

void arrayList::addMoney(int num)
{
	numbers.push_back(num);
}

void arrayList::sum()
{
	cout << "Amount of money won: " << accumulate(numbers.begin(), numbers.end(), 0) << endl;
}


