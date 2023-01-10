// CProcess.cpp: 구현 파일
//

#include "pch.h"
#include "gPrj.h"
#include "CProcess.h"


// CProcess

CProcess::CProcess()
{
}

CProcess::~CProcess()
{
}

int CProcess::getStarInfo(CImage *pimage, int nTh, CRect rect)
{
	unsigned char* fm = (unsigned char*)pimage->GetBits();
	int nWidth = pimage->GetWidth();
	int nHeight = pimage->GetHeight();
	int nPitch = pimage->GetPitch();

	int nSum = 0;
	for (int i = rect.top; i < rect.bottom; i++) {
		for (int j = rect.left; j < rect.right; j++) {
			if (fm[j*nPitch + i] > nTh) {
				nSum++;
			}
		}
	}
	return nSum;
}

// CProcess 멤버 함수
