// TestDynamicLib.cpp: определяет точку входа для приложения.
//
#include "TestDynamicLib.h"

/* Define a function pointer for our imported
 * function.
 * This reads as "introduce the new type f_funci as the type:
 *                pointer to a function returning an int and
 *                taking no arguments.
 *
 * Make sure to use matching calling convention (__cdecl, __stdcall, ...)
 * with the exported function. __stdcall is the convention used by the WinAPI
 */
typedef void(__stdcall* f_funci)();

int main(int argc, char* argv[])
{   
    /*Или абсолютный путь c:\\Users\\ASUS\\source\\repos\\ReleaseVersion\\DynamicLib\\lib\\*/
    HINSTANCE hGetProcIDDLL = LoadLibrary("DynamicLib.dll");

    if (!hGetProcIDDLL) {
        std::cout << "could not load the dynamic library" << std::endl;
        return EXIT_FAILURE;
    }

    // resolve function address here
    f_funci funci = (f_funci)GetProcAddress(hGetProcIDDLL, "laughter");
    if (!funci) {
        std::cout << "could not locate the function" << std::endl;
        return EXIT_FAILURE;
    }

    funci();

    return EXIT_SUCCESS;
}