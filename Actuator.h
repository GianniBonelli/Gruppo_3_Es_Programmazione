/*! \file Actuator.h
    \brief Declaration of the class Actuator
    \author Gruppo 3 : Racco Davide,Forciniti Nicolò,Bonelli Gianni,Cirjan Giorgio
*/

#ifndef ACTUATOR_H
#define ACTUATOR_H

#include"Room.h"

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
        /// @brief Main Constructor that get an ID and the state of
        /// @param deviceID unique, should be different for each actuator
        /// @param status  
        Actuator(int deviceID, bool status);

        ~Actuator();

    /// @}

    /// @name OPERATORS
    /// @{


    /// @}

    /// @name BASIC HANDLING
    /// @{
    /// @}

    /// @name GETTERS
    /// @{
        Actuator* GetActuator(); // TODO: Manage the pointer of the individual actuator object
        ///@brief To get the current actuator state
        ///@return the current actuator state 
        bool GetState();
    /// @}

    /// @name SETTERS
    /// @{
        
        /// @brief To set actuatorID
        void SetID();


    ///}@

    /// @name DEBUG and SERIALIZATION
    /// @{
        ///@brief Dump all the actuators data stored 
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