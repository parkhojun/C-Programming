#include <iostream>


using namespace std;
void AcmHotel();

int main(void)
{
	int TestCase;
	cin >> TestCase;
	while (TestCase--)
	{
		AcmHotel();
		cout << ' ' << endl;
	}

	return 0;

}

void AcmHotel()
{
	int H, W, N;
	int i = 0;

	cin >> H >> W >> N;

	if (N%H != 0) { i = i + N%H * 100; }
	else { i = i + ((H * 100) - 1); }
	i = i + ((N / H) + 1);

	cout << i;

}