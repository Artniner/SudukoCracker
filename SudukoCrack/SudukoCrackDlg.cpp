
// SudukoCrackDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SudukoCrack.h"
#include "SudukoCrackDlg.h"
#include "afxdialogex.h"
#include "vector"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CSudukoCrackDlg 对话框



CSudukoCrackDlg::CSudukoCrackDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSudukoCrackDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON48);
}

void CSudukoCrackDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CSudukoCrackDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CLEAR_BUTTON, &CSudukoCrackDlg::OnBnClickedClearButton)
	ON_BN_CLICKED(IDOK, &CSudukoCrackDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_VIOCRACK_BUTTON, &CSudukoCrackDlg::OnBnClickedViocrackButton)
END_MESSAGE_MAP()


// CSudukoCrackDlg 消息处理程序

BOOL CSudukoCrackDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码

	m_editID[0][0] = IDC_NUM00_EDIT;
	m_editID[0][1] = IDC_NUM01_EDIT;
	m_editID[0][2] = IDC_NUM02_EDIT;
	m_editID[0][3] = IDC_NUM03_EDIT;
	m_editID[0][4] = IDC_NUM04_EDIT;
	m_editID[0][5] = IDC_NUM05_EDIT;
	m_editID[0][6] = IDC_NUM06_EDIT;
	m_editID[0][7] = IDC_NUM07_EDIT;
	m_editID[0][8] = IDC_NUM08_EDIT;
	m_editID[1][0] = IDC_NUM10_EDIT;
	m_editID[1][1] = IDC_NUM11_EDIT;
	m_editID[1][2] = IDC_NUM12_EDIT;
	m_editID[1][3] = IDC_NUM13_EDIT;
	m_editID[1][4] = IDC_NUM14_EDIT;
	m_editID[1][5] = IDC_NUM15_EDIT;
	m_editID[1][6] = IDC_NUM16_EDIT;
	m_editID[1][7] = IDC_NUM17_EDIT;
	m_editID[1][8] = IDC_NUM18_EDIT;
	m_editID[2][0] = IDC_NUM20_EDIT;
	m_editID[2][1] = IDC_NUM21_EDIT;
	m_editID[2][2] = IDC_NUM22_EDIT;
	m_editID[2][3] = IDC_NUM23_EDIT;
	m_editID[2][4] = IDC_NUM24_EDIT;
	m_editID[2][5] = IDC_NUM25_EDIT;
	m_editID[2][6] = IDC_NUM26_EDIT;
	m_editID[2][7] = IDC_NUM27_EDIT;
	m_editID[2][8] = IDC_NUM28_EDIT;
	m_editID[3][0] = IDC_NUM30_EDIT;
	m_editID[3][1] = IDC_NUM31_EDIT;
	m_editID[3][2] = IDC_NUM32_EDIT;
	m_editID[3][3] = IDC_NUM33_EDIT;
	m_editID[3][4] = IDC_NUM34_EDIT;
	m_editID[3][5] = IDC_NUM35_EDIT;
	m_editID[3][6] = IDC_NUM36_EDIT;
	m_editID[3][7] = IDC_NUM37_EDIT;
	m_editID[3][8] = IDC_NUM38_EDIT;
	m_editID[4][0] = IDC_NUM40_EDIT;
	m_editID[4][1] = IDC_NUM41_EDIT;
	m_editID[4][2] = IDC_NUM42_EDIT;
	m_editID[4][3] = IDC_NUM43_EDIT;
	m_editID[4][4] = IDC_NUM44_EDIT;
	m_editID[4][5] = IDC_NUM45_EDIT;
	m_editID[4][6] = IDC_NUM46_EDIT;
	m_editID[4][7] = IDC_NUM47_EDIT;
	m_editID[4][8] = IDC_NUM48_EDIT;
	m_editID[5][0] = IDC_NUM50_EDIT;
	m_editID[5][1] = IDC_NUM51_EDIT;
	m_editID[5][2] = IDC_NUM52_EDIT;
	m_editID[5][3] = IDC_NUM53_EDIT;
	m_editID[5][4] = IDC_NUM54_EDIT;
	m_editID[5][5] = IDC_NUM55_EDIT;
	m_editID[5][6] = IDC_NUM56_EDIT;
	m_editID[5][7] = IDC_NUM57_EDIT;
	m_editID[5][8] = IDC_NUM58_EDIT;
	m_editID[6][0] = IDC_NUM60_EDIT;
	m_editID[6][1] = IDC_NUM61_EDIT;
	m_editID[6][2] = IDC_NUM62_EDIT;
	m_editID[6][3] = IDC_NUM63_EDIT;
	m_editID[6][4] = IDC_NUM64_EDIT;
	m_editID[6][5] = IDC_NUM65_EDIT;
	m_editID[6][6] = IDC_NUM66_EDIT;
	m_editID[6][7] = IDC_NUM67_EDIT;
	m_editID[6][8] = IDC_NUM68_EDIT;
	m_editID[7][0] = IDC_NUM70_EDIT;
	m_editID[7][1] = IDC_NUM71_EDIT;
	m_editID[7][2] = IDC_NUM72_EDIT;
	m_editID[7][3] = IDC_NUM73_EDIT;
	m_editID[7][4] = IDC_NUM74_EDIT;
	m_editID[7][5] = IDC_NUM75_EDIT;
	m_editID[7][6] = IDC_NUM76_EDIT;
	m_editID[7][7] = IDC_NUM77_EDIT;
	m_editID[7][8] = IDC_NUM78_EDIT;
	m_editID[8][0] = IDC_NUM80_EDIT;
	m_editID[8][1] = IDC_NUM81_EDIT;
	m_editID[8][2] = IDC_NUM82_EDIT;
	m_editID[8][3] = IDC_NUM83_EDIT;
	m_editID[8][4] = IDC_NUM84_EDIT;
	m_editID[8][5] = IDC_NUM85_EDIT;
	m_editID[8][6] = IDC_NUM86_EDIT;
	m_editID[8][7] = IDC_NUM87_EDIT;
	m_editID[8][8] = IDC_NUM88_EDIT;

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			nums[i][j] = 0;
		}
	}

	cracked = FALSE;

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CSudukoCrackDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CSudukoCrackDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CSudukoCrackDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CSudukoCrackDlg::OnBnClickedClearButton()
{
	// TODO:  在此添加控件通知处理程序代码
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			nums[i][j] = 0;
			SetNums(nums);
		}
	}
}

