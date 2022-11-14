/*
 * ITimer.hpp
 *
 *  Created on: Aug 2, 2022
 *      Author: amir
 */

#ifndef ITIMER_HPP_
#define ITIMER_HPP_

#include <iostream>
#include <functional>

class ITimer {
public:
	virtual void startTimer(void)=0;
	virtual void stopTimer(void)=0;
	virtual void setPeriod(int)=0;
	virtual void registerCallback(const std::function<void(void)>&)=0;
};

#endif /* ITIMER_HPP_ */
