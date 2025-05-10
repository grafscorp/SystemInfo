#include "MemoryInfo.hpp"

double systemInfoL::MemoryInfo::GetMemoryLoadWindows()
{
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    
    if (!GlobalMemoryStatusEx(&memInfo)) {
        std::runtime_error("Cant get memory info");
        return 0.0;
    }
    
    // Вычисляем значения в гигабайтах
    double totalGB = memInfo.ullTotalPhys / (1024.0 * 1024.0 * 1024.0);
    double freeGB = memInfo.ullAvailPhys / (1024.0 * 1024.0 * 1024.0);
    double usedGB = totalGB - freeGB;
    double usedPercent = (usedGB / totalGB) * 100.0;
    

    return usedPercent;

}