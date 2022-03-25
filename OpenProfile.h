#include <string>
#include <chrono>
#include <map>

namespace OpenProfile{
    std::map<std::string, std::chrono::_V2::system_clock::time_point> events;

    void StartEvent(std::string name){
        events[name] = std::chrono::high_resolution_clock::now();
    }

    float StampEvent(std::string name){
        auto current = std::chrono::high_resolution_clock::now();
        auto delta = std::chrono::duration_cast<std::chrono::nanoseconds>(current-events[name]).count();
        events[name] = current;
        return delta/1000000000.0f;
    }
    
    float SnapEvent(std::string name){
        auto current = std::chrono::high_resolution_clock::now();
        auto delta = std::chrono::duration_cast<std::chrono::nanoseconds>(current-events[name]).count();
        return delta/1000000000.0f;
    }

    float EndEvent(std::string name){
        auto current = std::chrono::high_resolution_clock::now();
        auto delta = std::chrono::duration_cast<std::chrono::nanoseconds>(current-events[name]).count();
        return delta/1000000000.0f;
    }
}
