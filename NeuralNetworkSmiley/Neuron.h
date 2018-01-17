#pragma once
#include "Connection.h"
#include <vector>
#include <ostream>

class neuron
{
	friend std::ostream& operator<<(std::ostream& os, neuron& n);
	friend std::istream& operator>>(std::istream& is, neuron& n);
public:
	neuron();
	~neuron();
	void add_connection(connection& connection);
	connection& connection_at(int index);

	double bias = 0;

	int size() const
	{
		return static_cast<int>(connections_.size());
	}

private:
	std::vector<connection> connections_;
	static connection read_connection(std::istream& is);
};
