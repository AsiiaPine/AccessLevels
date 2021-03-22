//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_ADMIN_H
#define ASSIGNMENT2_ADMIN_H
#include "Users.h"
#include "../AccessLevel.h"

class Admin : public Users {
public:
    void DeleteGuests();
    Admin(const string &firstName, const string &lastName, bool isAskingToRestartComp,
          bool lovesSneakers, int auraOfSaintAdmin);
    bool IsAskingToRestartComp;
    bool LovesSneakers;
    int AuraOfSaintAdmin;
    void AbleRoomForUser(Users &User, Room* Room);
    void ChangeAccessLevelOfUser(Users &User, AccessLevel newAccessLevel);
    void StopEmergency();
};


#endif //ASSIGNMENT2_ADMIN_H
