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
		// ʹ��SHA256����seed��Ȼ��õ�32���ַ���ֵ��identity����
	}
protected:
	std::string identity;
private:

};

#endif