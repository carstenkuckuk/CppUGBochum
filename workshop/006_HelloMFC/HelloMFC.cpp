// Datei HelloMFC.cpp
//
// Diese Datei kommt von http://www.equestionanswers.com/vcpp/basic-steps-mfc-application.php und
// ist nur ganz leicht angepaﬂt worden

#include <afxwin.h>
 
 class CMyWnd : public CFrameWnd
 {
   public:
     CMyWnd()
     {
	       Create(NULL, _T("HelloMFC - My MFC Window"));
	     }
	     afx_msg void CMyWnd::OnClose();
	 
	     DECLARE_MESSAGE_MAP()
	 };
	 BEGIN_MESSAGE_MAP(CMyWnd, CFrameWnd)
	 ON_WM_CLOSE()
	 END_MESSAGE_MAP()
	 
	 afx_msg void CMyWnd::OnClose()
	 {
	   if(MessageBox( _T("Want to exit from this application?"), _T("HelloMFC - Exit"), MB_YESNO) == IDYES)
	   {
	      PostQuitMessage(0);
	   }
	 }
	  
	 class CMyApp : public  CWinApp 
	 {
	 
	   public:
	      virtual BOOL InitInstance()
	     {
	       m_pMainWnd = new CMyWnd();
	       m_pMainWnd->ShowWindow(SW_SHOW);
	       m_pMainWnd->UpdateWindow();
	       return TRUE;
	     }
	  };
	 CMyApp app;