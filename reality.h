#pragma once
#ifndef REALITY_H
#define REALITY_H

#include <vector>
#include <tuple>
#include <set>

template<typename T, typename K>
class reality
{
public:
	/// <summary>
	/// �����ж�
	/// </summary>
	/// <param name="other">�����һ���Զ���</param>
	/// <returns>�Է��Ƿ�Ϊ���������</returns>
	bool operator<(const reality<T,K>& other)
	{
		const std::set<T>& interactors_set_other = other.GetInteractorsSet();
		// ��������set_interactors��interactors_set_other���Ӽ�����ô����true�����򷵻�false��
	}
	/// <summary>
	/// ����Ԫ���ϵķ��ʽӿ�
	/// </summary>
	/// <returns>����Ԫ����</returns>
	std::set<T> GetInteratorsSet()
	{
		return set_interactors;
	}
protected:
	/// <summary>
	/// ��������
	/// </summary>
	/// <param name="t">��������T���ͽ���Ԫ</param>
	/// <returns>�������K��������</returns>
	virtual K sigma(const T& t) = 0;
	/// <summary>
	/// ��ѡ����
	/// </summary>
	/// <returns>���������״̬������ѡȡ��������</returns>
	virtual std::tuple<T, T> g() = 0;
	/// <summary>
	/// ״̬ת�ƺ���
	/// </summary>
	/// <param name="picked_two">����ѡ����������Ԫ�����µ���ǰ״̬</param>
	virtual void f(std::tuple<T, T> picked_two) = 0;
protected:
	std::vector<T> vec_current_status;
private:
	std::set<T> set_interactors;
};

#endif // !REALITY_H
