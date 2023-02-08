int main() {
	int* pn=nullptr;

	delete pn; // it's ok to pass null pointer to delete operator

	pn = new int;
	delete pn; // it's ok to pass a valid pointer to delete operator
	pn = nullptr;

	pn = new int;
	int* pn2 = pn;
	delete pn; // this results into pn2 as dangling pointer
	pn = nullptr;

	delete pn2; // it's NOT OK to pass dangling pointer to delete operator
}
