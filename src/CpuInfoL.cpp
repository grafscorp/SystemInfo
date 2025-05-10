#include "CpuInfoL.hpp"


double systemInfoL::CpuInfo::CalculateCPULoadWindows(unsigned long long idleTicks, unsigned long long totalTicks)
{
    static unsigned long long previousIdleTicks = 0;
    static unsigned long long previousTotalTicks = 0;

    unsigned long long idleTicksSinceLastTime = idleTicks - previousIdleTicks;
    unsigned long long totalTicksSinceLastTime = totalTicks - previousTotalTicks;

    previousIdleTicks = idleTicks;
    previousTotalTicks = totalTicks;

    return (totalTicksSinceLastTime > 0) ? (100.0 - (100.0 * idleTicksSinceLastTime) / totalTicksSinceLastTime) : 0;
}


double systemInfoL::CpuInfo::GetCPUInfoWindows()
{
    FILETIME idleTime, kernelTime, userTime;
    return GetSystemTimes(&idleTime, &kernelTime, &userTime) ? 
        this->CalculateCPULoadWindows(
            (ULONGLONG)idleTime.dwHighDateTime << 32 | idleTime.dwLowDateTime,
            ((ULONGLONG)kernelTime.dwHighDateTime << 32 | kernelTime.dwLowDateTime) + 
            ((ULONGLONG)userTime.dwHighDateTime << 32 | userTime.dwLowDateTime)
        ) : -1.0;
}
