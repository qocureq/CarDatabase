#include <gtest/gtest.h>
#include "car.cpp"
#include "database.cpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
// Expect two strings not to be equal.
EXPECT_STRNE("hello", "world");
// Expect equality.
EXPECT_EQ(7 * 6, 42);
}

TEST(CheckStructure, CanAddCarToDb)
{
    Car car{"Mitsubishi", "Lancer", "Sedan", "VIII", 2009, "Grey", 1.8, 143, "Benzyna + Gaz", 140000, 20000};

    Database db;
    db.add(car);
    EXPECT_EQ(1,db.getCarCount());
}