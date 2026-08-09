#ifndef _c_cpp
#define _c_cpp

#undef _c
#undef _cpp
#undef _c89
#undef _c90
#undef _c95
#undef _c99
#undef _c11
#undef _c17
#undef _c23
#undef _cpp98
#undef _cpp11
#undef _cpp14
#undef _cpp17
#undef _cpp20
#undef _cpp23
#undef _cpp26

#ifdef __cplusplus
#define _cpp
#if __cplusplus >= 202600L
#define _cpp26
#endif
#if __cplusplus >= 202302L
#define _cpp23
#endif
#if __cplusplus >= 202002L
#define _cpp20
#endif
#if __cplusplus >= 201703L
#define _cpp17
#endif
#if __cplusplus >= 201402L
#define _cpp14
#endif
#if __cplusplus >= 201103L
#define _cpp11
#endif
#if __cplusplus >= 199711L
#define _cpp98
#endif
#else
#define _c
#define _c90
#define _c89
#if defined(__STDC_VERSION__)
#if __STDC_VERSION__ >= 202311L
#define _c23
#endif
#if __STDC_VERSION__ >= 201710L
#define _c17
#endif
#if __STDC_VERSION__ >= 201112L
#define _c11
#endif
#if __STDC_VERSION__ >= 199901L
#define _c99
#endif
#if __STDC_VERSION__ >= 199409L
#define _c95
#endif
#endif
#endif

#undef _windows
#undef _windows32
#undef _windows64
#undef _linux
#undef _macos
#undef _ios
#undef _android
#undef _freebsd
#undef _openbsd
#undef _netbsd
#undef _dragonflybsd
#undef _sunos
#undef _solaris
#undef _hpux
#undef _aix
#undef _qnx
#undef _haiku
#undef _emscripten
#undef _unix
#undef _posix
#undef _linuxkernel
#undef _freebsdkernel
#undef _windowsntkernel
#undef _xnu
#undef _mach

#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__)
#define _windows
#if defined(_WIN64) || defined(__WIN64__) || defined(_M_X64) || defined(_M_AMD64)
#define _windows64
#else
#define _windows32
#endif
#if defined(_KERNEL_MODE)
#define _windowsntkernel
#endif

#elif defined(__linux__) || defined(__linux) || defined(linux)
#define _linux
#if defined(__KERNEL__)
#define _linuxkernel
#endif
#if defined(__ANDROID__) || defined(ANDROID)
#define _android
#endif

#elif defined(__APPLE__) && defined(__MACH__)
#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
#define _ios
#else
#define _macos
#endif
#if defined(KERNEL) || defined(__MACH_KERNEL__)
#define _xnu
#define _mach
#endif

#elif defined(__FreeBSD__)
#define _freebsd
#if defined(_KERNEL)
#define _freebsdkernel
#endif

#elif defined(__OpenBSD__)
#define _openbsd

#elif defined(__NetBSD__)
#define _netbsd

#elif defined(__DragonFly__)
#define _dragonflybsd

#elif defined(__sun)
#define _sunos
#if defined(__SVR4) || defined(__svr4__)
#define _solaris
#endif

#elif defined(__hpux) || defined(__hpux__)
#define _hpux

#elif defined(_AIX) || defined(__TOS_AIX__)
#define _aix

#elif defined(__QNX__) || defined(__QNXNTO__)
#define _qnx

#elif defined(__HAIKU__)
#define _haiku

#elif defined(__EMSCRIPTEN__)
#define _emscripten
#endif

#if defined(unix) || defined(__unix) || defined(__unix__)
#define _unix
#endif

#if defined(_POSIX_VERSION)
#define _posix
#endif

#undef _gcc
#undef _clang
#undef _llvm
#undef _msvc
#undef _intelc
#undef _intelclassic
#undef _inteloneapi
#undef _inteldpcpp
#undef _tcc
#undef _borland
#undef _watcom
#undef _openwatcom
#undef _sunpro
#undef _ibmxl
#undef _dice
#undef _portland
#undef _codewarrior
#undef _sdcc
#undef _cosmic
#undef _iar
#undef _keil
#undef _armcc
#undef _armclang
#undef _zoss
#undef _cproc
#undef _chibicc
#undef _lcc
#undef _lccwin32
#undef _pcc
#undef _ack
#undef _aztec
#undef _htsoft
#undef _microtec
#undef _greenhills
#undef _diab
#undef _tasking
#undef _metaware
#undef _windriver
#undef _imagecraft
#undef _fxc
#undef _renesas
#undef _sgi
#undef _comeau
#undef _kai
#undef _tendra
#undef _nwcc
#undef _open64
#undef _pathscale
#undef _digitalmars
#undef _norcroft
#undef _vbcc
#undef _smallerc
#undef _8cc
#undef _9cc
#undef _amdaocc
#undef _nvidia
#undef _nvcc
#undef _nvcpp
#undef _compcert
#undef _edg
#undef _mingw
#undef _mingww64
#undef _clangcl
#undef _clangmingw
#undef _llvmmingw
#undef _zapcc
#undef _icc
#undef _icx
#undef _icpx
#undef _dpcc
#undef _rocmcc

#if defined(__ARMCLANG_VERSION)
#define _armclang
#define _clang
#define _llvm

#elif defined(__clang__)
#define _clang
#define _llvm
#if defined(__MINGW32__) || defined(__MINGW64__)
#define _clangmingw
#endif
#if defined(__CLANG_CL__) || (defined(_MSC_VER) && !defined(__GNUC__))
#define _clangcl
#endif

#elif defined(_MSC_VER)
#define _msvc
#if defined(_M_AMD64) || defined(_M_X64)
#define _windows64
#else
#define _windows32
#endif

#elif defined(__INTEL_COMPILER)
#define _intelclassic
#define _icc
#define _intelc

#elif defined(__INTEL_LLVM_COMPILER)
#define _inteloneapi
#define _inteldpcpp
#define _icx
#define _icpx
#define _dpcc
#define _intelc

#elif defined(__TINYC__)
#define _tcc

#elif defined(__BORLANDC__) || defined(__CODEGEARC__) || defined(__EMBARCADEROC__)
#define _borland

#elif defined(__OPENWATCOM__)
#define _openwatcom
#define _watcom

#elif defined(__WATCOMC__)
#define _watcom

#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
#define _sunpro

#elif defined(__IBMC__) || defined(__IBMCPP__) || defined(__xlC__)
#define _ibmxl

#elif defined(DICE) || defined(_DCC)
#define _dice

#elif defined(__PGI) || defined(__PGIC__) || defined(__PGCC__)
#define _portland

#elif defined(__MWERKS__) || defined(__CWCC__)
#define _codewarrior

#elif defined(SDCC) || defined(__SDCC)
#define _sdcc

#elif defined(__COSMIC__)
#define _cosmic

#elif defined(__IAR_SYSTEMS_ICC__) || defined(__IAR_SYSTEMS_ICC) || defined(__ICCARM__) || defined(__ICCAVR32__) || defined(__ICCRX__) || defined(__ICCRL78__) || defined(__ICCMSP430__)
#define _iar

#elif defined(__KEIL__) || defined(__CA__) || defined(__C51__) || defined(__C166__) || defined(__C251__) || defined(__CARM__)
#define _keil

