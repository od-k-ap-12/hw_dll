#pragma once

#ifndef FIRSTDLL_API
#define FIRSTDLL_API extern "C" __declspec(dllimport)
#endif

FIRSTDLL_API int Sum(int a, int b);
FIRSTDLL_API int Min(int a, int b);
FIRSTDLL_API int Mult(int a, int b);
FIRSTDLL_API int Div(int a, int b);

