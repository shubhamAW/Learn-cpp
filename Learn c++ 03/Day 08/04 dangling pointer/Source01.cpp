int main() {
	int* pn = new int(1);
	int* pn2 = pn;
	delete pn;
	pn = nullptr;
}

/*
- 'pn2' is a dangling or floating pointer.
*/
