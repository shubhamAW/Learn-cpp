void main() {
	/* underflow case */
	int u = -2147483647;
	u = u - 1;
	u = u - 1; // underflow happens here

	/* overflow case */
	int v = 2147483647;
	v = v + 1; // overflow happens here
}

/*
When does underflow happen?
* When we try to decrement variable beyond the lowest value it can hold then it causes underflow.

When does overflow happen?
* When we try to increment variable beyond the highest value it can hold then it causes overflow.
*/