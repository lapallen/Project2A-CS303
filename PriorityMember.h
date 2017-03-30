#ifndef QueueMember_H
#define QueueMember_H

#include <iostream>

class QueueMember {

private:
	const long employeeIndex;
	long priority;

public:
	//constructors
	QueueMember(const long emplyIndex) {
		employeeIndex = emplyIndex;
		priority = 0;
	}
	QueueMember(const long emplyIndex, long prty) {
		employeeIndex = emplyIndex;
		priority = prty;
	}
	//comparison operators
	bool operator < (const QueueMember& other) {
		return this->priority < other.priority;
	}
	bool operator > (const QueueMember& other) {
		return this->priority > other.priority;
	}
	bool operator <= (const QueueMember& other) {
		return this->priority <= other.priority;
	}
	bool operator >= (const QueueMember& other) {
		return this->priority >= other.priority;
	}
	bool operator == (const QueueMember& other) {
		return this->priority == other.priority;
	}
	bool operator < (long other) {
		return this->priority < other;
	}
	bool operator > (long other) {
		return this->priority > other;
	}
	bool operator <= (long other) {
		return this->priority <= other;
	}
	bool operator >= (long other) {
		return this->priority >= other;
	}
	bool operator == (long other) {
		return this->priority == other;
	}
	//setters and getters
	int getEmpIndex() {
		return this->employeeIndex;
	}
	int getPriority() {
		return this->priority;
	}
	void setPriority(long prior) {
		this->priority = prior;
	}
	void setPriority(const vector<employee>* empvec) {
		empvec[emplIndex].updatePriority();
		this->priority = empvec[employeeIndex].getPriority();
	}
};

#endif
