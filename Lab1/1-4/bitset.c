
/*
 * addNumber(set, x): Add 'x' to the bitset represented in array 'set'
 *   Assume that 0 <= x <= 127 and 'set' is a pointer to 16-byte array
 */

int	pow(int base, int exp) {
	int	res = 1;
	for(int i = 0; i < exp; i++)
		res *= base;
	return (res);
}

void addNumber(unsigned char* set, int x) {
	int a = x / 8, b = x % 8;
    if ((set[a] << b) < 0)
		  return;
	set[a] += pow(2, 7 - b);
}