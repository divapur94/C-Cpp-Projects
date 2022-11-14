/*
 * LPCTimer.cpp
 *
 *  Created on: Aug 2, 2022
 *      Author: amir
 */

#include "LPCTimer.hpp"

using namespace std;

LPCTimer::LPCTimer() {
	// TODO Auto-generated constructor stub

}
void LPCTimer::startTimer(void){
	cout<<"timer started"<<endl;
}

void LPCTimer::stopTimer(){
	cout<<"timer stopped"<<endl;
}

void LPCTimer::setPeriod(int t){
	cout<<"period set"<<endl;
}

void LPCTimer::registerCallback(const std::function<void(void)>& callback){
	cout <<"callback called"<<endl;
	callback();
}