#elif defined(__ARMCC_VERSION) || defined(__ARMCOMPILER_VERSION) || defined(__CC_ARM)
#define _armcc

#elif defined(__ZOS__) || defined(__TOS_MVS__) || defined(__MVS__)
#define _zoss

#elif defined(__CPROC__)
#define _cproc

#elif defined(__CHIBICC__)
#define _chibicc

#elif defined(__LCCWIN32__) || defined(lccwin32)
#define _lccwin32

#elif defined(__LCC__) || defined(LCC)
#define _lcc

#elif defined(__PCC__) || defined(PCC)
#define _pcc

#elif defined(__ACK__)
#define _ack

#elif defined(__AZTEC_C__)
#define _aztec

#elif defined(__HIGHC__)
#define _htsoft

#elif defined(__MICROTEC__)
#define _microtec

#elif defined(__GHCC__) || defined(__GHS__) || defined(__GREEN_HILLS__)
#define _greenhills

#elif defined(__DIAB__) || defined(__DIABDATA__)
#define _diab

#elif defined(__TASKING__) || defined(__TASKING_C166__) || defined(__TASKING_C196__)
#define _tasking

#elif defined(__METAWARE__)
#define _metaware

#elif defined(__WIND_RIVER__) || defined(__VXWORKS__)
#define _windriver

#elif defined(__IMAGECRAFT__)
#define _imagecraft

#elif defined(__FUJITSU) || defined(SOFTUNE) || defined(__FCC__)
#define _fxc

#elif defined(__RENESAS__) || defined(__RX__) || defined(__RL78__) || defined(__H8__) || defined(__SH__)
#define _renesas

#elif defined(__SGI__) || defined(sgi)
#define _sgi

#elif defined(__COMO__) || defined(__COMO_VERSION__)
#define _comeau

#elif defined(__KAI__) || defined(__KCC)
#define _kai

#elif defined(__TENDRA__)
#define _tendra

#elif defined(__NWCC__)
#define _nwcc

#elif defined(__OPEN64__) || defined(__OPENCC__)
#define _open64

#elif defined(__PATHSCALE__) || defined(__PATHCC__)
#define _pathscale

#elif defined(__DMC__) || defined(__SC__)
#define _digitalmars

#elif defined(__NORCROFT__) || defined(__CC_NORCROFT)
#define _norcroft

#elif defined(__VBCC__)
#define _vbcc

#elif defined(__SMALLER_C__)
#define _smallerc

#elif defined(__8CC__)
#define _8cc

#elif defined(__9CC__)
#define _9cc

#elif defined(__ROCMCC__)
#define _rocmcc
#define _amdaocc

#elif defined(__AMD__) || defined(__AOCC__)
#define _amdaocc

#elif defined(__NVCOMPILER) || defined(__NVC__)
#define _nvidia
#define _nvcpp

#elif defined(__CUDACC__) || defined(__NVCC)
#define _nvidia
#define _nvcc

#elif defined(__COMPCERT__)
#define _compcert

#elif defined(__EDG__) || defined(__EDG_VERSION__)
#define _edg

#elif defined(__ZAPCC__)
#define _zapcc

#elif defined(__GNUC__)
#define _gcc
#if defined(__MINGW32__) || defined(__MINGW64__)
#define _mingw
#if defined(__MINGW64__)
#define _mingww64
#endif
#endif
#endif

#undef _64
#undef _x64
#undef _32
#undef _x32
#undef _16
#undef _x16
#undef _8
#undef _x8
#undef _86
#undef _x86
#undef _x86_64
#undef _86_64
#undef _x86_32
#undef _86_32

#if defined(__x86_64__) || defined(__x86_64) || defined(__amd64__) || defined(__amd64) || defined(_M_X64) || defined(_M_AMD64)
#define _86
#define _x86
#define _x86_64
#define _86_64
#define _64
#define _x64
#endif

#if defined(__i386) || defined(__i386__) || defined(i386) || defined(_M_IX86) || defined(__X86__) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__)
#define _86
#define _x86
#define _x86_32
#define _86_32
#define _32
#define _x32
#endif

#if defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64) || defined(__ARM64__) \
|| defined(__mips64) || defined(__mips64__) || defined(_MIPS_ARCH_MIPS64) \
|| defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__) \
|| (defined(__riscv) && (__riscv_xlen == 64)) \
|| defined(__sparc_v9__) || defined(__sparcv9) \
|| defined(__arch64__) \
|| defined(__ia64__) || defined(__IA64__) || defined(_M_IA64) \
|| defined(__wasm64__) || defined(_WASM64) \
|| defined(__loongarch64) || defined(__loongarch64__) \
|| defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA) \
|| defined(__e2k__) || defined(__E2K__) \
|| defined(__s390x__) \
|| (defined(__hppa__) && defined(__LP64__)) || defined(__hppa64__) \
|| defined(__ARC64__) \
|| defined(__MICROBLAZE64__)
#define _64
#define _x64
#endif

#if defined(__arm__) || defined(__arm) || defined(_M_ARM) || defined(__TARGET_ARCH_ARM) \
|| defined(__mips__) || defined(__mips) || defined(_MIPS_ARCH) || defined(mips) \
|| defined(__powerpc__) || defined(__ppc__) || defined(__PPC__) \
|| (defined(__riscv) && (__riscv_xlen != 64)) \
|| defined(__sparc__) || defined(__sparc) || defined(sparc) \
|| ((defined(__wasm__) || defined(__wasm) || defined(__EMSCRIPTEN__)) \
&& !defined(__wasm64__) && !defined(_WASM64)) \
|| defined(__loongarch__) \
|| defined(__m68k__) || defined(__m68k) || defined(M68000) \
|| defined(__sh__) || defined(__SH__) \
|| defined(__XTENSA__) || defined(__xtensa__) \
|| defined(__vax__) || defined(__VAX) \
|| defined(__s390__) \
|| defined(__nios2__) || defined(NIOS2) || defined(__NIOS2__) \
|| defined(_TMS320C6X) || defined(__TMS320C6X__) \
|| defined(_TMS320C5X) || defined(__TMS320C5X__) \
|| defined(_TMS320C28X) || defined(__TMS320C28X__) \
|| defined(_TMS320C55X) || defined(__TMS320C55X__) \
|| defined(__MICROBLAZE__) || defined(XILINX_MICROBLAZE) \
|| defined(__arc__) || defined(__ARC__) \
|| defined(__AVR32__)
#define _32
#define _x32
#endif

#if defined(__MSP430__) || defined(__MSP430) || defined(__pdp11__) || defined(PDP11)
#define _16
#define _x16
#endif

#if defined(__AVR__) && !defined(__AVR32__)
#define _8
#define _x8
#endif

#undef _amd64
#undef _amd32
#undef _intel64
#undef _intel32
#undef _arm64
#undef _arm32
#undef _mips64
#undef _mips32
#undef _powerpc64
#undef _powerpc32
#undef _riscv64
#undef _riscv32
#undef _sparc64
#undef _sparc32
#undef _itanium64
#undef _wasm64
#undef _wasm32
#undef _loongarch64
#undef _loongarch32
#undef _alpha64
#undef _m68k32
#undef _sh32
#undef _avr8
#undef _avr32
#undef _msp43016
#undef _xtensa32
#undef _e2k64
#undef _vax32
#undef _hppa64
#undef _hppa32
#undef _s39064
#undef _s39032
#undef _arc64
#undef _arc32
#undef _microblaze64
#undef _microblaze32
#undef _nios232
#undef _tms32032
#undef _pdp1116

