
#if TARGET_CPU_X86 || TARGET_CPU_X86_64
# undef  USE_JSC
# define USE_JSC 0
#elif !defined(USE_JSC)
# define USE_JSC 1
#endif
