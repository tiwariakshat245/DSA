#include <unordered_map>
#include <string>
#include <utility>

class UndergroundSystem {
private:
    // id -> {stationName, checkInTime}
    std::unordered_map<int, std::pair<std::string, int>> checkInMap;
    
    // "startStation->endStation" -> {totalTime, totalTrips}
    std::unordered_map<std::string, std::pair<double, int>> journeyMap;

public:
    UndergroundSystem() {
        // Constructor
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInMap[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto& checkInRecord = checkInMap[id];
        std::string startStation = checkInRecord.first;
        int startTime = checkInRecord.second;
        
        std::string route = startStation + "->" + stationName;
        int tripTime = t - startTime;
        
        journeyMap[route].first += tripTime;
        journeyMap[route].second += 1;
        
        // Optional: remove check-in record to free memory
        checkInMap.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        std::string route = startStation + "->" + endStation;
        auto& data = journeyMap[route];
        return data.first / data.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id, stationName, t);
 * obj->checkOut(id, stationName, t);
 * double param_e = getAverageTime(startStation, endStation);
 */