#ifndef MEMORYINFO_HPP
#define MEMORYINFO_HPP

#include <windows.h>
#include <iomanip>


namespace systemInfoL{
//Class for get RAM Information 
class MemoryInfo
{
protected:
    //Get memory load by Windows in PerCent
    double GetMemoryLoadWindows();


};

}


#endif
