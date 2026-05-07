/*! \file Actuator.h
    \brief Declaration of the class Actuator
    \author Gruppo 3 : Racco Davide,Forciniti Nicolò,Bonelli Gianni,Cirjan Giorgio
*/

#ifndef ACTUATOR_H
#define ACTUATOR_H

#include"Room.h"
#include"Worker.h"

//#include<ctime> 

/// @class Actuator
/// @brief to manage an Actuator 
class Actuator 
{
protected:
    
public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
        Actuator();
        /// @brief Main Constructor that get an ID and the state of.
        /// @param deviceID unique, should be different for each actuator.
        /// @param status the status in which we want to create the sensor.
        /// @param actuatorType the @c ActuatorType  which define the actuator.
        Actuator(int deviceID, bool status, ActuatorType actuatorType);

        ~Actuator();

    /// @}

    /// @name OPERATORS
    /// @{


    /// @}

    /// @name BASIC HANDLING
    /// @{
    ///@brief to get the authorization to enter certain Room
    ///@param badgeID unique badgeID 
        bool isAuthorized(int badgeID, WorkerType workerType, ActuatorType actuatorType); //from a csv/json file: {[name: Pippo ][bagdeID: 01234][workerType: Ricercatore]} 
    /// @}



    /// @name GETTERS
    /// @{
        ///@brief get the pointer to the actuator.
        ///@return the pointer to the actuator object.
        Actuator* GetActuator(); // TODO: Manage the pointer of the individual actuator object

        ///@brief To get the current actuator state.
        ///@return the current actuator state .
        ActuatorType GetActuatorType();

        ///@brief To get the current ActuatorType.
        ///@return the ActuatorType.
        bool GetState();
    /// @}

    /// @name SETTERS
    /// @{
        /// @brief To set actuatorID.
        ///@param newDeviceID new unique Identifier.
        void SetDeviceID(int newDeviceID);

    ///}@

    /// @name DEBUG and SERIALIZATION
    /// @{
        ///@brief Dump all the actuators data stored. 
        void Dump();

    /// @}
    
    
    

    private: 
        ///@param deviceID unique Identifier.
        int deviceID;

        ///@param state 1 = is active, 0 = not active.
        bool status;

        /// @param actuatorType the ActuatorType that define the actuator.
        ActuatorType actuatorType;
};

enum class ActuatorType{
    BadgeReader,
    WaterHoses,
    Clima,
    FireHazard
};

#endif