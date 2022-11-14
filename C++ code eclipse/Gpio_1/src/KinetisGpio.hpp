/*
 * KinetisGpio.hpp
 *
 *  Created on: Jul 4, 2022
 *      Author: amir
 */

#ifndef KINETISGPIO_HPP_
#define KINETISGPIO_HPP_

#include "IGpio.hpp"

class KinetisGpio: public IGpio {
public:
	bool Read () override;
	void Write (bool) override;
};

#endif /* KINETISGPIO_HPP_ */