#if defined(__amd64__) || defined(__amd64) || defined(_M_AMD64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64)
#define _amd64
#define _intel64
#endif

#if defined(__i386) || defined(__i386__) || defined(i386) || defined(_M_IX86) || defined(__X86__) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__)
#define _amd32
#define _intel32
#endif

#if defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64) || defined(__ARM64__)
#define _arm64
#endif

#if defined(__arm__) || defined(__arm) || defined(_M_ARM) || defined(__TARGET_ARCH_ARM)
#define _arm32
#endif

#if defined(__mips64) || defined(__mips64__) || defined(_MIPS_ARCH_MIPS64)
#define _mips64
#endif

#if defined(__mips__) || defined(__mips) || defined(_MIPS_ARCH) || defined(mips)
#define _mips32
#endif

#if defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__)
#define _powerpc64
#endif

#if defined(__powerpc__) || defined(__ppc__) || defined(__PPC__)
#define _powerpc32
#endif

#if defined(__riscv)
#if __riscv_xlen == 64
#define _riscv64
#else
#define _riscv32
#endif
#endif

#if defined(__sparc_v9__) || defined(__sparcv9) || defined(__arch64__)
#define _sparc64
#endif

#if defined(__sparc__) || defined(__sparc) || defined(sparc)
#define _sparc32
#endif

#if defined(__ia64__) || defined(__IA64__) || defined(_M_IA64)
#define _itanium64
#endif

#if defined(__wasm64__) || defined(_WASM64)
#define _wasm64
#elif defined(__wasm__) || defined(__wasm) || defined(__EMSCRIPTEN__)
#define _wasm32
#endif

#if defined(__loongarch64) || defined(__loongarch64__)
#define _loongarch64
#endif

#if defined(__loongarch__)
#define _loongarch32
#endif

#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
#define _alpha64
#endif

#if defined(__m68k__) || defined(__m68k) || defined(M68000)
#define _m68k32
#endif

#if defined(__sh__) || defined(__SH__)
#define _sh32
#endif

#if defined(__AVR32__)
#define _avr32
#elif defined(__AVR__)
#define _avr8
#endif

#if defined(__MSP430__) || defined(__MSP430)
#define _msp43016
#endif

#if defined(__XTENSA__) || defined(__xtensa__)
#define _xtensa32
#endif

#if defined(__e2k__) || defined(__E2K__)
#define _e2k64
#endif

#if defined(__vax__) || defined(__VAX)
#define _vax32
#endif

#if defined(__hppa__) || defined(__hppa) || defined(_PA_RISC)
#if defined(__LP64__) || defined(__hppa64__)
#define _hppa64
#else
#define _hppa32
#endif
#endif

#if defined(__s390x__)
#define _s39064
#endif

#if defined(__s390__)
#define _s39032
#endif

#if defined(__ARC64__)
#define _arc64
#endif

#if defined(__arc__) || defined(__ARC__)
#define _arc32
#endif

#if defined(__MICROBLAZE64__)
#define _microblaze64
#endif

#if defined(__MICROBLAZE__) || defined(XILINX_MICROBLAZE)
#define _microblaze32
#endif

#if defined(__nios2__) || defined(NIOS2) || defined(__NIOS2__)
#define _nios232
#endif

#if defined(_TMS320C6X) || defined(__TMS320C6X__) || defined(_TMS320C5X) || defined(__TMS320C5X__) || defined(_TMS320C28X) || defined(__TMS320C28X__) || defined(_TMS320C55X) || defined(__TMS320C55X__)
#define _tms32032
#endif

#if defined(__pdp11__) || defined(PDP11)
#define _pdp1116
#endif

#undef _amd
#undef _intel
#undef _arm
#undef _mips
#undef _powerpc
#undef _riscv
#undef _sparc
#undef _itanium
#undef _wasm
#undef _loongarch
#undef _alpha
#undef _m68k
#undef _sh
#undef _avr
#undef _msp430
#undef _xtensa
#undef _e2k
#undef _vax
#undef _hppa
#undef _s390
#undef _arc
#undef _microblaze
#undef _nios2
#undef _tms320
#undef _pdp11

#if defined(_amd64) || defined(_amd32)
#define _amd
#endif

#if defined(_intel64) || defined(_intel32)
#define _intel
#endif

#if defined(_arm64) || defined(_arm32)
#define _arm
#endif

#if defined(_mips64) || defined(_mips32)
#define _mips
#endif

#if defined(_powerpc64) || defined(_powerpc32)
#define _powerpc
#endif

#if defined(_riscv64) || defined(_riscv32)
#define _riscv
#endif

#if defined(_sparc64) || defined(_sparc32)
#define _sparc
#endif

#if defined(_itanium64)
#define _itanium
#endif

#if defined(_wasm64) || defined(_wasm32)
#define _wasm
#endif

#if defined(_loongarch64) || defined(_loongarch32)
#define _loongarch
#endif

#if defined(_alpha64)
#define _alpha
#endif

#if defined(_m68k32)
#define _m68k
#endif

#if defined(_sh32)
#define _sh
#endif

#if defined(_avr8) || defined(_avr32)
#define _avr
#endif

#if defined(_msp43016)
#define _msp430
#endif

#if defined(_xtensa32)
#define _xtensa
#endif

#if defined(_e2k64)
#define _e2k
#endif

#if defined(_vax32)
#define _vax
#endif

#if defined(_hppa64) || defined(_hppa32)
#define _hppa
#endif

#if defined(_s39064) || defined(_s39032)
#define _s390
#endif

#if defined(_arc64) || defined(_arc32)
#define _arc
#endif

#if defined(_microblaze64) || defined(_microblaze32)
#define _microblaze
#endif

#if defined(_nios232)
#define _nios2
#endif

#if defined(_tms32032)
#define _tms320
#endif

#if defined(_pdp1116)
#define _pdp11
#endif

