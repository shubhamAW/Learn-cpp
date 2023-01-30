#pragma once

#ifdef B_EXPORTS
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

int EXPIMP Add(int u, int v);