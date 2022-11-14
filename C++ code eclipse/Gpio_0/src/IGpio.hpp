/*
 * IGpio.hpp
 *
 *  Created on: May 18, 2022
 *      Author: amir
 */

#ifndef IGPIO_HPP_
#define IGPIO_HPP_

class IGpio {
public:
	virtual bool Read() = 0;
	virtual void Write(bool value) = 0;

	void Toggle();
};

#endif /* IGPIO_HPP_ */
