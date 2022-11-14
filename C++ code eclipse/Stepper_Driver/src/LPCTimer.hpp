/*
 * LPCTimer.hpp
 *
 *  Created on: Aug 2, 2022
 *      Author: amir
 */

#ifndef LPCTIMER_HPP_
#define LPCTIMER_HPP_

#include "ITimer.hpp"

class LPCTimer: public ITimer {
public:
	LPCTimer();
	void startTimer(void) override;
	void stopTimer(void) override;
	void setPeriod(int) override;
	void registerCallback(const std::function<void(void)>&) override;
};

#endif /* LPCTIMER_HPP_ */
