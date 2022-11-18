// Macros
// 1) You are the infamous Bill Bearhy and you recently decided to get into fundraising.
// A common fundraiser you notice on campus is the Krispy Kreme donut sales.
// In order to keep track of the number of donuts you buy each day,
// you write a little C program to caluculate that total number. 
// Create a Macro that takes in two arguements - 
// the number of boxes of donuts and the number of donuts per box 
// - and returns the total number of donuts that you have. 
// (Make sure that you make your macro properly!)
#define KRISPY (n_of_boxes) * (n_of_donuts);

// Explain the different contexts of the 
// static, extern, and volatile keywords. 
// Where are variables of these keywords stored 
// and what do they mean in a program?

volatile // - dictates to the compiler that the vlaue at this memory location 
// may change at unexpected times, the compiler should not optimize accesses to memory here
extern // Tell compilers that this variable defined from another file
	   // - The data can be accessed to the other C or H file

static
// It is not visible outside from C file they are defined in similar as
static = private
static function() // Not visitble outside from C file they defined in
static int x = 0; // Not visible outside from C file they defined in
				  // Because they don't get changed between function calls,
				  // they are not stored on the stack!
int f(void) {
	static int a = 0;
	a++;
}
int main(void) {
	f(void);
	// Even tho everytime, f() called  a is incremented.
}

struct m {
	int myint; // sizeOf = 4; address = 2000
	char mychar; // sizeOf = 1; address = 2004
	char mystr[20]; // sizeOf = 20;
} mystruct;

mystruct.mystr[4] = 'x'; 
						// sizeOf mystruct.mystr[4] = 5;
						// add one more address 
						// address = 2004 + length of [0,1,2,3,4]
						// address = 2009;

struct foo mystruct[25];
mystruct[6].mystr[3] = 'y';
// mystruct[0].mysint
// mystruct[0].mychar
// mystruct[0].mystr[0], mystruct[0].mystr[1], ... 20 mystr

// mystruct[1], ...

// my struct[2], ...
// ...
// my struct[6].

struct Bear {
	int arms;
	char name[5];
}
struct Bear* bearManipulation(struct Bear *array, struct Bear* newBear, int index) {
	*(array + index).
}








//