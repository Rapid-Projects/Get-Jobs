#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <memory>

const std::uintptr_t rbx_Base = reinterpret_cast<std::uintptr_t>(GetModuleHandle(NULL)); // Based initially at 0x0.
using vfunctable_T = const void*;

struct job_T
{
  vfunctable_T vfunctable;
  
  const std::uint8_t p_0[12];
	const std::string name;
}

using sub_E29450_ = void(__thiscall*)(char* a1, std::vector<std::shared_ptr<job_T>>& a2);
const auto sub_E29450 = reinterpret_cast<sub_E29450_>(rbx_Base + 0xE29450);

using sub_E00F50_ = int(__cdecl*)();
const auto sub_E00F50 = reinterpret_cast<sub_E00F50_>(rbx_Base + 0xE00F50);
