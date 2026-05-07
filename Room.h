/*! \file Room.h
    \brief Declaration of the class Room
    \author Gruppo 3 : Racco Davide,Forciniti Nicolò,Bonelli Gianni,Cirjan Giorgio
*/

#ifndef RM_H
#define RM_H


#include"Mode.h"
#include"Sensor.h"
#include"Actuator.h"

#include<vector>

/// @class Room
/// @brief to manage a Room object
class Room
{
protected:
    
public:

    /// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
        Room();
        
        /// @brief Main Constructor to costruct a Room Object sorted by @p roomType.
        /// @param roomType the room type expressed by: 
        /// - Mode::Office
        /// - Mode::Lab
        /// - Mode::Storage
        /// - Mode::Neutral
        /// @param roomID a int used to easily recognize a specific room.
        Room(Mode roomType, int roomID);

        ~Room();

    /// @}

    /// @name OPERATORS
    /// @{
        ///TODO: Operator overload to clone a Room. 
        
    /// @}

    /// @name BASIC HANDLING
    /// @{
        ///@brief Handle the instatiation of the Sensor based on the @p mode of the current Room.
        Sensor GenerateSensor(Mode mode);
    /// @}

    /// @name GETTERS
    /// @{
        ///@brief Get the Pointer to the Room object
        ///@return a pointer to the Room object
        Room* GetRoom();
        
        /// @brief Get a pointer to a Sensor object.
        /// @param sensor get a Sensor object and return a pointer to said object.
        /// @return a pointer to @p sensor.
        Sensor* GetSensor(Sensor sensor);

        /// @brief Get the @p RoomID.
        /// @return an integer that is the @p RoomID.
        int GetRoomID();

    /// @}

    /// @name SETTERS
        ///@brief Set the  @p RoomID.
        ///@param newRoomID the new ID that will ovveride the current one.
        void SetRoom(int newRoomID);

        /// @brief To set a Specific Sensor-> DeviceID and TimeIntervals.
        /// @param Sensor a pointer to the sensor object. 
        /// @param newDeviceID a new int rappresenting the new deviceID.
        /// @param newTimeInterval a new float rappresenting the time in ms.
        void SetParamSensors(Sensor* Sensor, int newDeviceID, float newTimeInterval);

        /// @brief To set a Specific Actuator-> DeviceID.
        /// @param Actuator a pointer to the actuator object.
        /// @param newDeviceID a new int rappresenting the new deviceID.
        //void SetParamActuators(Actuator* Actuator, int newDeviceID);
    ///}@

    /// @name DEBUG and SERIALIZATION
    /// @{
        void Dump();
    /// @}
    private:
        /// @param pointer to the Room object.
        Room* room;

        /// @param roomID the unique ID that identifies a Room, should be unique.
        int roomID;

        /// @param mode the current mode in which the Room is setted.
        Mode mode;

        /// @param sensorList a list that contain all the pointer to the Sensors created.
        std::vector<Sensor*> sensorList;
        std::vector<Actuator*> actuatorsList;
};

#endif