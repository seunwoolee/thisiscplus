#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();
	int setString(const char* pszParam);
	const char* getString();
	void release();

private:
	char* m_pszData;
	int m_nLength;
};
