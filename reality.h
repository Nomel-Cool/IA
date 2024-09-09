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
	/// 扩张判定
	/// </summary>
	/// <param name="other">另外的一个自动机</param>
	/// <returns>对方是否为自身的扩张</returns>
	bool operator<(const reality<T,K>& other)
	{
		const std::set<T>& interactors_set_other = other.GetInteractorsSet();
		// 如果自身的set_interactors是interactors_set_other的子集，那么返回true，否则返回false。
	}
	/// <summary>
	/// 交互元集合的访问接口
	/// </summary>
	/// <returns>交互元集合</returns>
	std::set<T> GetInteratorsSet()
	{
		return set_interactors;
	}
protected:
	/// <summary>
	/// 量化函数
	/// </summary>
	/// <param name="t">待量化的T类型交互元</param>
	/// <returns>量化后的K类型数据</returns>
	virtual K sigma(const T& t) = 0;
	/// <summary>
	/// 挑选函数
	/// </summary>
	/// <returns>从量化后的状态向量中选取两个返回</returns>
	virtual std::tuple<T, T> g() = 0;
	/// <summary>
	/// 状态转移函数
	/// </summary>
	/// <param name="picked_two">被挑选的两个交互元，更新到当前状态</param>
	virtual void f(std::tuple<T, T> picked_two) = 0;
protected:
	std::vector<T> vec_current_status;
private:
	std::set<T> set_interactors;
};

#endif // !REALITY_H
