
// SudukoCrack.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSudukoCrackApp: 
// �йش����ʵ�֣������ SudukoCrack.cpp
//

class CSudukoCrackApp : public CWinApp
{
public:
	CSudukoCrackApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSudukoCrackApp theApp;