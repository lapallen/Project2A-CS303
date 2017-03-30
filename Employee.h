#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <string>
#include "Date.h"
using namespace std;

class Employee {

private:
	string name;
	int waitTime;
	int retainTime;
public:
	Employee() {
		name = "unknown";
		waitTime = 0;
		retainTime = 0;
	}

	Employee(string newName) {
		name = newName;
		waitTime = 0;
		retainTime = 0;
	}

	const Employee& operator = (const Employee& rhs) {
		name = rhs.name;
		waitTime = rhs.waitTime;
		retainTime = rhs.retainTime;
		return *this;
	}

	void setName(string newName) {
		name = newName;
	}

	void wait(int wait) {
		waitTime += wait;
	}

	void retain(int retain) {
		retainTime += retain;
	}

	string getName() {
		return name;
	}

	int getWait() {
		return waitTime;
	}

	int getRetain() {
		return retainTime;
	}

	friend bool operator<(const Employee& lhs, const Employee& rhs) {
		return ((lhs.waitTime - lhs.retainTime) < (rhs.waitTime - rhs.retainTime));
	}
	friend bool operator>(const Employee& lhs, const Employee& rhs) {
		return ((lhs.waitTime - lhs.retainTime) > (rhs.waitTime - rhs.retainTime));
	}
};

#endif