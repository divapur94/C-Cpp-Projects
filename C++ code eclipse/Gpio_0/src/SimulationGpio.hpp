/*
 * SimulationGpio.hpp
 *
 *  Created on: May 18, 2022
 *      Author: amir
 */

#ifndef SIMULATIONGPIO_HPP_
#define SIMULATIONGPIO_HPP_

#include "IGpio.hpp"

class SimulationGpio: public IGpio {
	bool _value;
public:
	SimulationGpio();
	virtual bool Read() override;
	virtual void Write(bool value) override;
};

#endif /* SIMULATIONGPIO_HPP_ */
