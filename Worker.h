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
        Worker(int badgeID, WorkerType workertype);

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
        int GetBadgeID();       
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
};

enum class WorkerType{
    Uffici,
    Ricercatori
};

#endif