// 显示结果
void CSudukoCrackDlg::SetNums(int nums[9][9]){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (nums[i][j] == 0){
				SetDlgItemText(m_editID[i][j], _T(""));
			}
			else{
				SetDlgItemInt(m_editID[i][j], nums[i][j]);
			}
		}
	}
}

// 获取输入
void CSudukoCrackDlg::GetNums(){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			nums[i][j] = GetDlgItemInt(m_editID[i][j]);
		}
	}
}


void CSudukoCrackDlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码

	// 获取输入并判断输入是否有效
	GetNums();

	//nums[0][0] = 1;
	//nums[0][1] = 2;
	//nums[0][2] = 3;
	//nums[0][3] = 4;
	//nums[0][4] = 5;
	//nums[0][5] = 6;
	//nums[0][6] = 7;
	//nums[0][7] = 8;
	//nums[0][8] = 9;
	//nums[1][0] = 4;
	//nums[1][1] = 5;
	//nums[1][2] = 6;
	//nums[1][3] = 7;
	//nums[1][4] = 8;
	//nums[1][5] = 9;
	//nums[1][6] = 1;
	//nums[1][7] = 2;
	//nums[1][8] = 3;
	//nums[2][0] = 7;
	//nums[2][1] = 8;
	//nums[2][2] = 9;
	//nums[2][3] = 1;
	//nums[2][4] = 2;
	//nums[2][5] = 3;
	//nums[2][6] = 4;
	//nums[2][7] = 5;
	//nums[2][8] = 6;
	//nums[3][0] = 2;
	//nums[3][1] = 1;
	//nums[3][2] = 4;
	//nums[3][3] = 3;
	//nums[3][4] = 6;
	//nums[3][5] = 5;
	//nums[3][6] = 8;
	//nums[3][7] = 9;
	//nums[3][8] = 7;
	//nums[4][0] = 3;
	//nums[4][1] = 6;
	//nums[4][2] = 5;
	//nums[4][3] = 8;
	//nums[4][4] = 9;
	//nums[4][5] = 7;
	//nums[4][6] = 2;
	//nums[4][7] = 1;
	//nums[4][8] = 4;
	//nums[5][0] = 8;
	//nums[5][1] = 9;
	//nums[5][2] = 7;
	//nums[5][3] = 2;
	//nums[5][4] = 1;
	//nums[5][5] = 4;
	//nums[5][6] = 3;
	//nums[5][7] = 6;
	//nums[5][8] = 5;
	//nums[6][0] = 5;
	//nums[6][1] = 3;
	//nums[6][2] = 1;
	//nums[6][3] = 6;
	//nums[6][4] = 4;
	//nums[6][5] = 2;
	//nums[6][6] = 9;
	//nums[6][7] = 7;
	//nums[6][8] = 8;
	//nums[7][0] = 6;
	//nums[7][1] = 4;
	//nums[7][2] = 2;
	//nums[7][3] = 9;
	//nums[7][4] = 7;
	//nums[7][5] = 8;
	//nums[7][6] = 5;
	//nums[7][7] = 3;
	//nums[7][8] = 1;
	//nums[8][0] = 9;
	//nums[8][1] = 8;
	//nums[8][2] = 7;
	//nums[8][3] = 5;
	//nums[8][4] = 3;
	//nums[8][5] = 1;
	//nums[8][6] = 6;
	//nums[8][7] = 4;

	//nums[0][1] = 7;
	//nums[0][3] = 8;
	//nums[0][8] = 4;
	//nums[1][2] = 6;
	//nums[1][5] = 3;
	//nums[2][0] = 2;
	//nums[2][8] = 5;
	//nums[3][1] = 4;
	//nums[3][3] = 9;
	//nums[3][6] = 1;
	//nums[3][8] = 6;
	//nums[4][2] = 2;
	//nums[4][3] = 5;
	//nums[4][6] = 3;
	//nums[4][7] = 4;
	//nums[4][8] = 9;
	//nums[5][1] = 3;
	//nums[5][2] = 1;
	//nums[5][4] = 7;
	//nums[5][6] = 8;
	//nums[5][7] = 5;
	//nums[6][0] = 3;
	//nums[6][1] = 2;
	//nums[6][2] = 7;
	//nums[6][5] = 1;
	//nums[6][6] = 6;
	//nums[6][7] = 9;
	//nums[6][8] = 8;
	//nums[7][0] = 6;
	//nums[7][1] = 5;
	//nums[7][2] = 8;
	//nums[7][4] = 2;
	//nums[7][5] = 9;
	//nums[7][6] = 4;
	//nums[7][7] = 1;
	//nums[7][8] = 7;
	//nums[8][0] = 4;
	//nums[8][1] = 1;
	//nums[8][5] = 6;
	//nums[8][6] = 5;
	//nums[8][8] = 3;

	//nums[0][2] = 2;
	//nums[1][1] = 8;
	//nums[1][5] = 6;
	//nums[1][7] = 7;
	//nums[1][8] = 3;
	//nums[2][0] = 9;
	//nums[2][1] = 5;
	//nums[2][4] = 2;
	//nums[2][6] = 8;
	//nums[3][1] = 3;
	//nums[3][8] = 4;
	//nums[4][2] = 4;
	//nums[4][3] = 1;
	//nums[4][4] = 9;
	//nums[5][4] = 3;
	//nums[5][5] = 2;
	//nums[5][6] = 7;
	//nums[6][6] = 3;
	//nums[7][2] = 7;
	//nums[7][4] = 8;
	//nums[7][7] = 4;
	//nums[7][8] = 5;
	//nums[8][0] = 2;
	//nums[8][1] = 9;
	//nums[8][3] = 5;
	//nums[8][8] = 7;

	//nums[0][3] = 8;
	//nums[0][4] = 5;
	//nums[0][6] = 1;
	//nums[1][2] = 6;
	//nums[3][0] = 6;
	//nums[3][2] = 3;
	//nums[3][5] = 9;
	//nums[4][3] = 1;
	//nums[4][6] = 5;
	//nums[4][8] = 8;
	//nums[5][2] = 7;
	//nums[6][1] = 5;
	//nums[6][3] = 4;
	//nums[6][6] = 2;
	//nums[7][5] = 7;
	//nums[7][7] = 6;
	//nums[8][7] = 3;

	BOOL IsOK = TRUE;
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (nums[i][j] < 0 || nums[i][j]>9){
				IsOK = FALSE;
				break;
			}
		}
		if (!IsOK){
			break;
		}
	}

	if (!IsOK){
		MessageBox(_T("只能输入1-9的数字！"));
	}
	else{
		if (!TryNums()){
			MessageBox(_T("数据错误，无解！"));
		}

		SetNums(nums);
	}
}

