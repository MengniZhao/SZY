
// shuiziyuanyuanchengjiankongzhongxinDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "shuiziyuanyuanchengjiankongzhongxin.h"
#include "shuiziyuanyuanchengjiankongzhongxinDlg.h"
#include "DlgProxy.h"
#include "afxdialogex.h"
#include "chaxunfangshi.h"




#ifdef _DEBUG
#define new DEBUG_NEW
#endif
UINT Sever_TH(LPVOID p);

// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
	EnableActiveAccessibility();
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CshuiziyuanyuanchengjiankongzhongxinDlg �Ի���


IMPLEMENT_DYNAMIC(CshuiziyuanyuanchengjiankongzhongxinDlg, CDialogEx);

CshuiziyuanyuanchengjiankongzhongxinDlg::CshuiziyuanyuanchengjiankongzhongxinDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CshuiziyuanyuanchengjiankongzhongxinDlg::IDD, pParent)
{
	EnableActiveAccessibility();
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pAutoProxy = NULL;
	
}

CshuiziyuanyuanchengjiankongzhongxinDlg::~CshuiziyuanyuanchengjiankongzhongxinDlg()
{
	// ����öԻ������Զ���������
	//  ���˴���ָ��öԻ���ĺ���ָ������Ϊ NULL���Ա�
	//  �˴���֪���öԻ����ѱ�ɾ����
	if (m_pAutoProxy != NULL)
		m_pAutoProxy->m_pDialog = NULL;
}

void CshuiziyuanyuanchengjiankongzhongxinDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CshuiziyuanyuanchengjiankongzhongxinDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_CLOSE()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CshuiziyuanyuanchengjiankongzhongxinDlg::OnBnClickedOk)
	
	
	ON_EN_CHANGE(IDC_EDIT1, &CshuiziyuanyuanchengjiankongzhongxinDlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// CshuiziyuanyuanchengjiankongzhongxinDlg ��Ϣ�������



BOOL CshuiziyuanyuanchengjiankongzhongxinDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	ShowWindow(SW_MINIMIZE);

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	


	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}



void CshuiziyuanyuanchengjiankongzhongxinDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CshuiziyuanyuanchengjiankongzhongxinDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}



//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CshuiziyuanyuanchengjiankongzhongxinDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

// ���û��ر� UI ʱ������������Ա���������ĳ��
//  �������Զ�����������Ӧ�˳���  ��Щ
//  ��Ϣ�������ȷ����������: �����������ʹ�ã�
//  ������ UI�������ڹرնԻ���ʱ��
//  �Ի�����Ȼ�ᱣ�������

void CshuiziyuanyuanchengjiankongzhongxinDlg::OnClose()
{
	if (CanExit())
		CDialogEx::OnClose();
}

void CshuiziyuanyuanchengjiankongzhongxinDlg::OnOK()
{
	if (CanExit())
		CDialogEx::OnOK();
}

void CshuiziyuanyuanchengjiankongzhongxinDlg::OnCancel()
{
	if (CanExit())
		CDialogEx::OnCancel();
}

BOOL CshuiziyuanyuanchengjiankongzhongxinDlg::CanExit()
{
	// �����������Ա�����������Զ���
	//  �������Իᱣ�ִ�Ӧ�ó���
	//  ʹ�Ի���������������� UI ����������
	if (m_pAutoProxy != NULL)
	{
		ShowWindow(SW_HIDE);
		return FALSE;
	}

	return TRUE;
}



void CshuiziyuanyuanchengjiankongzhongxinDlg::OnBnClickedOk()
{
	chaxunfangshi dlg;
	dlg.DoModal();// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}











void CshuiziyuanyuanchengjiankongzhongxinDlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
