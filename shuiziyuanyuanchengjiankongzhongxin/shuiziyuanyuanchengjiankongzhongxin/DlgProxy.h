
// DlgProxy.h: ͷ�ļ�
//

#pragma once

class CshuiziyuanyuanchengjiankongzhongxinDlg;


// CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy ����Ŀ��

class CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy)

	CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��

// ����
public:
	CshuiziyuanyuanchengjiankongzhongxinDlg* m_pDialog;

// ����
public:

// ��д
	public:
	virtual void OnFinalRelease();

// ʵ��
protected:
	virtual ~CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy();

	// ���ɵ���Ϣӳ�亯��

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy)

	// ���ɵ� OLE ����ӳ�亯��

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

