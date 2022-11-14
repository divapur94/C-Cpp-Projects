/*
 * KinetisGpio.hpp
 *
 *  Created on: May 18, 2022
 *      Author: amir
 */

#ifndef KINETISGPIO_HPP_
#define KINETISGPIO_HPP_

#include "IGpio.hpp"

class KinetisGpio: public IGpio {
	virtual bool Read() override;
	virtual void Write(bool value) override;
};

#endif /* KINETISGPIO_HPP_ */