#undef _sys_read
#undef _sys_write
#undef _sys_open
#undef _sys_close
#undef _sys_stat
#undef _sys_fstat
#undef _sys_lstat
#undef _sys_poll
#undef _sys_lseek
#undef _sys_mmap
#undef _sys_mprotect
#undef _sys_munmap
#undef _sys_brk
#undef _sys_rt_sigaction
#undef _sys_rt_sigprocmask
#undef _sys_rt_sigreturn
#undef _sys_ioctl
#undef _sys_pread64
#undef _sys_pwrite64
#undef _sys_readv
#undef _sys_writev
#undef _sys_access
#undef _sys_pipe
#undef _sys_select
#undef _sys_sched_yield
#undef _sys_mremap
#undef _sys_msync
#undef _sys_mincore
#undef _sys_madvise
#undef _sys_shmget
#undef _sys_shmat
#undef _sys_shmctl
#undef _sys_dup
#undef _sys_dup2
#undef _sys_pause
#undef _sys_nanosleep
#undef _sys_getitimer
#undef _sys_alarm
#undef _sys_setitimer
#undef _sys_getpid
#undef _sys_sendfile
#undef _sys_socket
#undef _sys_connect
#undef _sys_accept
#undef _sys_sendto
#undef _sys_recvfrom
#undef _sys_sendmsg
#undef _sys_recvmsg
#undef _sys_shutdown
#undef _sys_bind
#undef _sys_listen
#undef _sys_getsockname
#undef _sys_getpeername
#undef _sys_socketpair
#undef _sys_setsockopt
#undef _sys_getsockopt
#undef _sys_clone
#undef _sys_fork
#undef _sys_vfork
#undef _sys_execve
#undef _sys_exit
#undef _sys_wait4
#undef _sys_kill
#undef _sys_uname
#undef _sys_semget
#undef _sys_semop
#undef _sys_semctl
#undef _sys_shmdt
#undef _sys_msgget
#undef _sys_msgsnd
#undef _sys_msgrcv
#undef _sys_msgctl
#undef _sys_fcntl
#undef _sys_flock
#undef _sys_fsync
#undef _sys_fdatasync
#undef _sys_truncate
#undef _sys_ftruncate
#undef _sys_getdents
#undef _sys_getcwd
#undef _sys_chdir
#undef _sys_fchdir
#undef _sys_rename
#undef _sys_mkdir
#undef _sys_rmdir
#undef _sys_creat
#undef _sys_link
#undef _sys_unlink
#undef _sys_symlink
#undef _sys_readlink
#undef _sys_chmod
#undef _sys_fchmod
#undef _sys_chown
#undef _sys_fchown
#undef _sys_lchown
#undef _sys_umask
#undef _sys_gettimeofday
#undef _sys_getrlimit
#undef _sys_getrusage
#undef _sys_sysinfo
#undef _sys_times
#undef _sys_ptrace
#undef _sys_getuid
#undef _sys_syslog
#undef _sys_getgid
#undef _sys_setuid
#undef _sys_setgid
#undef _sys_geteuid
#undef _sys_getegid
#undef _sys_setpgid
#undef _sys_getppid
#undef _sys_getpgrp
#undef _sys_setsid
#undef _sys_setreuid
#undef _sys_setregid
#undef _sys_getgroups
#undef _sys_setgroups
#undef _sys_setresuid
#undef _sys_getresuid
#undef _sys_setresgid
#undef _sys_getresgid
#undef _sys_getpgid
#undef _sys_setfsuid
#undef _sys_setfsgid
#undef _sys_getsid
#undef _sys_capget
#undef _sys_capset
#undef _sys_rt_sigpending
#undef _sys_rt_sigtimedwait
#undef _sys_rt_sigqueueinfo
#undef _sys_rt_sigsuspend
#undef _sys_sigaltstack
#undef _sys_utime
#undef _sys_mknod
#undef _sys_uselib
#undef _sys_personality
#undef _sys_ustat
#undef _sys_statfs
#undef _sys_fstatfs
#undef _sys_sysfs
#undef _sys_getpriority
#undef _sys_setpriority
#undef _sys_sched_setparam
#undef _sys_sched_getparam
#undef _sys_sched_setscheduler
#undef _sys_sched_getscheduler
#undef _sys_sched_get_priority_max
#undef _sys_sched_get_priority_min
#undef _sys_sched_rr_get_interval
#undef _sys_mlock
#undef _sys_munlock
#undef _sys_mlockall
#undef _sys_munlockall
#undef _sys_vhangup
#undef _sys_modify_ldt
#undef _sys_pivot_root
#undef _sys__sysctl
#undef _sys_prctl
#undef _sys_arch_prctl
#undef _sys_adjtimex
#undef _sys_setrlimit
#undef _sys_chroot
#undef _sys_sync
#undef _sys_acct
#undef _sys_settimeofday
#undef _sys_mount
#undef _sys_umount2
#undef _sys_swapon
#undef _sys_swapoff
#undef _sys_reboot
#undef _sys_sethostname
#undef _sys_setdomainname
#undef _sys_iopl
#undef _sys_ioperm
#undef _sys_create_module
#undef _sys_init_module
#undef _sys_delete_module
#undef _sys_get_kernel_syms
#undef _sys_query_module
#undef _sys_quotactl
#undef _sys_nfsservctl
#undef _sys_getpmsg
#undef _sys_putpmsg
#undef _sys_afs_syscall
#undef _sys_tuxcall
#undef _sys_security
#undef _sys_gettid
#undef _sys_readahead
#undef _sys_setxattr
#undef _sys_lsetxattr
#undef _sys_fsetxattr
#undef _sys_getxattr
#undef _sys_lgetxattr
#undef _sys_fgetxattr
#undef _sys_listxattr
#undef _sys_llistxattr
#undef _sys_flistxattr
#undef _sys_removexattr
#undef _sys_lremovexattr
#undef _sys_fremovexattr
#undef _sys_tkill
#undef _sys_time
#undef _sys_futex
#undef _sys_sched_setaffinity
#undef _sys_sched_getaffinity
#undef _sys_set_thread_area
#undef _sys_io_setup
#undef _sys_io_destroy
#undef _sys_io_getevents
#undef _sys_io_submit
#undef _sys_io_cancel
#undef _sys_get_thread_area
#undef _sys_lookup_dcookie
#undef _sys_epoll_create
#undef _sys_epoll_ctl_old
#undef _sys_epoll_wait_old
#undef _sys_remap_file_pages
#undef _sys_getdents64
#undef _sys_set_tid_address
#undef _sys_restart_syscall
#undef _sys_semtimedop
#undef _sys_fadvise64
#undef _sys_timer_create
#undef _sys_timer_settime
#undef _sys_timer_gettime
#undef _sys_timer_getoverrun
#undef _sys_timer_delete
#undef _sys_clock_settime
#undef _sys_clock_gettime
#undef _sys_clock_getres
#undef _sys_clock_nanosleep
#undef _sys_exit_group
#undef _sys_epoll_wait
#undef _sys_epoll_ctl
#undef _sys_tgkill
#undef _sys_utimes
#undef _sys_vserver
#undef _sys_mbind
#undef _sys_set_mempolicy
#undef _sys_get_mempolicy
#undef _sys_mq_open
#undef _sys_mq_unlink
#undef _sys_mq_timedsend
#undef _sys_mq_timedreceive
#undef _sys_mq_notify
#undef _sys_mq_getsetattr
#undef _sys_kexec_load
#undef _sys_waitid
#undef _sys_add_key
#undef _sys_request_key
#undef _sys_keyctl
#undef _sys_ioprio_set
#undef _sys_ioprio_get
#undef _sys_inotify_init
#undef _sys_inotify_add_watch
#undef _sys_inotify_rm_watch
#undef _sys_migrate_pages
#undef _sys_openat
#undef _sys_mkdirat
#undef _sys_mknodat
#undef _sys_fchownat
#undef _sys_futimesat
#undef _sys_newfstatat
#undef _sys_unlinkat
#undef _sys_renameat
#undef _sys_linkat
#undef _sys_symlinkat
#undef _sys_readlinkat
#undef _sys_fchmodat
#undef _sys_faccessat
#undef _sys_pselect6
#undef _sys_ppoll
#undef _sys_unshare
#undef _sys_set_robust_list
#undef _sys_get_robust_list
#undef _sys_splice
#undef _sys_tee
#undef _sys_sync_file_range
#undef _sys_vmsplice
#undef _sys_move_pages
#undef _sys_utimensat
#undef _sys_epoll_pwait
#undef _sys_signalfd
#undef _sys_timerfd_create
#undef _sys_eventfd
#undef _sys_fallocate
#undef _sys_timerfd_settime
#undef _sys_timerfd_gettime
#undef _sys_accept4
#undef _sys_signalfd4
#undef _sys_eventfd2
#undef _sys_epoll_create1
#undef _sys_dup3
#undef _sys_pipe2
#undef _sys_inotify_init1
#undef _sys_preadv
#undef _sys_pwritev
#undef _sys_rt_tgsigqueueinfo
#undef _sys_perf_event_open
#undef _sys_recvmmsg
#undef _sys_fanotify_init
#undef _sys_fanotify_mark
#undef _sys_prlimit64
#undef _sys_name_to_handle_at
#undef _sys_open_by_handle_at
#undef _sys_clock_adjtime
#undef _sys_syncfs
#undef _sys_sendmmsg
#undef _sys_setns
#undef _sys_getns
#undef _sys_process_vm_readv
#undef _sys_process_vm_writev
#undef _sys_kcmp
#undef _sys_finit_module
#undef _sys_sched_setattr
#undef _sys_sched_getattr
#undef _sys_renameat2
#undef _sys_seccomp
#undef _sys_getrandom
#undef _sys_memfd_create
#undef _sys_kexec_file_load
#undef _sys_bpf
#undef _sys_execveat
#undef _sys_userfaultfd
#undef _sys_membarrier
#undef _sys_mlock2
#undef _sys_copy_file_range
#undef _sys_preadv2
#undef _sys_pwritev2
#undef _sys_pkey_mprotect
#undef _sys_pkey_alloc
#undef _sys_pkey_free
#undef _sys_statx
#undef _sys_io_pgetevents
#undef _sys_rseq
#undef _sys_pidfd_send_signal
#undef _sys_io_uring_setup
#undef _sys_io_uring_enter
#undef _sys_io_uring_register
#undef _sys_open_tree
#undef _sys_move_mount
#undef _sys_fsopen
#undef _sys_fsconfig
#undef _sys_fsmount
#undef _sys_fspick
#undef _sys_pidfd_open
#undef _sys_clone3
#undef _sys_close_range
#undef _sys_openat2
#undef _sys_pidfd_getfd
#undef _sys_faccessat2
#undef _sys_process_madvise
#undef _sys_epoll_pwait2
#undef _sys_mount_setattr
#undef _sys_quotactl_fd
#undef _sys_landlock_create_ruleset
#undef _sys_landlock_add_rule
#undef _sys_landlock_restrict_self
#undef _sys_memfd_secret
#undef _sys_process_mrelease
#undef _sys_futex_waitv
#undef _sys_set_mempolicy_home_node
#undef _sys_cachestat
#undef _sys_fchmodat2
#undef _sys_map_shadow_stack
#undef _sys_futex_wake
#undef _sys_futex_wait
#undef _sys_futex_requeue
#undef _sys_lsm_get_self_attr
#undef _sys_lsm_set_self_attr
#undef _sys_lsm_list_modules
#undef _sys_mseal

