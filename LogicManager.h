/*! \file LogicManager.h
    \brief Declaration of the class LogicManager
    \author Gruppo 3 : Racco Davide,Forciniti Nicolò,Bonelli Gianni,Cirjan Giorgio
*/

#ifndef LGCMG_H
#define LGCMG_H

#include"Mode.h"
#include"Room.h"
#include"Sensor.h"
#include<string>

/// @class LogicManager
/// @brief to manage sensor and actuator via a LogicManager
class LogicManager
{
protected:
    
public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
        LogicManager();

        ~LogicManager();

    /// @}

    /// @name OPERATORS
    /// @{


    /// @}

    /// @name BASIC HANDLING
    /// @{
        /** @brief a method to create a Room by the type, use @p currentRoomID as a counter to generate unique Room.
        * Each Room created will have it's pointer added to @p listOfRooms.
        * @param roomType the room type expressed by: 
        * - Mode::Office
        * - Mode::Lab
        * - Mode::Storage
        * - Mode::Neutral
        *   @return a Room object
        */ 
        Room CreateRoom(Mode roomType);
        ///TODO: Manage the pointers list to destroy and modify Rooms.
    /// @}

    /// @name GETTERS
    /// @{
        /// @brief Get a pointer to a Room object.
        /// @param room get a Room object and return a pointer to said object.
        /// @return a pointer to @p room.
        Room* GetRoom(Room room);
    /// @}

    /// @name SETTERS
    /// @{

    ///}@

    /// @name DEBUG and SERIALIZATION
    /// @{
        
        /// @brief Print all Sensor readings for each Room, along with the associated DeviceID, RoomID, and Mode.
        void AllSensorsValues();

        /// @brief Print all Actuator status for each Room, along with the associated DeviceID, RoomID, and Mode.
        void AllActuatorsStatus();

        /// @brief Print all Sensor readings for a specific Room, along with the associated DeviceID, RoomID, and Mode.
        /// @param room a pointer to the Room object. 
        void SensorsValues(Room* room);

        /// @brief Print all actuator status for a specific Room, along with the associated DeviceID, RoomID, and Mode.
        /// @param room a pointer to the Room object.
        void ActuatorsStatus(Room* room);
    /// @}
    private: 
        /// @param currentRoomID last ID given to the Room created.
        int currentRoomID;
        
        /// @param listOfRooms a list that contain all the pointer to the Room created.
        std::vector<Room*> listOfRooms;
};



#endif