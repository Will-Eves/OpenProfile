# OpenProfile
A great open source c++ profiler

# How to Use
 - Include OpenProfile.h in your cpp file
 - Make sure to compile with c++17
 - Your good to go

# Functions
## StartEvent(std::string name)
Use the StartEvent(std::string name) function to mark the starting point of an event called 'name'.

## EndEvent(std::string name)
Use the EndEvent(std::string name) function to end the event called 'name' and get the time in seconds since the start of the event.

## StampEvent(std::string name)
Use the StampEvent(std::string name) function to get the time since the start of the event called 'name' and then reset the event's timer.

## SnapEvent(std::string name)
Use the SnapEvent(std::string name) function to get the time since the start of the event called 'name'.
