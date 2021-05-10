// AccessibleFromVBA.cpp : DLL アプリケーション用にエクスポートされる関数を定義します。
//

#include "stdafx.h"

#include "AccessibleFromVBA.h"

ACCESSIBLEFROMVBA_API void WINAPI DoNothing()
{
	return ;
}

//int型の値を受け取って、int型の復帰値を返す
//VBAで言うとFunctionプロシージャ相当

ACCESSIBLEFROMVBA_API int WINAPI GetNumberI(int i)
{
	return i * 10;
}



//VBAで言うと、Byref。　Subプロシージャ相当
ACCESSIBLEFROMVBA_API void WINAPI GetNumberI2(int* pi)
{
	*pi = *pi * 100;
	return;
}

