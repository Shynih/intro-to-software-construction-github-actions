#ifndef __RECTANGLE_TESTS_HPP__
#define __RECTANGLE_TESTS_HPP__

#include "gtest/gtest.h"

#include "../src/rectangle.cpp"

TEST(Constructors, DefaultConstructorWidth) {
	Rectangle* test = new Rectangle();
	EXPECT_EQ(test -> get_width(), 0);
}

TEST(Constructors, DefaultConstructorHeight) {
	Rectangle* test = new Rectangle();
	EXPECT_EQ(test -> get_height(), 0);
}

TEST(Constructors, ConstructorFourHeight) {
	Rectangle* test = new Rectangle(0, 4);
	EXPECT_EQ(test -> get_height(), 4);
}

TEST(Constructors, ConstructorFourWidth) {
	Rectangle* test = new Rectangle(4, 0);
	EXPECT_EQ(test -> get_width(), 4);
}

TEST(Area, DefaultConstructor) {
	Rectangle* test = new Rectangle();
	EXPECT_EQ(test -> area(), 0);
}

TEST(Area, ConstructorTwoFour) {
	Rectangle* test = new Rectangle(2, 4);
	EXPECT_EQ(test -> area(), 8);
}

TEST(Area, ConstructorZeroOne) {
	Rectangle* test = new Rectangle(0, 1);
	EXPECT_EQ(test -> area(), 0);
}

TEST(Area, ConstructorOneTwo) {
	Rectangle* test = new Rectangle(1, 2);
	EXPECT_EQ(test -> area(), 2);
}

TEST(Perimeter, DefaultConstructor) {
	Rectangle* test = new Rectangle();
	EXPECT_EQ(test -> perimeter(), 0);
}

TEST(Perimeter, ConstructorTwoFour) {
	Rectangle* test = new Rectangle(2, 4);
	EXPECT_EQ(test -> perimeter(), 12);
}

TEST(Perimeter, ConstructorZeroOne) {
	Rectangle* test = new Rectangle(0, 1);
	EXPECT_EQ(test-> perimeter(), 2);
}

TEST(Perimeter, ConstructorOneTwo) {
	Rectangle* test = new Rectangle(1, 2);
	EXPECT_EQ(test -> perimeter(), 6);
}








#endif
