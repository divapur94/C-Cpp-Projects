/*
 * IGpio.hpp
 *
 *  Created on: Jul 4, 2022
 *      Author: amir
 */

#ifndef IGPIO_HPP_
#define IGPIO_HPP_

class IGpio {
public:
	virtual bool Read () =0;
	virtual void Write (bool) =0;
	void toggle();
};

#endif /* IGPIO_HPP_ */