// 获取每格的所有可能
vector<vector<vector<int>>> CSudukoCrackDlg::AllPossibilities(){
	vector<vector<vector<int>>> all_posibilities(9, vector<vector<int>>(9, vector<int>()));

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (nums[i][j] != 0){
				continue;
			}

			vector<int> temp;
			// 获取格子所在行中的数
			for (int x = 0; x < 9; x++){
				if (nums[i][x] != 0){
					temp.push_back(nums[i][x]);
				}
			}
			// 获取格子所在列中的数
			for (int x = 0; x < 9; x++){
				if (x == i){
					continue;
				}
				if (nums[x][j] != 0){
					temp.push_back(nums[x][j]);
				}
			}
			// 获取格子所在块中的数
			for (int x = i / 3 * 3; x < i / 3 * 3 + 3; x++) {
				for (int y = j / 3 * 3; y < j / 3 * 3 + 3; y++){
					if (x == i || y == j){
						continue;
					}
					if (nums[x][y] != 0){
						temp.push_back(nums[x][y]);
					}
				}
			}

			// 从九个数中除去已存在的数，剩下的即为该格所有可能的数
			vector<int>::iterator it;
			for (int n = 1; n <= 9; n++){
				if (find(temp.begin(), temp.end(), n) == temp.end()){
					all_posibilities[i][j].push_back(n);
				}
			}

			// 如果该格没有可填入的数，返回空数组
			if (all_posibilities[i][j].size() == 0){
				//CString str;
				//str.Format(_T("%d,%d"), i, j);
				//MessageBox(str);
				return{};
			}
		}
	}
	return all_posibilities;
}