#define _sys_read 0
#define _sys_write 1
#define _sys_open 2
#define _sys_close 3
#define _sys_stat 4
#define _sys_fstat 5
#define _sys_lstat 6
#define _sys_poll 7
#define _sys_lseek 8
#define _sys_mmap 9
#define _sys_mprotect 10
#define _sys_munmap 11
#define _sys_brk 12
#define _sys_rt_sigaction 13
#define _sys_rt_sigprocmask 14
#define _sys_rt_sigreturn 15
#define _sys_ioctl 16
#define _sys_pread64 17
#define _sys_pwrite64 18
#define _sys_readv 19
#define _sys_writev 20
#define _sys_access 21
#define _sys_pipe 22
#define _sys_select 23
#define _sys_sched_yield 24
#define _sys_mremap 25
#define _sys_msync 26
#define _sys_mincore 27
#define _sys_madvise 28
#define _sys_shmget 29
#define _sys_shmat 30
#define _sys_shmctl 31
#define _sys_dup 32
#define _sys_dup2 33
#define _sys_pause 34
#define _sys_nanosleep 35
#define _sys_getitimer 36
#define _sys_alarm 37
#define _sys_setitimer 38
#define _sys_getpid 39
#define _sys_sendfile 40
#define _sys_socket 41
#define _sys_connect 42
#define _sys_accept 43
#define _sys_sendto 44
#define _sys_recvfrom 45
#define _sys_sendmsg 46
#define _sys_recvmsg 47
#define _sys_shutdown 48
#define _sys_bind 49
#define _sys_listen 50
#define _sys_getsockname 51
#define _sys_getpeername 52
#define _sys_socketpair 53
#define _sys_setsockopt 54
#define _sys_getsockopt 55
#define _sys_clone 56
#define _sys_fork 57
#define _sys_vfork 58
#define _sys_execve 59
#define _sys_exit 60
#define _sys_wait4 61
#define _sys_kill 62
#define _sys_uname 63
#define _sys_semget 64
#define _sys_semop 65
#define _sys_semctl 66
#define _sys_shmdt 67
#define _sys_msgget 68
#define _sys_msgsnd 69
#define _sys_msgrcv 70
#define _sys_msgctl 71
#define _sys_fcntl 72
#define _sys_flock 73
#define _sys_fsync 74
#define _sys_fdatasync 75
#define _sys_truncate 76
#define _sys_ftruncate 77
#define _sys_getdents 78
#define _sys_getcwd 79
#define _sys_chdir 80
#define _sys_fchdir 81
#define _sys_rename 82
#define _sys_mkdir 83
#define _sys_rmdir 84
#define _sys_creat 85
#define _sys_link 86
#define _sys_unlink 87
#define _sys_symlink 88
#define _sys_readlink 89
#define _sys_chmod 90
#define _sys_fchmod 91
#define _sys_chown 92
#define _sys_fchown 93
#define _sys_lchown 94
#define _sys_umask 95
#define _sys_gettimeofday 96
#define _sys_getrlimit 97
#define _sys_getrusage 98
#define _sys_sysinfo 99
#define _sys_times 100
#define _sys_ptrace 101
#define _sys_getuid 102
#define _sys_syslog 103
#define _sys_getgid 104
#define _sys_setuid 105
#define _sys_setgid 106
#define _sys_geteuid 107
#define _sys_getegid 108
#define _sys_setpgid 109
#define _sys_getppid 110
#define _sys_getpgrp 111
#define _sys_setsid 112
#define _sys_setreuid 113
#define _sys_setregid 114
#define _sys_getgroups 115
#define _sys_setgroups 116
#define _sys_setresuid 117
#define _sys_getresuid 118
#define _sys_setresgid 119
#define _sys_getresgid 120
#define _sys_getpgid 121
#define _sys_setfsuid 122
#define _sys_setfsgid 123
#define _sys_getsid 124
#define _sys_capget 125
#define _sys_capset 126
#define _sys_rt_sigpending 127
#define _sys_rt_sigtimedwait 128
#define _sys_rt_sigqueueinfo 129
#define _sys_rt_sigsuspend 130
#define _sys_sigaltstack 131
#define _sys_utime 132
#define _sys_mknod 133
#define _sys_uselib 134
#define _sys_personality 135
#define _sys_ustat 136
#define _sys_statfs 137
#define _sys_fstatfs 138
#define _sys_sysfs 139
#define _sys_getpriority 140
#define _sys_setpriority 141
#define _sys_sched_setparam 142
#define _sys_sched_getparam 143
#define _sys_sched_setscheduler 144
#define _sys_sched_getscheduler 145
#define _sys_sched_get_priority_max 146
#define _sys_sched_get_priority_min 147
#define _sys_sched_rr_get_interval 148
#define _sys_mlock 149
#define _sys_munlock 150
#define _sys_mlockall 151
#define _sys_munlockall 152
#define _sys_vhangup 153
#define _sys_modify_ldt 154
#define _sys_pivot_root 155
#define _sys__sysctl 156
#define _sys_prctl 157
#define _sys_arch_prctl 158
#define _sys_adjtimex 159
#define _sys_setrlimit 160
#define _sys_chroot 161
#define _sys_sync 162
#define _sys_acct 163
#define _sys_settimeofday 164
#define _sys_mount 165
#define _sys_umount2 166
#define _sys_swapon 167
#define _sys_swapoff 168
#define _sys_reboot 169
#define _sys_sethostname 170
#define _sys_setdomainname 171
#define _sys_iopl 172
#define _sys_ioperm 173
#define _sys_create_module 174
#define _sys_init_module 175
#define _sys_delete_module 176
#define _sys_get_kernel_syms 177
#define _sys_query_module 178
#define _sys_quotactl 179
#define _sys_nfsservctl 180
#define _sys_getpmsg 181
#define _sys_putpmsg 182
#define _sys_afs_syscall 183
#define _sys_tuxcall 184
#define _sys_security 185
#define _sys_gettid 186
#define _sys_readahead 187
#define _sys_setxattr 188
#define _sys_lsetxattr 189
#define _sys_fsetxattr 190
#define _sys_getxattr 191
#define _sys_lgetxattr 192
#define _sys_fgetxattr 193
#define _sys_listxattr 194
#define _sys_llistxattr 195
#define _sys_flistxattr 196
#define _sys_removexattr 197
#define _sys_lremovexattr 198
#define _sys_fremovexattr 199
#define _sys_tkill 200
#define _sys_time 201
#define _sys_futex 202
#define _sys_sched_setaffinity 203
#define _sys_sched_getaffinity 204
#define _sys_set_thread_area 205
#define _sys_io_setup 206
#define _sys_io_destroy 207
#define _sys_io_getevents 208
#define _sys_io_submit 209
#define _sys_io_cancel 210
#define _sys_get_thread_area 211
#define _sys_lookup_dcookie 212
#define _sys_epoll_create 213
#define _sys_epoll_ctl_old 214
#define _sys_epoll_wait_old 215
#define _sys_remap_file_pages 216
#define _sys_getdents64 217
#define _sys_set_tid_address 218
#define _sys_restart_syscall 219
#define _sys_semtimedop 220
#define _sys_fadvise64 221
#define _sys_timer_create 222
#define _sys_timer_settime 223
#define _sys_timer_gettime 224
#define _sys_timer_getoverrun 225
#define _sys_timer_delete 226
#define _sys_clock_settime 227
#define _sys_clock_gettime 228
#define _sys_clock_getres 229
#define _sys_clock_nanosleep 230
#define _sys_exit_group 231
#define _sys_epoll_wait 232
#define _sys_epoll_ctl 233
#define _sys_tgkill 234
#define _sys_utimes 235
#define _sys_vserver 236
#define _sys_mbind 237
#define _sys_set_mempolicy 238
#define _sys_get_mempolicy 239
#define _sys_mq_open 240
#define _sys_mq_unlink 241
#define _sys_mq_timedsend 242
#define _sys_mq_timedreceive 243
#define _sys_mq_notify 244
#define _sys_mq_getsetattr 245
#define _sys_kexec_load 246
#define _sys_waitid 247
#define _sys_add_key 248
#define _sys_request_key 249
#define _sys_keyctl 250
#define _sys_ioprio_set 251
#define _sys_ioprio_get 252
#define _sys_inotify_init 253
#define _sys_inotify_add_watch 254
#define _sys_inotify_rm_watch 255
#define _sys_migrate_pages 256
#define _sys_openat 257
#define _sys_mkdirat 258
#define _sys_mknodat 259
#define _sys_fchownat 260
#define _sys_futimesat 261
#define _sys_newfstatat 262
#define _sys_unlinkat 263
#define _sys_renameat 264
#define _sys_linkat 265
#define _sys_symlinkat 266
#define _sys_readlinkat 267
#define _sys_fchmodat 268
#define _sys_faccessat 269
#define _sys_pselect6 270
#define _sys_ppoll 271
#define _sys_unshare 272
#define _sys_set_robust_list 273
#define _sys_get_robust_list 274
#define _sys_splice 275
#define _sys_tee 276
#define _sys_sync_file_range 277
#define _sys_vmsplice 278
#define _sys_move_pages 279
#define _sys_utimensat 280
#define _sys_epoll_pwait 281
#define _sys_signalfd 282
#define _sys_timerfd_create 283
#define _sys_eventfd 284
#define _sys_fallocate 285
#define _sys_timerfd_settime 286
#define _sys_timerfd_gettime 287
#define _sys_accept4 288
#define _sys_signalfd4 289
#define _sys_eventfd2 290
#define _sys_epoll_create1 291
#define _sys_dup3 292
#define _sys_pipe2 293
#define _sys_inotify_init1 294
#define _sys_preadv 295
#define _sys_pwritev 296
#define _sys_rt_tgsigqueueinfo 297
#define _sys_perf_event_open 298
#define _sys_recvmmsg 299
#define _sys_fanotify_init 300
#define _sys_fanotify_mark 301
#define _sys_prlimit64 302
#define _sys_name_to_handle_at 303
#define _sys_open_by_handle_at 304
#define _sys_clock_adjtime 305
#define _sys_syncfs 306
#define _sys_sendmmsg 307
#define _sys_setns 308
#define _sys_getns 309
#define _sys_process_vm_readv 310
#define _sys_process_vm_writev 311
#define _sys_kcmp 312
#define _sys_finit_module 313
#define _sys_sched_setattr 314
#define _sys_sched_getattr 315
#define _sys_renameat2 316
#define _sys_seccomp 317
#define _sys_getrandom 318
#define _sys_memfd_create 319
#define _sys_kexec_file_load 320
#define _sys_bpf 321
#define _sys_execveat 322
#define _sys_userfaultfd 323
#define _sys_membarrier 324
#define _sys_mlock2 325
#define _sys_copy_file_range 326
#define _sys_preadv2 327
#define _sys_pwritev2 328
#define _sys_pkey_mprotect 329
#define _sys_pkey_alloc 330
#define _sys_pkey_free 331
#define _sys_statx 332
#define _sys_io_pgetevents 333
#define _sys_rseq 334
#define _sys_pidfd_send_signal 424
#define _sys_io_uring_setup 425
#define _sys_io_uring_enter 426
#define _sys_io_uring_register 427
#define _sys_open_tree 428
#define _sys_move_mount 429
#define _sys_fsopen 430
#define _sys_fsconfig 431
#define _sys_fsmount 432
#define _sys_fspick 433
#define _sys_pidfd_open 434
#define _sys_clone3 435
#define _sys_close_range 436
#define _sys_openat2 437
#define _sys_pidfd_getfd 438
#define _sys_faccessat2 439
#define _sys_process_madvise 440
#define _sys_epoll_pwait2 441
#define _sys_mount_setattr 442
#define _sys_quotactl_fd 443
#define _sys_landlock_create_ruleset 444
#define _sys_landlock_add_rule 445
#define _sys_landlock_restrict_self 446
#define _sys_memfd_secret 447
#define _sys_process_mrelease 448
#define _sys_futex_waitv 449
#define _sys_set_mempolicy_home_node 450
#define _sys_cachestat 451
#define _sys_fchmodat2 452
#define _sys_map_shadow_stack 453
#define _sys_futex_wake 454
#define _sys_futex_wait 455
#define _sys_futex_requeue 456
#define _sys_lsm_get_self_attr 459
#define _sys_lsm_set_self_attr 460
#define _sys_lsm_list_modules 461
#define _sys_mseal 462

