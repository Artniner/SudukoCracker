
// SudukoCrackDlg.h : 头文件
//

#pragma once

#include "vector"

using namespace std;

// CSudukoCrackDlg 对话框
class CSudukoCrackDlg : public CDialogEx
{
// 构造
public:
	CSudukoCrackDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_SUDUKOCRACK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	void SetNums(int nums[9][9]);
	void GetNums();
	vector<vector<vector<int>>> AllPossibilities();
	int TryNums();
	int OneNums(int i, int j, vector<int> &v);
	int TwoNums(int i, int j, vector<int> &v);
	int ThreeNums(int i, int j, vector<int> &v);
	int FourNums(int i, int j, vector<int> &v);
	int FiveNums(int i, int j, vector<int> &v);
	int SixNums(int i, int j, vector<int> &v);
	int SevenNums(int i, int j, vector<int> &v);
	int EightNums(int i, int j, vector<int> &v);
	int NineNums(int i, int j, vector<int> &v);
	BOOL VioCrack(int n);
	BOOL Check(int n, int val);
private:
	int m_editID[9][9];
	int nums[9][9];
	BOOL cracked;
public:
	afx_msg void OnBnClickedClearButton();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedViocrackButton();
};
