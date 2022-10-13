// C++ program to add two number
// using half adder method
#include <iostream>
using namespace std;

// Function to return sum
// of two number
int addTwoNumber(int A, int B)
{

	// Iterate till there is no carry
	while (B != 0) {

		// Carry now contains common
		// set bits of A and B
		int carry = A & B;

		// Sum of bits of A and B
		// where at least one of the
		// bits is not set
		A = A ^ B;

		// Carry is shifted by one so
		// that adding it to A gives
		// the required sum
		B = carry << 1;
	}

	return A;
}

// Driver Code
int main()
{
	// Given two number
	int A = 4, B = 11;

	// Function call
	printf("sum = %d", addTwoNumber(A, B));
	return 0;
}
