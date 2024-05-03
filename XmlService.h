#pragma once
#include "Service.h"
using namespace std;
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};
