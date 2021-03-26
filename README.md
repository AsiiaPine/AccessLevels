# AccessLevels
A system for regulating the operation of doors at the university based on access levels
## How to SetUp:
_______
Download all files

Open the project in your lovely C++ compiler

~~Create your users and rooms in main.cpp~~

Compile 

Run main
_______________________________________________
How to work:

Imagine that you are admin of the whole university, you can do whatever you want here,except delete non-guests of the university like staff or students

In my main.cpp described several scenarios of the system work to familiarization.

## Structure

### main.cpp:
____________________

There is declaration of new elements of the university- users and rooms.
_________________________
### Users:
__________________
The class user is superclass of all participants of the university.
Each User has first name, second name,
his/her access level and a List of available rooms with same or lower access level.

All users have NO_LEVEL ('0' or the least) by default, because just users are non-participants.

**All Users can**
try to open some a room by its number
______
#### 1: Students
__________________________
Have:
GREEN ('2') _access level_

Information about the _GPI_, _Amount of Scholarship_ and type of the _grant_ (different types of it is declared in GrantTypes.h)
_______
#### 2: Professors
_______________
Have:
YELLOW ('3') _access level_

The lab, where they are working, their own cabinet.

**Professors can** change the Access Level of any lecture room to get everybody enter their lecture
_______________________
#### 3: Lab Employee
___________________________
Have:

YELLOW ('4') _access level_, The lab, where they are working. 

As they are employee, director need to know when they was hired and if something wrong, he may ask they to come to his cabinet.
If director is waiting for an lab employee, the employee's access level change to RED.
__________
#### 4: Director
______________________
Have:

RED('5') _access level_, his own cabinet, the coffee he wants to get and sure the question "Is the director's cabinet better than Succi's one?"
_________
#### 5: Admin
_____________________________
Have:

RED('5') _access level_ and boolean values for _IsAskingToRestartComp_, _LovesSneakers_, _AuraOfSaintAdmin_

He can change any user's or room's access level

Accept entering any room for any user.

But after a call ResetTheListOfAR() of user, all admin special settings for the user would be cleaned.
________
#### 6: Guest
_______
Have:

BLUE('1') _accessLevel_

So, guests can not to enter any room without help except lecture and conference rooms at the first floor.

______________________
### Rooms
_________
The university has  6 types of rooms, each has its own number, number of sits, the floor, and _access level_.

Also, they have hidden boolean parameter IsEmergency. If any room will have IsEmergency=true, all rooms would be accepted for everybody.


