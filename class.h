#pragma once
class Counter
{
private:
	int value{ 1 };
public:
	Counter();
	Counter(int initialValue);

	void increment();
	void decrement();
	int getValue();
};
