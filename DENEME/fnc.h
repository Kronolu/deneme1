#pragma once
#include "Form1.h"
int _stdcall ReadString(char* window, int Point, int Len)
{
	char* value;

	HWND hWnd = FindWindow(NULL, L"Rubinum");
	DWORD proc_id;
	GetWindowThreadProcessId(hWnd, &proc_id);

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, proc_id);

	ReadProcessMemory(hProcess, (LPVOID)Point, &value, 7, 0);

	//if (value == 'Example')
		//{
		//       return 10;
		//}


	//CloseHandle(hProcess); Is actually necessary this?
	return 0;
}