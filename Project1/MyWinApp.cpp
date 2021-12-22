#include "MyWinApp.h"
#include "MainFrame.h"

BOOL CMyWinApp::InitInstance()
{
	CMainFrame* pFrame = new CMainFrame();

	// Assign instance as the app frame (window)
	m_pMainWnd = pFrame;

	// Make it visible.
	pFrame->ShowWindow(SW_SHOW);

	// Draw it.
	pFrame->UpdateWindow();

	return TRUE;
}

