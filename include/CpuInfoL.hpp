#ifndef CPUINFOL_HPP
#define CPUINFOL_HPP



#include <windows.h>
#include <iomanip>

namespace systemInfoL
{
    //Get CPU info from other OS
    class CpuInfo
    {
        protected:
        //Windows

        //Calculate CPU Load data from WinApi to PerCent
        double CalculateCPULoadWindows(unsigned long long idleTicks, unsigned long long totalTicks);
        //Get Cpu Load Windows per cent
        double GetCPUInfoWindows();


    };

} // namespace systemInfoL



#endif