#pragma once

#if defined(MYDLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

extern "C" {
	int EXPIMP Add(int u, int v);

	extern const EXPIMP double PI;
}

