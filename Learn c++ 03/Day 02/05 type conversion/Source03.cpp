void main() {
	int u = 5.0;
}

/*
* The type of 5.0 is double and the type of u is int.
* Since dissimilar types are involved in the expression, type coversion is involved.
* This type conversion may result into data loss, hence compiler won't do it quietly.
* If conversion involves basic type to basic type then compiler throws warning.
* Explicit casting is essential in such case to get rid of the warning.
* Donot ignore warnings.
*/