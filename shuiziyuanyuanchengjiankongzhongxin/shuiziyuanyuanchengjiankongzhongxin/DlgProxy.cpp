
// DlgProxy.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "shuiziyuanyuanchengjiankongzhongxin.h"
#include "DlgProxy.h"
#include "shuiziyuanyuanchengjiankongzhongxinDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy

IMPLEMENT_DYNCREATE(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy, CCmdTarget)

CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy::CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy()
{
	EnableAutomation();
	
	// ΪʹӦ�ó������Զ��������ڻ״̬ʱһֱ���� 
	//	���У����캯������ AfxOleLockApp��
	AfxOleLockApp();

	// ͨ��Ӧ�ó����������ָ��
	//  �����ʶԻ���  ���ô�����ڲ�ָ��
	//  ָ��Ի��򣬲����öԻ���ĺ���ָ��ָ��
	//  �ô���
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CshuiziyuanyuanchengjiankongzhongxinDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CshuiziyuanyuanchengjiankongzhongxinDlg)))
		{
			m_pDialog = reinterpret_cast<CshuiziyuanyuanchengjiankongzhongxinDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy::~CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy()
{
	// Ϊ������ OLE �Զ����������ж������ֹӦ�ó���
	//	������������ AfxOleUnlockApp��
	//  ���������������⣬�⻹���������Ի���
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease��  ���ཫ�Զ�
	// ɾ���ö���  �ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// ע��: ��������˶� IID_Ishuiziyuanyuanchengjiankongzhongxin ��֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡�  �� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {967D4C29-34A0-421C-A997-111CDDFB086E}
static const IID IID_Ishuiziyuanyuanchengjiankongzhongxin =
{ 0x967D4C29, 0x34A0, 0x421C, { 0xA9, 0x97, 0x11, 0x1C, 0xDD, 0xFB, 0x8, 0x6E } };

BEGIN_INTERFACE_MAP(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy, IID_Ishuiziyuanyuanchengjiankongzhongxin, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 ���ڴ���Ŀ�� StdAfx.h �ж���
// {83317560-B27B-4498-84FD-F456421DC241}
IMPLEMENT_OLECREATE2(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy, "shuiziyuanyuanchengjiankongzhongxin.Application", 0x83317560, 0xb27b, 0x4498, 0x84, 0xfd, 0xf4, 0x56, 0x42, 0x1d, 0xc2, 0x41)


// CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy ��Ϣ�������
