#pragma once


#if defined(PRACTICEDAY11DLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

//return_type EXPIMP function_name(type param1,type param2);

void EXPIMP print();