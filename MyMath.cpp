#include <windows.h>

#ifdef __cplusplus    // If used by C++ code, 
extern "C" {          // we need to export the C interface
#endif

	__declspec(dllexport) int __cdecl Addition(int x, int y)
	{
			int z;
			z = x + y;
			return z;
	}

	__declspec(dllexport) int __cdecl Substraction(int x, int y)
	{
		int z;
		z = x - y;
		return z;
	}

	__declspec(dllexport) int __cdecl Multiplication(int x, int y)
	{
		int z;
		z = x * y;
		return z;
	}

	__declspec(dllexport) int __cdecl Division(int x, int y)
	{
		int z;
		z = x / y;
		return z;
	}

#ifdef __cplusplus
}
#endif