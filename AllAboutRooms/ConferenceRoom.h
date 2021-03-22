//
// Created by asiia on 20.03.2021.
//
#include "Room.h"
#ifndef ASSIGNMENT2_CONFERENCEROOM_H
#define ASSIGNMENT2_CONFERENCEROOM_H


class ConferenceRoom : public Room{
    int NumberOfSits;
    bool HaveConditioner;
    bool HaveProjector;
public: ConferenceRoom(int numberOfSits, bool haveConditioner, bool haveProjector, int floor);
    const :: TypeOfTheRoom type=CONFERENCE_ROOM;
//    void PrintTheRoom() override;
};


#endif //ASSIGNMENT2_CONFERENCEROOM_H