// 以可填入数的数量从少到多填入
int CSudukoCrackDlg::TryNums(){

	vector<vector<vector<int>>> posibilities = AllPossibilities();
	if (posibilities.size() == 0){
		return 0;
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 1){
				//CString str;
				//str.Format(_T("%d,%d,%d"), i, j,posibilities[i][j][0]);
				//str.Append(_T("size1"));
				//MessageBox(str);
				if (!OneNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 2){
				//CString str;
				//str.Format(_T("%d,%d"), i, j);
				//str.Append(_T("size2"));
				//MessageBox(str);
				if (!TwoNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 3){
				if (!ThreeNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 4){
				if (!FourNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 5){
				if (!FiveNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 6){
				if (!SixNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 7){
				if (!SevenNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 8){
				if (!EightNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (posibilities[i][j].size() == 9){
				if (!NineNums(i, j, posibilities[i][j])){
					return 0;
				}
				return 1;
			}
		}
	}
	
	return 1;
}

int CSudukoCrackDlg::OneNums(int i, int j, vector<int> &v){
	nums[i][j] = v[0];
	if (TryNums()){
		return 1;
	}
	else{
		// 如果填入该数后导致其他位置无数可填，该数错误，并将该位置清零
		nums[i][j] = 0;
		return 0;
	}
}

int CSudukoCrackDlg::TwoNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}

int CSudukoCrackDlg::ThreeNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}

int CSudukoCrackDlg::FourNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}

int CSudukoCrackDlg::FiveNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}

int CSudukoCrackDlg::SixNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}

int CSudukoCrackDlg::SevenNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}

int CSudukoCrackDlg::EightNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}

