// lishishujuchaxun.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "shuiziyuanyuanchengjiankongzhongxin.h"
#include "lishishujuchaxun.h"
#include "afxdialogex.h"
#include "chaxunfangshi.h"
#include <windows.h> 
#include<mysql.h>
#include <mysql_error.h> 
#include<string.h>
#include<sys/types.h> 
#include<iostream> 
#include "stdio.h"


CString strChoosed;
CString number;
CString time1;
CString temperature;
CString PH;
CString conductivity;
CString turbidity;
CString Row;
#pragma comment(lib, "libmysql.lib") 

char query[1024];

// lishishujuchaxun �Ի���

IMPLEMENT_DYNAMIC(lishishujuchaxun, CDialogEx)

lishishujuchaxun::lishishujuchaxun(CWnd* pParent /*=NULL*/)
	: CDialogEx(lishishujuchaxun::IDD, pParent)
	, combobox11(_T(""))
	, EDIT1(_T(""))
	
{

}

lishishujuchaxun::~lishishujuchaxun()
{
}

void lishishujuchaxun::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, combobox1);
	DDX_CBString(pDX, IDC_COMBO1, combobox11);
	DDX_Text(pDX, IDC_EDIT1, EDIT1);
	DDX_Control(pDX, IDC_LIST1, LIST1);
}


BEGIN_MESSAGE_MAP(lishishujuchaxun, CDialogEx)
	ON_BN_CLICKED(IDOK, &lishishujuchaxun::OnBnClickedOk)
	ON_CBN_SELCHANGE(IDC_COMBO1, &lishishujuchaxun::OnCbnSelchangeCombo1)
	ON_EN_CHANGE(IDC_EDIT1, &lishishujuchaxun::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &lishishujuchaxun::OnBnClickedButton1)
	ON_LBN_SELCHANGE(IDC_LIST1, &lishishujuchaxun::OnLbnSelchangeList1)
END_MESSAGE_MAP()


// lishishujuchaxun ��Ϣ�������

BOOL lishishujuchaxun::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	combobox1.ResetContent();
	combobox1.InsertString(0, _T("id"));
	combobox1.InsertString(1, _T("time1"));
	combobox1.InsertString(2, _T("temperature"));
	combobox1.InsertString(3, _T("ph"));
	combobox1.InsertString(4, _T("conductivity"));
	combobox1.InsertString(5, _T("turbidity"));

	LIST1.InsertString(0,_T("�������ѯ�ؼ����Լ���Ӧ��ѯ���ݣ������ѯ��ť��������ʾ��ʷ������Ϣ"));

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}



void lishishujuchaxun::OnBnClickedOk()
{
    chaxunfangshi dlg;
	dlg.DoModal();// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void lishishujuchaxun::OnCbnSelchangeCombo1()
{

	int iCount = combobox1.GetCount();

	combobox1.GetLBText(combobox1.GetCurSel(), strChoosed);//��ȡѡ��Ĺؼ��ִ���  strChoosed ��


	//((CComboBox*)GetDlgItem(IDC_COMBO1))->GetWindowText(strChoosed);��һ��Ϊ�� ������ÿ�λ��ȡ��һ�ε�����
	//combobox1.GetWindowTextW(strChoosed);


	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}




void lishishujuchaxun::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void lishishujuchaxun::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	GetDlgItemText(IDC_EDIT1, EDIT1); //��ȡ�༭����������ݣ����� EDIT1 ��
	if (strChoosed == ""){

		AfxMessageBox(_T("��ѯ�ؼ��ֲ���Ϊ��"));
	}

	if (EDIT1 == ""){

		AfxMessageBox(_T("��ѯ���ݲ���Ϊ��"));
	}


	//�������ݿ⣬��ѯ���ݿ�����

	MYSQL my_connection;
	MYSQL *conn_ptr;  //�������Ӿ��

	conn_ptr = mysql_init(&my_connection);

	conn_ptr = mysql_real_connect(&my_connection, "localhost", "root", "aA165147", "szysj", 8081, NULL, 0);

	

	MYSQL_RES *res;//�������ݲ�ѯ���  
	MYSQL_ROW row;//ȡÿ�н���Ķ���  

	sprintf(query, "select*from sss where %S like '%S' \n", strChoosed, EDIT1);

	int SELECT = mysql_query(&my_connection, query); //��ѯ������������ַ�����ʾ  

	if (SELECT == 0)
	{
		res = mysql_store_result(&my_connection);

		if (NULL != res);//�õ���ѯ��� 
		{   LIST1.ResetContent();
		LIST1.InsertString(0, _T("����Ϊ���ݿ���ʷ���ݲ�ѯ���"));
		while (row = mysql_fetch_row(res))//����ȡ����ѯ��������� 
		{

			//�������ݿ��ȡ�����ݱ������ַ�����
			number = row[0];
			time1 = row[1];
			temperature = row[2];
			PH = row[3];
			conductivity = row[4];
			turbidity = row[5];

			//������������һ�𣬷���LIST�ؼ���ʾ
			Row = _T("���:")+ number + _T("  ʱ��:") + time1 + _T("  �¶�:") + temperature + _T("  PHֵ:") + PH + _T("  �絼��:") + conductivity + _T("  �Ƕ�:") + turbidity + _T("\r\n");//����֮���ÿո����

			LIST1.AddString(Row);
		}

		}
		mysql_free_result(res);//�ͷŽ����

	}
	for (int k = 0; k < 1500; k++)//���query����
	{
		memset(query, 0, 1024);
	}

	mysql_close(&my_connection);
}


void lishishujuchaxun::OnLbnSelchangeList1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
