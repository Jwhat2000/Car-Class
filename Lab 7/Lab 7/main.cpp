// Created by Jeffrey Janvier on 4/10/21.
// Copyright © 2021 Jeffrey Janvier. All rights reserved.
// This program demonstrates a class that stores information and controls the acceleration
// and brake of a car.

#include <iostream>
#include <string>
using namespace std;

// Car class declaration
class Car
{
private:
    int yearModel;  // Holds thr car's year model
    string make;    // Holds the make of the car
    int speed;      // Holds car's current speed
    
public:
    Car(int, string);
    void Accelerate();
    void Brake();
    void setSpeed(int);
    int getSpeed();
    void setMake(string);
    string getMake();
    void setYearModel(int);
    int getYearModel();
};

//*********************************************************
// Getter assigns value to the yearModel make and speed   *
// members.                                               *
//*********************************************************

Car::Car(int carYear, string carMak)
{
    yearModel = carYear;
    make = carMak;
    speed = 0;
}


//********************************************************
// Accelerate adds 5 and return the value to the speed   *
// member.                                               *
//********************************************************

void Car::Accelerate()
{
    speed += 5;
}

//********************************************************
// Brake subtracts 5 and return the value to the speed   *
// member                                                *
//********************************************************

void Car::Brake()
{
    speed -= 5;
}

//********************************************************
// setSpeed assigns a value to the speed member.         *
//********************************************************

void Car::setSpeed(int s)
{
    speed = s;
}

//********************************************************
// getSpeed returns the value to the speed member.       *
//********************************************************

int Car::getSpeed()
{
    return speed;
}

//********************************************************
// setMake assigns a value to the make member.           *
//********************************************************

void Car::setMake(string carMak)
{
    make = carMak;
}

//********************************************************
// getMake returns the value to the make member.         *
//********************************************************

string Car::getMake()
{
    return make;
}

//********************************************************
// setYearModel assigns a value to the yearModel member. *
//********************************************************

void Car::setYearModel(int carYear)
{
    yearModel = carYear;
}

//********************************************************
// setSpeed assigns value to the speed member.           *
//********************************************************

int Car::getYearModel()
{
    return yearModel;
}

//********************************************************
// Function Main                                         *
//********************************************************

int main()
{
    // Create a Car object
    Car sweetConvertible(1965, "Firebird");
    
    // Calculate and Display the Accelerate Speed
    cout << "Here is the Accelerated Speed of a " << sweetConvertible.getYearModel()
         << " " << sweetConvertible.getMake() << ":" << endl;
    
    for(int index = 0; index < 5; index++)
    {
        sweetConvertible.Accelerate();
        cout << sweetConvertible.getSpeed() << endl;
    }
    
    // Calculate and Display the Decelerate Speed
    cout << endl;
    cout << "And here is the Decelerated Speed: \n";
    
    for(int index = 0; index < 5; index++)
    {
        sweetConvertible.Brake();
        cout << sweetConvertible.getSpeed() << endl;
    }
    return 0;
}
