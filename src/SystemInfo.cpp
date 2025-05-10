#include <SystemInfo.hpp>

namespace systemInfoL{
    template<typename CPercentInfo> 
    CPercentInfo SystemInfo::GetCpuPercent()
    {
        #ifdef _WIN32
            return GetCPUInfoWindows();
        #endif

        return 0.0;
    }

    
    template<typename MPercentInfo> 
    MPercentInfo SystemInfo::GetMemoryPercent()
    {
        return 0.0;
    }


}
