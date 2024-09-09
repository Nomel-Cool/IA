#pragma once
#ifndef VIRTUALITY_H
#define VIRTUALITY_H

#include <vector>
#include <tuple>

template<T>
class virtuality
{
public:
	void Interaction(std::tuple<T, T> picked_two)
	{
		vec_abstract_interactors_list.emplace_back(picked_two);
	}
	double EfficiencyDetect()
	{

	}

protected:

private:
	std::vector<std::tuple<T, T>> vec_abstract_interactors_list;
};

#endif