#undef _pi
#undef _e
#undef _phi
#undef _sqrt2
#undef _sqrt3
#undef _ln2
#undef _ln10
#undef _log2e
#undef _log10e
#undef _tau
#undef _deg_to_rad
#undef _rad_to_deg
#undef _sha1_h0
#undef _sha1_h1
#undef _sha1_h2
#undef _sha1_h3
#undef _sha1_h4
#undef _sha224_h0
#undef _sha224_h1
#undef _sha224_h2
#undef _sha224_h3
#undef _sha224_h4
#undef _sha224_h5
#undef _sha224_h6
#undef _sha224_h7
#undef _sha256_h0
#undef _sha256_h1
#undef _sha256_h2
#undef _sha256_h3
#undef _sha256_h4
#undef _sha256_h5
#undef _sha256_h6
#undef _sha256_h7
#undef _sha384_h0
#undef _sha384_h1
#undef _sha384_h2
#undef _sha384_h3
#undef _sha384_h4
#undef _sha384_h5
#undef _sha384_h6
#undef _sha384_h7
#undef _sha512_h0
#undef _sha512_h1
#undef _sha512_h2
#undef _sha512_h3
#undef _sha512_h4
#undef _sha512_h5
#undef _sha512_h6
#undef _sha512_h7
#undef _sha512_224_h0
#undef _sha512_224_h1
#undef _sha512_224_h2
#undef _sha512_224_h3
#undef _sha512_224_h4
#undef _sha512_224_h5
#undef _sha512_224_h6
#undef _sha512_224_h7
#undef _sha512_256_h0
#undef _sha512_256_h1
#undef _sha512_256_h2
#undef _sha512_256_h3
#undef _sha512_256_h4
#undef _sha512_256_h5
#undef _sha512_256_h6
#undef _sha512_256_h7
#undef _md5_a
#undef _md5_b
#undef _md5_c
#undef _md5_d

