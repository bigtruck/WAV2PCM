
// WAV2PCM.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWAV2PCMApp: 
// �йش����ʵ�֣������ WAV2PCM.cpp
//

class CWAV2PCMApp : public CWinApp
{
public:
	CWAV2PCMApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWAV2PCMApp theApp;