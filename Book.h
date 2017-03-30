#ifndef BOOK_H
#define BOOK_H

#include <stdio.h>
#include <string>
#include "pQueue.h"
#include <list>
#include "Date.h"
#include "Employee.h"

using namespace std;

class Book {
private:
	string name;
	Date startDate;
	Date endDate;
	bool archived;
	pQueue waiting;
	Date lastHeld;
public:
	Book() {}
	Book(string bookName) {
		name = bookName;
	}

	Book(string bookName, Date start) {
		name = bookName;
		startDate = start;
	}

	Book(const Book& other) {
		name = other.name;
		startDate = other.startDate;
		endDate = other.endDate;
		archived = other.archived;
		waiting = other.waiting;
	}

	string getname() {
		return name;
	}

	Date getstartDate() {
		return startDate;
	}

	Date getendDate() {
		return endDate;
	}

	bool getarchived() {
		return archived;
	}

	Date getHeld() {
		return lastHeld;
	}

	void setname(string newName) {
		name = newName;
	}

	void setstartDate(Date newDate) {
		startDate = lastHeld = newDate;
	}

	void setendDate(Date newDate) {
		endDate = newDate;
	}

	void setarchived(bool newBool) {
		archived = newBool;
	}
	void setHeld(Date date) {
		lastHeld = date;
	}

	void populate_queue(list<Employee*> empList) {
		list<Employee*>::const_iterator itr;
		for (itr = empList.begin(); itr != empList.end(); itr++) {
			waiting.addEmployee(*itr);
		}

	}

	Employee* pop_max() {
		return waiting.pop_max();
	}

	Employee* top() {
		return waiting.top();
	}

	bool isEmpty() {
		return waiting.empty();
	}
};

#endif 
