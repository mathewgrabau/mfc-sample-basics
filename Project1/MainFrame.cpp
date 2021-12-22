#include "MainFrame.h"

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	// add the paint message
	ON_WM_PAINT()
END_MESSAGE_MAP()

CMainFrame::CMainFrame()
{
	Create(NULL, _T("First example - basic project"), WS_OVERLAPPEDWINDOW, CRect(20, 30, 600, 400));

	mString = "Hi!";
	mPoint = CPoint(40, 50);
}

void CMainFrame::OnPaint()
{
	CPaintDC dc(this);

	// First just say hi.
	dc.TextOut(mPoint.x, mPoint.y, mString);
}