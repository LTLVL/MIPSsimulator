#pragma once
#include "main.h"
#include <cstring>
#include <map>

// 反汇编接口
// Input sys: System系统类 s: 二进制机器码(长度不为32的倍数时会抛出异常)
// Output 反汇编后的指令
std::vector<std::string> disassembler(System& sys, std::string s);