int CSudukoCrackDlg::NineNums(int i, int j, vector<int> &v){
	for (int n = 0; n < v.size(); n++){
		nums[i][j] = v[n];
		if (TryNums()){
			return 1;
		}
	}
	nums[i][j] = 0;
	return 0;
}


void CSudukoCrackDlg::OnBnClickedViocrackButton()
{
	// TODO:  在此添加控件通知处理程序代码

	GetNums();

	//nums[0][1] = 7;
	//nums[0][3] = 8;
	//nums[0][8] = 4;
	//nums[1][2] = 6;
	//nums[1][5] = 3;
	//nums[2][0] = 2;
	//nums[2][8] = 5;
	//nums[3][1] = 4;
	//nums[3][3] = 9;
	//nums[3][6] = 1;
	//nums[3][8] = 6;
	//nums[4][2] = 2;
	//nums[4][3] = 5;
	//nums[4][6] = 3;
	//nums[4][7] = 4;
	//nums[4][8] = 9;
	//nums[5][1] = 3;
	//nums[5][2] = 1;
	//nums[5][4] = 7;
	//nums[5][6] = 8;
	//nums[5][7] = 5;
	//nums[6][0] = 3;
	//nums[6][1] = 2;
	//nums[6][2] = 7;
	//nums[6][5] = 1;
	//nums[6][6] = 6;
	//nums[6][7] = 9;
	//nums[6][8] = 8;
	//nums[7][0] = 6;
	//nums[7][1] = 5;
	//nums[7][2] = 8;
	//nums[7][4] = 2;
	//nums[7][5] = 9;
	//nums[7][6] = 4;
	//nums[7][7] = 1;
	//nums[7][8] = 7;
	//nums[8][0] = 4;
	//nums[8][1] = 1;
	//nums[8][5] = 6;
	//nums[8][6] = 5;
	//nums[8][8] = 3;

	BOOL IsOK = TRUE;
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (nums[i][j] < 0 || nums[i][j]>9){
				IsOK = FALSE;
				break;
			}
		}
		if (!IsOK){
			break;
		}
	}

	if (!IsOK){
		MessageBox(_T("只能输入1-9的数字！"));
	}
	else{
		if (!VioCrack(0)){
			MessageBox(_T("数据错误，无解！"));
		}
	}

	SetNums(nums);
}

BOOL CSudukoCrackDlg::VioCrack(int n){
	if (n > 80){
		return 1;
	}

	int x = n % 9;
	int y = n / 9;

	if (nums[y][x] != 0){
		VioCrack(n + 1);
	}
	else{
		for (int i = 1; i <= 9; i++){
			if (Check(n, i)){
				nums[y][x] = i;
				if (VioCrack(n + 1)){
					return 1;
				}
			}
		}
		nums[y][x] = 0;
		return 0;
	}
}

BOOL CSudukoCrackDlg::Check(int n, int val){
	int x = n % 9;
	int y = n / 9;

	for (int i = 0; i < 9; i++){
		if (val == nums[y][i]){
			return 0;
		}
	}
	for (int i = 0; i < 9; i++){
		if (val == nums[i][x]){
			return 0;
		}
	}
	for (int i = y / 3 * 3; i < y / 3 * 3 + 3; i++){
		for (int j = x / 3 * 3; j < x / 3 * 3 + 3; j++){
			if (val == nums[i][j]){
				return 0;
			}
		}
	}

	return 1;
}
