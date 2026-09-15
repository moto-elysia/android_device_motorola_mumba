#include <BufferAllocator/BufferAllocator.h>

extern "C" void __attribute__((visibility("default")))
_ZN15BufferAllocatorD1Ev(BufferAllocator* self)
{
    self->~BufferAllocator();
}
