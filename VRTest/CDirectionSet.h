
///////////////
//光の設定

#pragma once

#include		"PmGameSummary.h"

//光設定
class CDirectionSetSummary : public PmGameSummary
{
private:
	CDirectionalLight m_Light;
public:
	CDirectionSetSummary(){};
	~CDirectionSetSummary(){};

	void Create();
};