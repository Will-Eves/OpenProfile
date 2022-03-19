# OpenProfile
A great open source c++ profiler


# How to Use
 - Include OpenProfile.h in your cpp file
 - Make sure to compile with c++17
 - Your good to go


# Functions
## OpenProfile::StartEvent(std::string name)
Use the OpenProfile::StartEvent(std::string name) function to mark the starting point of an event called 'name'.

## OpenProfile::EndEvent(std::string name)
Use the OpenProfile::EndEvent(std::string name) function to end the event called 'name' and get the time in seconds since the start of the event.

## OpenProfile::StampEvent(std::string name)
Use the OpenProfile::StampEvent(std::string name) function to get the time since the start of the event called 'name' and then reset the event's timer.

## OpenProfile::SnapEvent(std::string name)
Use the OpenProfile::SnapEvent(std::string name) function to get the time since the start of the event called 'name'.
