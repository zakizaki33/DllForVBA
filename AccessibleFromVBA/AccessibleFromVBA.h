#pragma once

extern "C" {
#define ACCESSIBLEFROMVBA_API __declspec(dllexport)

	ACCESSIBLEFROMVBA_API void WINAPI DoNothing();

	ACCESSIBLEFROMVBA_API int WINAPI GetNumberI(int i);

	ACCESSIBLEFROMVBA_API void WINAPI GetNumberI2(int* pi);

}