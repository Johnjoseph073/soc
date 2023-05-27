// C++ recursive function to
// solve tower of hanoi puzzle
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int from_rod, int to_rod,
				int aux_rod)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << from_rod << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{
	int N = 5;

	// A, B and C are names of rods
	towerOfHanoi(N,1,3,2);
	return 0;
}

// This is code is contributed by rathbhupendra
