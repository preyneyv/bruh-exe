#include <iostream>
#include <windows.h>
#include <mmsystem.h>

int main()
{
    PlaySound("PRANAV_BRUH", GetModuleHandle(NULL), SND_RESOURCE);
}
