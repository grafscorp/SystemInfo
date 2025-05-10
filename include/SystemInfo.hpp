#ifndef SYSTEMINFO_HPP
#define  SYSTEMINFO_HPP

#include <CpuInfoL.hpp>
#include <MemoryInfo.hpp>

namespace systemInfoL{

//Object for get system information
class SystemInfo : public CpuInfo, public MemoryInfo 
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