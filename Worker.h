/*! \file Worker.h
    \brief Declaration of the class Worker
    \author Gruppo 3 : Racco Davide,Forciniti Nicolò,Bonelli Gianni,Cirjan Giorgio
*/

#ifndef WORKER.H
#define WORKER.H

#include"Room.h"
#include<string> 
#include<vector>

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
        Worker(int badgeID, WorkerType workerType);

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
        ///@brief to get the worker type.
        ///@return the worker type.
        WorkerType GetWorkerType();

        /// @brief to get the unique badgeID
        /// @return the @p badgeID
        int GetBadgeID();       
    /// @}

    /// @name SETTERS
    /// @{
        
        /// @brief To set badgeID
        void SetBadgeID();

        /// @brief to set the workerTyper.
        /// @param workerType the new workerType.
        void SetWorketType(WorkerType workerType);


    ///}@

    /// @name DEBUG and SERIALIZATION
    /// @{
        ///@brief Dump all the workers data stored. 
        void Dump();

    /// @}
    
    
    

    private: 
        ///@param badgeID unique code for each worker.
        int badgeID;

        /// @param name of the worker.
        std::string name;

        /// @param workerType which type of worker is.
        WorkerType workerType;
};

enum class WorkerType{
    Uffici,
    Ricercatori
};

#endif