#define _pi 3.14159265358979323846
#define _e 2.71828182845904523536
#define _phi 1.61803398874989484820
#define _sqrt2 1.41421356237309504880
#define _sqrt3 1.73205080756887729353
#define _ln2 0.69314718055994530942
#define _ln10 2.30258509299404568402
#define _log2e 1.44269504088896340736
#define _log10e 0.43429448190325182765
#define _tau 6.28318530717958647693
#define _deg_to_rad 0.01745329251994329577
#define _rad_to_deg 57.29577951308232087680

#define _sha1_h0 0x67452301
#define _sha1_h1 0xEFCDAB89
#define _sha1_h2 0x98BADCFE
#define _sha1_h3 0x10325476
#define _sha1_h4 0xC3D2E1F0

#define _sha224_h0 0xc1059ed8
#define _sha224_h1 0x367cd507
#define _sha224_h2 0x3070dd17
#define _sha224_h3 0xf70e5939
#define _sha224_h4 0xffc00b31
#define _sha224_h5 0x68581511
#define _sha224_h6 0x64f98fa7
#define _sha224_h7 0xbefa4fa4

#define _sha256_h0 0x6a09e667
#define _sha256_h1 0xbb67ae85
#define _sha256_h2 0x3c6ef372
#define _sha256_h3 0xa54ff53a
#define _sha256_h4 0x510e527f
#define _sha256_h5 0x9b05688c
#define _sha256_h6 0x1f83d9ab
#define _sha256_h7 0x5be0cd19

#define _sha384_h0 0xcbbb9d5dc1059ed8ULL
#define _sha384_h1 0x629a292a367cd507ULL
#define _sha384_h2 0x9159015a3070dd17ULL
#define _sha384_h3 0x152fecd8f70e5939ULL
#define _sha384_h4 0x67332667ffc00b31ULL
#define _sha384_h5 0x8eb44a8768581511ULL
#define _sha384_h6 0xdb0c2e0d64f98fa7ULL
#define _sha384_h7 0x47b5481dbefa4fa4ULL

#define _sha512_h0 0x6a09e667f3bcc908ULL
#define _sha512_h1 0xbb67ae8584caa73bULL
#define _sha512_h2 0x3c6ef372fe94f82bULL
#define _sha512_h3 0xa54ff53a5f1d36f1ULL
#define _sha512_h4 0x510e527fade682d1ULL
#define _sha512_h5 0x9b05688c2b3e6c1fULL
#define _sha512_h6 0x1f83d9abfb41bd6bULL
#define _sha512_h7 0x5be0cd19137e2179ULL

#define _sha512_224_h0 0x8C3D37C819544DA2ULL
#define _sha512_224_h1 0x73E1996689DCD4D6ULL
#define _sha512_224_h2 0x1DFAB7AE32FF9C82ULL
#define _sha512_224_h3 0x679DD514582F9FCFULL
#define _sha512_224_h4 0x0F6D2B697BD44DA8ULL
#define _sha512_224_h5 0x77E36F7304C48942ULL
#define _sha512_224_h6 0x3F9D85A86A1D36C8ULL
#define _sha512_224_h7 0x1112E6AD91D692A1ULL

#define _sha512_256_h0 0x22312194FC2BF72CULL
#define _sha512_256_h1 0x9F555FA3C84C64C2ULL
#define _sha512_256_h2 0x2393B86B6F53B151ULL
#define _sha512_256_h3 0x963877195940EABDULL
#define _sha512_256_h4 0x96283EE2A88EFFE3ULL
#define _sha512_256_h5 0xBE5E1E2553863992ULL
#define _sha512_256_h6 0x2B0199FC2C85B8AAULL
#define _sha512_256_h7 0x0EB72DDC81C52CA2ULL

#define _md5_a 0x67452301
#define _md5_b 0xefcdab89
#define _md5_c 0x98badcfe
#define _md5_d 0x10325476

#undef _lcg32
#undef _lcg64
#undef _lcg32_a
#undef _lcg32_c
#undef _lcg32_m
#undef _lcg64_a
#undef _lcg64_c
#undef _lcg64_m
#undef _pcg32
#undef _pcg64
#undef _pcg32_mult
#undef _pcg32_inc
#undef _pcg64_mult
#undef _pcg64_inc
#undef _lcg
#undef _lcg_a
#undef _lcg_c
#undef _lcg_m
#undef _pcg
#undef _pcg_mult
#undef _pcg_inc

