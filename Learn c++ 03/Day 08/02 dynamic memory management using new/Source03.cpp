int main() {
	int count = 5;

	int* pn = new int[count];

	for (int i = 0; i < count; i++)
		pn[i] = i;

	for (int i = 0; i < count; i++)
		*(pn + i) = 2 * i;

	delete[] pn;
	pn = nullptr;
}

/*
- Use same form of new and delete.
  If [] is used with new then use [] with delete.
  If [] is not used with new then do not use it with delete.
*/