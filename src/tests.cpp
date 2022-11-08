#include <gtest/gtest.h>
#include <string>
#include "car.cpp"
#include "database.cpp"

struct DatabaseTest : ::testing::Test
{
    Car lancer{"Mitsubishi", "Lancer", "VIII", "Sedan", 2009, "Grey", 1.8, 143, "Petrol + LPG", 140000, 26000};
    Car lanos{"Daewoo", "Lanos", "", "Sedan", 2001, "Silver", 1.5, 101, "Petrol + LPG", 280000, 2000};
    Database db;
};

TEST_F(DatabaseTest, CanAddCarToDb)
{
    db.add(lanos);
    EXPECT_EQ(1,db.getCarCount());
}

TEST_F(DatabaseTest, CanRemoveCarFromDb)
{
    db.add(lanos);
    db.removeCar(0);

    EXPECT_EQ(0,db.getCarCount());
}

TEST_F(DatabaseTest, DisplayEmptyDatabase)
{
    std::string expected = "Database is empty!\n";
    std::string content = db.getContent();

    EXPECT_EQ(expected, content);
}

TEST_F(DatabaseTest, DisplayNonEmptyDatabase)
{
    std::string expected = "\nBrand: Mitsubishi\n"
                           "Model: Lancer\n"
                           "Generation: VIII\n"
                           "Type: Sedan\n"
                           "Production Year: 2009\n"
                           "Color: Grey\n"
                           "Engine Capacity: 1.8 L\n"
                           "Engine Power: 143\n"
                           "Fuel Type: Petrol + LPG\n"
                           "Mileage: 140,000 km\n"
                           "Price: 26,000 PLN";
    std::string content;

    db.add(lancer);
    content = db.getContent();

    EXPECT_EQ(expected, content);
}

TEST_F(DatabaseTest, DisplayNonEmptyDatabaseWithAtLeastTwoCars)
{
    std::string expected = "\nBrand: Mitsubishi\n"
                       "Model: Lancer\n"
                       "Generation: VIII\n"
                       "Type: Sedan\n"
                       "Production Year: 2009\n"
                       "Color: Grey\n"
                       "Engine Capacity: 1.8 L\n"
                       "Engine Power: 143\n"
                       "Fuel Type: Petrol + LPG\n"
                       "Mileage: 140,000 km\n"
                       "Price: 26,000 PLN"
                       "\nBrand: Daewoo\n"
                        "Model: Lanos\n"
                        "Type: Sedan\n"
                        "Production Year: 2001\n"
                        "Color: Silver\n"
                        "Engine Capacity: 1.5 L\n"
                        "Engine Power: 101\n"
                        "Fuel Type: Petrol + LPG\n"
                        "Mileage: 280,000 km\n"
                        "Price: 2,000 PLN";
    std::string content;

    db.add(lancer);
    db.add(lanos);
    content = db.getContent();

    EXPECT_EQ(expected, content);
}


