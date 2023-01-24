void main() {
	int u = 3 + 5; // both expression type and receving variable type is int, no type conversion is involved
	
	double v = 3 + 5; // expression type is int and receiving variable type is double
	// type conversion is involved. Since type conversion involved is promoting type
	// conversion happens implicitly.

	int w = static_cast<int>(3 + 5.0); // expression type is double and receiving variable type is int.
	// type conversion is involved. Since type conversion involved is demoting type
	// compiler will generate warning. Warning can be supressed using explicit type cast. 
}
