#include <stdio.h>

int main() {
	int a = 10; // created on stack when main() is called.
	static int b = 20; // created in data section when program started (before main() is called).
	//static int c = a; //  created in data section when program started (before main() is called).
					// but trying to initialize with a local var (which is not created yet).
					// COMPILER ERROR.
	// to initialize static and global variables, use const values (not local variables).
	return 0;
}
