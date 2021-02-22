#ifndef __ENUM_SERIAL__
#define __ENUM_SERIAL__

#include <iostream>
#include <regex>
#include <string>
#include <vector>

#ifdef _WIN_
#include "dirent.h"
#include <atlbase.h>
#include <tchar.h>
#include <windows.h>

#else
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#endif

class EnumSerial {
  public:
    EnumSerial();
    std::vector<std::string> enumSerialPort();

  private:
#ifdef _WIN_
    TCHAR key_valuename[1000];
    unsigned long len_valuename = 1000;
    wchar_t key_valuedata[1000];
    unsigned long len_valuedata = 1000;
    unsigned long key_type;
    HKEY hkey = NULL;
#endif
};

#endif
