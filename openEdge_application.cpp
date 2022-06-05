#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	STARTUPINFO startupInfo = { 0 };
	PROCESS_INFORMATION processInformation = { 0 };
	//´ò¿ªedgeä¯ÀÀÆ÷
	BOOL bSuccess = CreateProcess(TEXT("C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startupInfo, &processInformation);

	if (bSuccess)
	{
		cout << "Process started..." << endl
			<< "ProcessID: "
			<< processInformation.dwProcessId << endl;
	}
	else
	{
		cout << "Can not start process!" << endl
			<< "Error code: " << GetLastError();
	}
	system("pause");

}
