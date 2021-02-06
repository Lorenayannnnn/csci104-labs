#include "arraylist.h"
#include "gtest/gtest.h"

#include <iostream>
using namespace std;

class ArrayListTest : public testing::Test {
protected:
	// You can remove any or all of the following functions if its body is empty.

	ArrayListTest() {
		// You can do set-up work for each test here.
	}

	virtual ~ArrayListTest() {
		// You can do clean-up work that doesn't throw exceptions here.		
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:
	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
		list.add(1);
		list.add(2);
		list.add(3);
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case.
	ArrayList list;
};

TEST_F(ArrayListTest, GetNominal) {
	// Exepct 0th element to be 1, 1st elemnt to be 2, etc.
	for (int i = 0 ; i < 3; i++) {
		EXPECT_EQ(i + 1, list.get(i));
	}
}

TEST_F(ArrayListTest, AddNominal) {
	for(int i = 4; i < 8; i++){
		list.add(i);
	}
	// Should contain 1 ~ 7, and the size should be 7
	EXPECT_EQ(7, list.size());
	for(int i = 0; i < list.size(); i++){
		EXPECT_EQ(i + 1, list.get(i));
	}
	//Resize? The first element is changed to 0
}

TEST_F(ArrayListTest, RemoveNominal) {
	//1234567 -> 123567
	list.remove(3);
	EXPECT_EQ(6, list.size());
	EXPECT_EQ(5, list.get(3));
	// -> 123
}

TEST_F(ArrayListTest, SetOffNominal) {
	list.set(-1, 10);
	for(int i = 0; i < list.size(); i++){
		EXPECT_EQ(i + 1, list.get(i));
	}
}
