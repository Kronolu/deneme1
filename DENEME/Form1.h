#pragma once
#pragma comment(lib, "SHELL32.LIB")
#pragma comment (lib, "Advapi32.lib")
#pragma comment (lib, "Wininet.lib")
#pragma comment (lib, "Kernel32.lib")
#pragma comment (lib, "User32.lib")
#pragma comment (lib, "urlmon.lib")
#pragma comment (lib, "wininet.lib")
#include <Windows.h>
#include "fnc.h"
#include <vector>
#include <string>
#include <iostream>
#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN
#include <vector>
#include <chrono>
#include <algorithm>
#include <map>

#include <tchar.h> // _tcscmp
#include<TlHelp32.h>
namespace DENEME {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 için özet
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Trying button 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Read String";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(117, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Trying button 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(117, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Trying button 3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(117, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Trying button 4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(117, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Trying button 5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(117, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Trying button 6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 221);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"read process memory String";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		DWORD ResolveMLPointer(DWORD ptr, std::vector<DWORD> offsets)
		{
			DWORD addr = ptr;
			for (int i = 0; i < offsets.size(); ++i)
			{
				addr = *(DWORD*)addr;
				addr += offsets[i];
			}
			return addr;
		}
		HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, GetCurrentProcessId());

		void WriteExternalString(HANDLE hProc, BYTE* addr, char* newstr)
		{

			unsigned int arraySize;
			//Get the size of the array, offset 0x14 is the size of the array
			ReadProcessMemory(hProc, (BYTE*)(addr + 0x14), &arraySize, sizeof(arraySize), 0);

			if (arraySize > 15)
			{
				uintptr_t addrOfCharArray;
				//dereference the pointer in the second member variable to get the dynamic address of the array
				ReadProcessMemory(hProc, (BYTE*)(addr + sizeof(void*)), &addrOfCharArray, sizeof(void*), 0);

				//Write the buffer to the array, +1 to get the null terminator
				WriteProcessMemory(hProc, (BYTE*)(addrOfCharArray), newstr, strlen(newstr) + 1, 0);
			}
			else
			{
				WriteProcessMemory(hProc, (BYTE*)(addr + sizeof(void*)), newstr, strlen(newstr) + 1, 0);
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		char* _buffer = new char[15];
		int anan = ReadProcessMemory(GetCurrentProcess(), (LPVOID)0x01C16B78, &_buffer[0], 2, NULL);
		if(strcmp(_buffer, "Sokucunuz") == 0) {
			MessageBox::Show("anan");
		}
		label1->Text = Convert::ToString(anan); //Valueyi anlýk olarak labele aktarýyoruz
		//String^ yenideger = gcnew String(anan);

		//	String^ yenideger = gcnew String(anan);
		//label1->Text = Convert::ToString(anan);
		//DWORD pID = NULL;
		//HANDLE processHandle = NULL;
		//processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
		//char anan = (*(DWORD*)((char*)GetModuleHandle(L"rbclient.exe") + 0x01C16B78) + 0x0 + 0x784);


//		WriteExternalString(hProcess, (BYTE*)&str, newstr);

		//system("pause");
		int readTest = 0; // We store the Value we read from the Process here


	//	ReadProcessMemory(Hook.ProcessHandle, (LPCVOID)(sigPoints[2] + 11), (LPVOID)&ClientPosStruct, sizeof(ClientPosAsm), 0);
		
		//	String^ tmp1;
		//ReadProcessMemory(GetModuleHandle(L"rbclient.exe"), (BYTE*)0x18C10018, &tmp1, sizeof(10), 0);
//ReadProcessMemory(GetModuleHandle(L"rbclient.exe"), (LPVOID)HP, &tmp1, 4, NULL); // HP Adresinin valuesini okuyoruz
		//String^ motheraddressz1 = Convert::ToString(tmp1);
		//label1->Text = motheraddressz1; //Valueyi anlýk olarak labele aktarýyoruz
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	unsigned int arraySize;
	const char* anan = (char*)ReadProcessMemory(hProcess, (DWORD*)(0x01C16B78 + 0x0 + 0x784), &arraySize, sizeof(arraySize), 0);

	String^ yenideger = gcnew String(anan);
	

String^ motheraddressz1 = Convert::ToString(anan);
	label1->Text = Convert::ToString(anan); //Valueyi anlýk olarak labele aktarýyoruz
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	unsigned int arraySize;
	int anan = ReadProcessMemory(hProcess, (BYTE*)(0x01C16B78 + 0x0 + 0x784), &arraySize, sizeof(arraySize), 0);
	//String^ motheraddressz1 = Convert::ToString(anan);
	label1->Text = Convert::ToString(anan); //Valueyi anlýk olarak labele aktarýyoruz
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	unsigned int arraySize;
	int anan = ReadProcessMemory(hProcess, (DWORD*)(0x01C16B78 + 0x0 + 0x784), &arraySize, sizeof(arraySize), 0);
	//String^ motheraddressz1 = Convert::ToString(anan);
	label1->Text = Convert::ToString(anan); //Valueyi anlýk olarak labele aktarýyoruz
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	unsigned int arraySize;
	int anan = ReadProcessMemory(GetModuleHandle(L"rbclient.exe"), (BYTE*)(0x01C16B78 + 0x0 + 0x784), &arraySize, sizeof(arraySize), 0);

	//String^ motheraddressz1 = Convert::ToString(anan);
	label1->Text = Convert::ToString(anan); //Valueyi anlýk olarak labele aktarýyoruz
}
	   DWORD GetModuleBaseAddress(TCHAR* lpszModuleName, DWORD pID) {
		   DWORD dwModuleBaseAddress = 0;
		   HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pID); // make snapshot of all modules within process
		   MODULEENTRY32 ModuleEntry32 = { 0 };
		   ModuleEntry32.dwSize = sizeof(MODULEENTRY32);

		   if (Module32First(hSnapshot, &ModuleEntry32)) //store first Module in ModuleEntry32
		   {
			   do {
				   if (_tcscmp(ModuleEntry32.szModule, lpszModuleName) == 0) // if Found Module matches Module we look for -> done!
				   {
					   dwModuleBaseAddress = (DWORD)ModuleEntry32.modBaseAddr;
					   break;
				   }
			   } while (Module32Next(hSnapshot, &ModuleEntry32)); // go through Module entries in Snapshot and store in ModuleEntry32


		   }
		   CloseHandle(hSnapshot);
		   return dwModuleBaseAddress;
	   }

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {



	DWORD pID = NULL; // ID of our Game
	DWORD gameBaseAddress = GetModuleBaseAddress(_T("rbclient.exe"), pID);
	HANDLE processHandle = NULL;
	processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
	DWORD baseAddress = NULL;
	DWORD pointsAddress = baseAddress; //the Adress we need -> change now while going through offsets

int anan =	ReadProcessMemory(processHandle, (LPVOID)(0x01C16B78 + 0x68, 0x88), &pointsAddress, sizeof(pointsAddress), NULL);

	ReadProcessMemory(processHandle, (LPVOID)(gameBaseAddress + 0x01C16B78), &baseAddress, sizeof(baseAddress), NULL);

}

};
}
