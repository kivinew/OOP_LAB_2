#include <iostream>
using namespace std;

class Time 
{
	static int Count;
	int Hour;
	int Min;
	int Sec;	
public:
	Time();
	Time(int, int, int);
	Time(Time &);
	~Time();
	//Методы
	static int GetCount();
	void SetTime(int, int, int);
	void SetTime(Time &);
	void InputTime();
	char* GetTimeString();
	void PrintTime();
	void Reset();
	void IncSec();
	void IncMin();
	void IncHour();
	void DecSec();
	void DecMin();
	void DecHour();	
	//Перегрузка операторов
	Time operator ++ ();
	Time operator -- ();
	Time operator ++ (int);
	Time operator -- (int);	
	Time operator + (Time &rhs);
	bool operator == (Time &rhs);
	bool operator != (Time &rhs);
	bool operator > (Time &rhs);
	bool operator >= (Time &rhs);
	bool operator < (Time &rhs);
	bool operator <= (Time &rhs);
	Time operator = (Time &rhs);
	operator int();
	friend ostream & operator << (ostream &out, Time &obj);
	friend istream & operator >> (istream &in, Time &obj);
};