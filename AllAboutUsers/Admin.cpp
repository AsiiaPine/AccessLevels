//
// Created by asiia on 07.03.2021.
//

#include "Admin.h"
#include "Guest.h"

Admin::Admin(const string &firstName, const string &lastName, bool isAskingToRestartComp,
             bool lovesSneakers, int auraOfSaintAdmin) : Users(firstName, lastName, RED),
                                                         IsAskingToRestartComp(isAskingToRestartComp),
                                                         LovesSneakers(lovesSneakers),
                                                         AuraOfSaintAdmin(auraOfSaintAdmin) {}

void Admin::ChangeAccessLevelOfUser(Users &User, AccessLevel newAccessLevel) {
    User.accessLevel=newAccessLevel;
}

void Admin::DeleteGuests() {
    Guest::ListOfGuests.clear();
}

/*void Admin::Emergency() {
    for(Room room: Room::ListOfRooms){
        room.AccessLevel= NO_LEVEL;
    }
    for(Users user: Users::ListOfUsers){
        user.ListOfRoomsTheUserCanEnter();
    }
}*/

void Admin::AbleRoomForUser(Users &User, Room* A_Room) {
    for (Room* room: User.ListOfAvailableRooms){
        if (room->number==A_Room->number)
            return;
    }
    User.ListOfAvailableRooms.push_back(A_Room);
}

void Admin::StopEmergency() {
    Room::IsEmergency= false;
}
