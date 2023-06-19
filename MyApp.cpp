#include<Windows.h> 
#include<iostream> 
using namespace std;
// Declare function Pointer 
typedef int(__cdecl* FunAdd) (int a, int b);
typedef int(__cdecl* FunSub) (int a, int b);
typedef int(__cdecl* FunMultiply) (int a, int b);
typedef int(__cdecl* FunDivision) (int a, int b);
int main()
{
	//Local variable
	HMODULE hModule;
	
	// STEP-1 Load Library - Get a Handle to DLL module 
	hModule = LoadLibrary(TEXT("D:\\dev\\MyMath\\Debug\\MyMath.dll"));

	if (NULL == hModule)
		cout << "Load Library Failed & Error No - " << GetLastError() << endl;
	else		
		cout << "Load Library Success" << endl;
	
	// STEP-2 GetProcAddress - Get the Function Address 
	FunAdd AdditionFun = (FunAdd)GetProcAddress(hModule, "Addition");
	
	//STEP-3 Check the Function Addres is Valid or not
	if (NULL == AdditionFun)
		cout << "Function Address is not Valid & Error No - " << GetLastError() << endl;
	else
		cout << "Function Address is Valid" << endl;

	cout << "Addition = " << AdditionFun(10, 10) << endl; 
	
	//STEP-4 Free the DLL Fule
	FreeLibrary(hModule);	
	system(" PAUSE ");
	return 0;
}