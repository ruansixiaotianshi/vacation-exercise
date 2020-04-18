#define _CRT_SECURE_NO_WARNINGS 
#include<Windows.h>
#include<tchar.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*��Դid*/
#define IDM_OPT1     301
#define IDM_OPT2     302

HMENU hRoot;//����˵����

void createMyMenu() {
	hRoot = CreateMenu();//��������˵�

	if (!hRoot) {
		printf("%s", "request for menu resource fail!");
		return;
	}

	HMENU pop1 = CreatePopupMenu();//��������ʽ�˵�
	AppendMenu(hRoot, MF_POPUP, (UINT_PTR)pop1, L"����");//������˵����뵯��ʽ�˵�
	AppendMenu(pop1, MF_STRING, IDM_OPT1, L"����1");//������ʽ�˵�����˵���

	MENUITEMINFO menuInfo;
	menuInfo.cbSize = sizeof(MENUITEMINFO);
	menuInfo.cch = 100;
	menuInfo.dwItemData = NULL;
	menuInfo.dwTypeData = L"����2";
	menuInfo.fMask = MIIM_ID | MIIM_STRING | MIIM_STATE;
	menuInfo.fState = MFS_ENABLED;
	menuInfo.fType = MIIM_STRING;
	menuInfo.wID = IDM_OPT2;

	InsertMenuItem(pop1, IDM_OPT2, FALSE, &menuInfo);//������ʽ�˵�����˵���
	InsertMenu(pop1, ID_OPTION3, MF_BYCOMMAND | MF_STRING, ID_OPTION3, L"����3");//������ʽ�˵�����˵���
}

int CALLBACK WinMain(
	_In_ HINSTANCE hInstance,
	_In_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
) {
	...
		createMyMenu();
	...
		HWND hWnd = CreateWindow(
			szWindowClass,
			szTitle,
			WS_OVERLAPPEDWINDOW,
			CW_USEDEFAULT, CW_USEDEFAULT,
			500, 300,
			NULL,
			hRoot, //�˵���Դ
			hInstance,
			NULL
		);
	...
}
