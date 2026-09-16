#include <afxwin.h>
//CWinApp app;  // 반드시 주석 처리할 것!!!!!!

class MyApp : public CWinApp {              // sub class : super class     1번 
public:
	virtual BOOL InitInstance();           // java는 virtual 없어도 됨 (오버라이딩)    2번 
};

BOOL MyApp::InitInstance() {
	AfxMessageBox(L"파생 클래스의 InitInstance() 재정의");       //MessageBox 그냥 메시지 박스 

	return TRUE;
}

MyApp app;