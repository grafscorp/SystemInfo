#include <SystemInfo.hpp>

namespace systemInfoL{
    template<typename CPercentInfo> 
    CPercentInfo SystemInfo::GetCpuPercent()
    {
        #ifdef _WIN32
            return GetCPULoadWindows();
        #endif

        return 0.0;
    }


    template<typename MPercentInfo> 
    MPercentInfo SystemInfo::GetMemoryPercent()
    {
        #ifdef _WIN32
            return GetMemoryLoadWindows();
        #endif
        return 0.0;
    }


}
