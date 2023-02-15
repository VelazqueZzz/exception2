#include <iostream>
using namespace std;

bool f(float x,float &result)
{
	if (x == 0) return false;
	result =   1 / x;
	return true;
}

int main(void)
{
	float x;
	cout << "x? ";
	cin >> x;
	float x1;
	if(f(x,x1))	cout << "1/x =" << x1 << endl;
	else cout << "Division on zero exception" << endl;
	

	return 0;
}
