#pragma once

#include <afxwin.h>

class CMainFrame : public CFrameWnd
{
private:
	CString mString;
	CPoint mPoint;

public:
	CMainFrame();	// Constructor

	// Message handling
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP();
};