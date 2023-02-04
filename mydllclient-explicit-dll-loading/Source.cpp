#include <stdio.h>
#include <windows.h>


int main() {
	HMODULE hmydll = LoadLibrary(L"mydll.dll");
	if (hmydll == NULL) {
		printf("Couldn't load mydll.dll. Hence exiting...");
		system("pause");
		return 0;
	}
	int result = 0;
	int (*operation)(int u, int v) = reinterpret_cast<int(*)(int, int)>(GetProcAddress(hmydll, "Add"));
	if (operation != nullptr) {
		result = operation(3, 4);
	}
	double PI = *reinterpret_cast<const double*>(GetProcAddress(hmydll, "PI"));

	FreeLibrary(hmydll);
}