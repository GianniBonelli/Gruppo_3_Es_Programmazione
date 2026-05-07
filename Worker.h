/*! \file Worker.h
    \brief Declaration of the class Worker
    \author Gruppo 3 : Racco Davide,Forciniti Nicolò,Bonelli Gianni,Cirjan Giorgio
*/

#ifndef WORKER.H
#define WORKER.H

#include"Room.h"

//#include<ctime> 

/// @class Worker
/// @brief to manage an Worker 
class Worker 
{
protected:
    
public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
        Worker();
        /// @brief Main Constructor that get an ID and the state of
        /// @param deviceID unique, should be different for each actuator
        /// @param status  
        Worker(int badgeID, bool status, WorkerType workertype);

        ~Worker();

    /// @}

    /// @name OPERATORS
    /// @{


    /// @}

    /// @name BASIC HANDLING
    /// @{
    /// @}

    /// @name GETTERS
    /// @{
        
    /// @}

    /// @name SETTERS
    /// @{
        
        /// @brief To set badgeID
        void SetBadgeID();


    ///}@

    /// @name DEBUG and SERIALIZATION
    /// @{
        ///@brief Dump all the workers data stored 
        void Dump();

    /// @}
    
    
    

    private: 
        ///@param deviceID unique Identifier.
        int badgeID;

        ///@param state 1 = is active, 0 = not active.
        bool status;

        /// @param actuatorType the ActuatorType that define the actuator.
        ActuatorType actuatorType;


    
};

enum class WorkerType{
    Uffici,
    Ricercatori
};

#endif