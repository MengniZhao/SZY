
// shuiziyuanyuanchengjiankongzhongxin.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CshuiziyuanyuanchengjiankongzhongxinApp: 
// �йش����ʵ�֣������ shuiziyuanyuanchengjiankongzhongxin.cpp
//

class CshuiziyuanyuanchengjiankongzhongxinApp : public CWinApp
{
public:
	CshuiziyuanyuanchengjiankongzhongxinApp();

// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CshuiziyuanyuanchengjiankongzhongxinApp theApp;