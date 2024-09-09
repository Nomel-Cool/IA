#pragma once
#ifndef INTERACTOR_H
#define INTERACTOR_H

#include <string>

class interactorBase
{
public:
	void operator=(interactorBase other) = delete;
	void operator()(interactorBase other) = delete;
	interactorBase(std::string seed)
	{
		// 使用SHA256加密seed，然后得到32个字符赋值给identity属性
	}
protected:
	std::string identity;
private:

};

#endif