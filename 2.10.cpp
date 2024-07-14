// This lesson is about type deduction in C++.
// using 'auto'.

int x = 7;
double d = 7.7; 

// Those two initializations are a bit redundant, since we know that 7 is an int and 7.7 is a double.

auto x = 7;
auto d = 7.7;

// We know that 7 is an int and so does the compiler. The same gos for 7.7.
// In those cases, we can use the keyword auto.

// ONLY USE AUTO WHEN THE TYPE IS EXPLICIT AND OBVIOUS AND NO CONVERSION WILL BE MADE.
