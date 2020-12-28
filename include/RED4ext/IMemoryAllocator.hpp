#pragma once

#include <cstdint>

namespace RED4ext
{
struct IMemoryAllocator
{
    virtual void* Alloc(void** aOut, uint32_t aSize) = 0;
    virtual void* Alloc(void** aOut, uint32_t aSize, uint32_t aAlignment) = 0;
    virtual void sub_10() = 0;
    virtual void sub_18() = 0;
    virtual void Free(void* aMemory) = 0;
    virtual void sub_28(void* aMemory) = 0;
    virtual uint32_t GetId() = 0;
};
} // namespace RED4ext
