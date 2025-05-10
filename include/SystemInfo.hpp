#ifndef SYSTEMINFO_HPP
#define  SYSTEMINFO_HPP

#ifdef _WIN32
#include <windows.h>
#include <iomanip>
#endif
#include <CpuInfoL.hpp>

namespace systemInfoL{

//Object for get system information
class SystemInfo : public CpuInfo
{
public:
    template<typename CPercentInfo> 
    //Return CPU Load in Percent for any OS
    CPercentInfo GetCpuPercent();

    template<typename MPercentInfo> 
    //Return RAM Load in Percent for any OS
    MPercentInfo GetMemoryPercent();

protected:

};




}

#endif