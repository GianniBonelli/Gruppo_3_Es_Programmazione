/*! \file Sensor.h
    \brief Declaration of the class Sensor
    \author Gruppo 3 : Racco Davide,Forciniti Nicolò,Bonelli Gianni,Cirjan Giorgio
*/

#ifndef SENSOR_H
#define SENSOR_H

#include"Room.h"
#include<ctime> 

/// @class Sensor
/// @brief to manage a Sensor 
class Sensor 
{
protected:
    
public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
        Sensor();
        /// @brief Main Constructor that get an ID and an interval in ms
        /// @param deviceID unique, should be different for each sensor
        /// @param timeIntervals in ms beetween each polling 
        Sensor(int deviceID,float timeIntervals);

        ~Sensor();

    /// @}

    /// @name OPERATORS
    /// @{


    /// @}

    /// @name BASIC HANDLING
    /// @{
        ///@brief Routine to get the value read by the sensor, storing it in @p latestReadValue 
        ///@return latest read Value, managed by time and errors.
        float readValue();
    /// @}

    /// @name GETTERS
    /// @{
        Sensor* GetSensor(); // TODO: Manage the pointer of the individual sensor object
        ///@brief To get the current sensor Value
        ///@return the current Value read by the sensor expressed post conditioning
        float GetCurrentVaule();
        /// @brief To get the time beetweem each Polling
        /// @return Return the time expressed in ms  
        float GetTimeIntervals();
    /// @}

    /// @name SETTERS
    /// @{
        ///@brief To set sensor new polling time 
        void SetTimeIntervals(float newTime);
        /// @brief To set sensorID
        void SetID();


    ///}@

    /// @name DEBUG and SERIALIZATION
    /// @{
        ///@brief Dump all the sensor data stored 
        void Dump();

    /// @}
    
    
    

    private: 
        ///@param deviceID unique Identifier.
        int deviceID;

        ///@param timeIntervals time beetween each reading of the sensor.
        float timeIntervals;
        
        ///@param lastReadTime time of the last reading given by the sensor.
        time_t lastReadTime;

        ///@param currentValue the value read from the sensor.
        float currentValue; 

        ///@param latestReadValues last 10 values read by the sensor.
        float latestReadValues[10];
};

#endif