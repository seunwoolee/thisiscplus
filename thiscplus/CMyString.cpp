#include "CMyString.h"
#include "stdafx.h"


CMyString::CMyString()
{
	m_pszData = nullptr;
	m_nLength = 0;
}

CMyString::~CMyString()
{

}

int CMyString::setString(const char* pszParam)
{
	cout << "Dd" << endl;
	m_nLength = strlen(pszParam);
	m_pszData = new char[m_nLength + 1];
	strcpy_s(m_pszData, m_nLength + 1 ,pszParam );
	return 0;
}

const char* CMyString::getString()
{
	return m_pszData;
}

void CMyString::release()
{

}