#define _lcg64_a 6364136223846793005ULL
#define _lcg64_c 1442695040888963407ULL
#define _lcg64_m 18446744073709551616ULL

#define _lcg32_a 1664525
#define _lcg32_c 1013904223
#define _lcg32_m 4294967296

#define _lcg _lcg64_a
#define _lcg_a _lcg64_a
#define _lcg_c _lcg64_c
#define _lcg_m _lcg64_m
#define _lcg64 _lcg64_a
#define _lcg32 _lcg32_a

#define _pcg64_mult_hi 4702624768794212184ULL
#define _pcg64_mult_lo 81442107491837523525ULL
#define _pcg64_inc_hi 1173975921715261132ULL
#define _pcg64_inc_lo 68558934119004209487ULL

#define _pcg32_mult 6364136223846793005ULL
#define _pcg32_inc 1442695040888963407ULL

#define _pcg _pcg32_mult
#define _pcg_mult _pcg32_mult
#define _pcg_inc _pcg32_inc
#define _pcg64 _pcg32_mult
#define _pcg32 _pcg32_mult

#undef _i8
#undef _u8
#undef _s8
#undef _i16
#undef _u16
#undef _s16
#undef _i32
#undef _u32
#undef _s32

#define _i8 char
#define _u8 unsigned char
#define _s8 signed char
#define _i16 short int
#define _u16 unsigned short int
#define _s16 signed short int
#define _i32 int
#define _u32 unsigned int
#define _s32 signed int

#undef _i64
#undef _u64
#undef _s64

#if defined(_MSC_VER) && !defined(__clang__)
#if defined(_M_X64) || defined(_M_AMD64) || defined(_M_ARM64)
#define _i64 __int64
#define _u64 unsigned __int64
#define _s64 signed __int64
#endif
#else
#if defined(__SIZEOF_LONG__) && (__SIZEOF_LONG__ == 8)
#define _i64 long
#define _u64 unsigned long
#define _s64 signed long
#elif defined(__SIZEOF_LONG_LONG__) && (__SIZEOF_LONG_LONG__ == 8)
#define _i64 long long
#define _u64 unsigned long long
#define _s64 signed long long
#elif defined(__INT64_TYPE__)
#define _i64 signed __INT64_TYPE__
#define _u64 unsigned __INT64_TYPE__
#define _s64 signed __INT64_TYPE__
#elif defined(_win64) || defined(_x8664) || defined(_amd64) || defined(_arm64) \
|| defined(_mips64) || defined(_powerpc64) || defined(_riscv64) \
|| defined(_sparc64) || defined(_itanium64) || defined(_alpha64) \
|| defined(_e2k64) || defined(_s39064) || defined(_loongarch64)
#if defined(__SIZEOF_LONG__) && (__SIZEOF_LONG__ == 8)
#define _i64 long
#define _u64 unsigned long
#define _s64 signed long
#elif defined(_MSC_VER)
#define _i64 __int64
#define _u64 unsigned __int64
#define _s64 signed __int64
#else
#define _i64 long long
#define _u64 unsigned long long
#define _s64 signed long long
#endif
#endif
#endif

#undef _i8_max
#undef _u8_max
#undef _s8_max
#undef _i16_max
#undef _u16_max
#undef _s16_max
#undef _i32_max
#undef _u32_max
#undef _s32_max
#undef _i64_max
#undef _u64_max
#undef _s64_max

#define _i8_max 127
#define _u8_max 255
#define _s8_max 127

#define _i16_max 32767
#define _u16_max 65535U
#define _s16_max 32767

#define _i32_max 2147483647L
#define _u32_max 4294967295UL
#define _s32_max 2147483647L

#if defined(_i64)
#define _i64_max 9223372036854775807LL
#define _u64_max 18446744073709551615ULL
#define _s64_max 9223372036854775807LL
#endif

#undef _int8
#undef _int16
#undef _int32
#undef _int64
#undef _uint8
#undef _uint16
#undef _uint32
#undef _uint64
#undef _sint8
#undef _sint16
#undef _sint32
#undef _sint64

#if defined(_i8)
#define _int8 _i8
#define _sint8 _s8
#endif

#if defined(_i16)
#define _int16 _i16
#define _sint16 _s16
#endif

#if defined(_i32)
#define _int32 _i32
#define _sint32 _s32
#endif

#if defined(_i64)
#define _int64 _i64
#define _sint64 _s64
#endif

#if defined(_u8)
#define _uint8 _u8
#endif

#if defined(_u16)
#define _uint16 _u16
#endif

#if defined(_u32)
#define _uint32 _u32
#endif

#if defined(_u64)
#define _uint64 _u64
#endif

#undef _db
#undef _dw
#undef _dd
#undef _dq
#undef _byte
#undef _word
#undef _dword
#undef _qword
#undef _char
#undef _uchar
#undef _schar
#undef _short
#undef _ushort
#undef _sshort
#undef _int
#undef _uint
#undef _sint
#undef _long
#undef _ulong
#undef _slong
#undef _longlong
#undef _ulonglong
#undef _slonglong

#define _long long int
#define _slong signed long int
#define _ulong unsigned long int

#if defined(_i8)
#define _char _i8
#define _schar _s8
#endif

#if defined(_u8)
#define _db _u8
#define _byte _u8
#define _uchar _u8
#endif

#if defined(_i16)
#define _short _i16
#define _sshort _s16
#endif

#if defined(_u16)
#define _dw _u16
#define _word _u16
#define _ushort _u16
#endif

#if defined(_i32)
#define _int _i32
#define _sint _s32
#endif

#if defined(_u32)
#define _dd _u32
#define _dword _u32
#define _uint _u32
#endif

#if defined(_i64)
#define _longlong _i64
#define _slonglong _s64
#endif

#if defined(_u64)
#define _dq _u64
#define _qword _u64
#define _ulonglong _u64
#endif

#undef _ui8
#undef _ui16
#undef _ui32
#undef _ui64
#undef _si8
#undef _si16
#undef _si32
#undef _si64

#if defined(_s8)
#define _si8 _s8
#endif

#if defined(_s16)
#define _si16 _s16
#endif

#if defined(_s32)
#define _si32 _s32
#endif

#if defined(_s64)
#define _si64 _s64
#endif

#if defined(_u8)
#define _ui8 _u8
#endif

#if defined(_u16)
#define _ui16 _u16
#endif

#if defined(_u32)
#define _ui32 _u32
#endif

#if defined(_u64)
#define _ui64 _u64
#endif

#undef _imax
#undef _intmax
#undef _int_max
#undef _umax
#undef _uintmax
#undef _uint_max

#ifdef _i64
#define _imax _i64
#define _intmax _i64
#define _int_max _i64
#else
#define _imax _i32
#define _intmax _i32
#define _int_max _i32
#endif

#ifdef _u64
#define _uimax _u64
#define _uintmax _u64
#define _uint_max _u64
#else
#define _uimax _u32
#define _uintmax _u32
#define _uint_max _u32
#endif

#endif
