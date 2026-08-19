#ifndef __
#define __


#undef _c
#undef _cpp

#ifdef __cplusplus
#define _cpp
#else
#define _c
#endif


#undef _c89
#undef _c90
#undef _c94
#undef _c95
#undef _c99
#undef _c11
#undef _c17
#undef _c18
#undef _c23
#undef _cpp98
#undef _cpp03
#undef _cpp11
#undef _cpp14
#undef _cpp17
#undef _cpp20
#undef _cpp23
#undef _cpp26

#if !defined(__cplusplus) && !defined(_MSVC_LANG)
#if defined(__STDC_VERSION__)
#define _c89
#define _c90
#if __STDC_VERSION__ >= 199409L
#define _c94
#define _c95
#endif
#if __STDC_VERSION__ >= 199901L
#define _c99
#endif
#if __STDC_VERSION__ >= 201112L
#define _c11
#endif
#if __STDC_VERSION__ >= 201710L
#define _c17
#define _c18
#endif
#if __STDC_VERSION__ >= 202311L
#define _c23
#endif
#else
#define _c89
#define _c90
#endif
#endif

#if defined(_MSVC_LANG)
#define _cpp98
#define _cpp03
#if _MSVC_LANG >= 201103L
#define _cpp11
#endif
#if _MSVC_LANG >= 201402L
#define _cpp14
#endif
#if _MSVC_LANG >= 201703L
#define _cpp17
#endif
#if _MSVC_LANG >= 202002L
#define _cpp20
#endif
#if _MSVC_LANG >= 202302L
#define _cpp23
#endif
#if _MSVC_LANG >= 202604L
#define _cpp26
#endif
#elif defined(__cplusplus)
#define _cpp98
#define _cpp03
#if __cplusplus >= 201103L
#define _cpp11
#endif
#if __cplusplus >= 201402L
#define _cpp14
#endif
#if __cplusplus >= 201703L
#define _cpp17
#endif
#if __cplusplus >= 202002L
#define _cpp20
#endif
#if __cplusplus >= 202302L
#define _cpp23
#endif
#if __cplusplus >= 202604L
#define _cpp26
#endif
#endif


#undef _gcc
#undef _gnuc
#undef _clang
#undef _llvm
#undef _apple_clang
#undef _clang_cl
#undef _msvc
#undef _icc
#undef _icl
#undef _icx
#undef _icpx
#undef _icpc
#undef _dpcpp
#undef _intel_dpcpp
#undef _ibm
#undef _xlc
#undef _sunpro
#undef _hp
#undef _borland
#undef _turbo
#undef _watcom
#undef _tcc
#undef _pcc
#undef _dcc
#undef _kai
#undef _metrowerks
#undef _codewarrior
#undef _symantec
#undef _digitalmars
#undef _sco
#undef _cray
#undef _portland
#undef _pgcc
#undef _pathscale
#undef _sdcc
#undef _zapcc
#undef _open64
#undef _ti
#undef _armcc
#undef _armclang
#undef _iar
#undef _renesas
#undef _diab
#undef _greenhills
#undef _keil
#undef _tasking
#undef _microtec
#undef _cosmic
#undef _imagecraft
#undef _rowley
#undef _nvcc
#undef _cuda
#undef _hipcc
#undef _emscripten
#undef _nvcompiler
#undef _microchip_xc8
#undef _microchip_xc16
#undef _microchip_xc32
#undef _metaware
#undef _clang_analyzer
#undef _zig

#if defined(__GNUC__) && !defined(__clang__) && !defined(__ICC) && !defined(__ICL) && !defined(__INTEL_COMPILER) && !defined(__PATHSCALE__) && !defined(__PGI) && !defined(__OPEN64__) && !defined(__TI_COMPILER_VERSION__) && !defined(__ARMCC_VERSION) && !defined(__ICCARM__) && !defined(__IAR_SYSTEMS_ICC__) && !defined(__TASKING__) && !defined(__IBMCPP__) && !defined(__xlc__) && !defined(__xlC__) && !defined(__TINYC__) && !defined(__llvm__) && !defined(__INTEL_LLVM_COMPILER) && !defined(__INTEL_DPCPP_COMPILER) && !defined(__NVCOMPILER) && !defined(__NVCOMPILER_CUDA__) && !defined(__CUDACC__) && !defined(__HIPCC__) && !defined(__HIP_PLATFORM_HCC__) && !defined(__HIP_PLATFORM_AMD__) && !defined(__EMSCRIPTEN__) && !defined(__ZIG__)
#define _gcc
#define _gnuc
#endif
#if defined(_MSC_VER) && !defined(__clang__) && !defined(__ICC) && !defined(__ICL) && !defined(__INTEL_COMPILER) && !defined(__llvm__) && !defined(__INTEL_LLVM_COMPILER) && !defined(__INTEL_DPCPP_COMPILER)
#define _msvc
#endif
#if defined(__clang__)
#define _clang
#if defined(__apple_build_version__) && !defined(__INTEL_CLANG_COMPILER) && !defined(__INTEL_LLVM_COMPILER) && !defined(__ARMCLANG_VERSION) && !defined(__EMSCRIPTEN__) && !defined(__ZIG__)
#define _apple_clang
#endif
#if defined(_MSC_VER) && !defined(__INTEL_CLANG_COMPILER) && !defined(__INTEL_LLVM_COMPILER) && !defined(__apple_build_version__) && !defined(__EMSCRIPTEN__) && !defined(__ZIG__)
#define _clang_cl
#endif
#if defined(__EMSCRIPTEN__)
#define _emscripten
#endif
#if defined(__ZIG__)
#define _zig
#endif
#endif
#if defined(__llvm__) || defined(__clang__) || defined(__INTEL_LLVM_COMPILER) || defined(__INTEL_DPCPP_COMPILER) || defined(SYCL_LANGUAGE_VERSION) || defined(__SYCL_COMPILER_VERSION) || defined(__ARMCLANG_VERSION) || (defined(__ARM_COMPILER_VERSION) && defined(__clang__)) || defined(__NVCOMPILER) || defined(__NVCOMPILER_CUDA__) || defined(__HIPCC__) || defined(__HIP_PLATFORM_HCC__) || defined(__HIP_PLATFORM_AMD__) || defined(__EMSCRIPTEN__) || defined(__ZIG__)
#define _llvm
#endif
#if defined(__INTEL_CLANG_COMPILER) || defined(__INTEL_LLVM_COMPILER)
#if defined(__cplusplus)
#define _icpx
#else
#define _icx
#endif
#endif
#if defined(__INTEL_DPCPP_COMPILER) || defined(SYCL_LANGUAGE_VERSION) || defined(__SYCL_COMPILER_VERSION)
#define _dpcpp
#define _intel_dpcpp
#endif
#if defined(__ARMCLANG_VERSION) || (defined(__ARM_COMPILER_VERSION) && defined(__clang__))
#define _armclang
#endif
#if defined(__ICC) || defined(__ICL) || defined(__ECC)
#define _icc
#define _icl
#endif
#if defined(__ICPC)
#define _icpc
#define _icc
#endif
#if defined(__IBMC__) || defined(__IBMCPP__) || defined(__xlc__) || defined(__xlC__)
#define _ibm
#define _xlc
#endif
#if defined(__SUNPRO_C) || defined(__SUNPRO_CC)
#if !defined(__clang__) && !defined(__llvm__)
#define _sunpro
#endif
#endif
#if defined(__HP_cc) || defined(__HP_aCC)
#define _hp
#endif
#if defined(__BORLANDC__) || defined(__CODEGEARC__)
#define _borland
#endif
#if defined(__TURBOC__)
#define _turbo
#define _borland
#endif
#if defined(__WATCOMC__) || defined(__WATCOM_CPLUSPLUS__)
#define _watcom
#endif
#if defined(__TINYC__)
#define _tcc
#endif
#if defined(__PCC__)
#define _pcc
#endif
#if defined(__DCC__) && !defined(__DIAB__) && !defined(__diab__)
#define _dcc
#endif
#if defined(__KAI__) || defined(__KCC)
#define _kai
#endif
#if defined(__MWERKS__) || defined(__CWCC__)
#define _metrowerks
#define _codewarrior
#endif
#if defined(__SC__) || defined(__SYMANTEC32__)
#define _symantec
#endif
#if defined(__DMC__) || defined(__ZTC__)
#define _digitalmars
#endif
#if defined(__SCO_VERSION__) || defined(_SCO_DS)
#define _sco
#endif
#if defined(_CRAY) || defined(__crayx1)
#define _cray
#endif
#if defined(__PGI) || defined(__PGIC__) || defined(__PGIC_MINOR__)
#define _portland
#define _pgcc
#endif
#if defined(__PATHSCALE__) || defined(__PATHCC__)
#define _pathscale
#endif
#if defined(__SDCC)
#define _sdcc
#endif
#if defined(__ZAPCC__)
#define _zapcc
#endif
#if defined(__OPEN64__) || defined(__OPENCC__)
#define _open64
#endif
#if defined(__TI_COMPILER_VERSION__) || defined(__TI_GNU_ATTRIBUTE_SUPPORT__)
#define _ti
#endif
#if defined(__ARMCC_VERSION) || defined(__CC_ARM)
#if defined(__clang__)
#define _armclang
#else
#define _armcc
#endif
#endif
#if defined(__IAR_SYSTEMS_ICC__) || defined(__ICCARM__) || defined(__ICCAVR32__) || defined(__ICCRISCV__) || defined(__ICCRL78__) || defined(__ICCRX__) || defined(__ICCM16C__) || defined(__ICCM32C__) || defined(__ICCSH__) || defined(__ICCV850__) || defined(__ICCSTM8__) || defined(__ICCMSP430__) || defined(__ICC8051__)
#define _iar
#endif
#if defined(__RENESAS__)
#define _renesas
#endif
#if defined(__DIAB__) || defined(__diab__)
#define _diab
#endif
#if defined(__ghs__) || defined(__GHS_VERSION__) || defined(__GHS__) || defined(__MULTI__) || defined(__INTEGRITY)
#define _greenhills
#endif
#if defined(__KEIL__) || defined(__CA__) || defined(__C51__) || defined(__CX51__)
#define _keil
#endif
#if defined(__TASKING__) || defined(__CTC__) || defined(__CTOOL__) || defined(__CPRO__)
#define _tasking
#endif
#if defined(__MICROTEC__) || defined(_MICROTEC) || defined(__MRI__)
#define _microtec
#endif
#if defined(__CSMC__) || defined(__COSMIC__)
#define _cosmic
#endif
#if defined(__IMAGECRAFT__)
#define _imagecraft
#endif
#if defined(__ROWLEY__) || defined(__CROSSWORKS__) || defined(__CROSSWORKS_ARM__) || defined(__CROSSWORKS_AVR__) || defined(__CROSSWORKS_MSP430__)
#define _rowley
#endif
#if defined(__NVCC__) || defined(__CUDACC__)
#define _nvcc
#define _cuda
#endif
#if defined(__HIPCC__) || defined(__HIP_PLATFORM_HCC__) || defined(__HIP_PLATFORM_AMD__)
#define _hipcc
#endif
#if defined(__NVCOMPILER) || defined(__NVCOMPILER_CUDA__)
#define _nvcompiler
#define _portland
#define _pgcc
#endif
#if defined(__XC8) || defined(__XC8_VERSION__)
#define _microchip_xc8
#endif
#if defined(__XC16) || defined(__XC16_VERSION__)
#define _microchip_xc16
#endif
#if defined(__XC32) || defined(__XC32_VERSION__)
#define _microchip_xc32
#endif
#if defined(__HIGHC__) || defined(__MetaWare__) || defined(__MetaWareHighC__)
#define _metaware
#endif
#if defined(__clang_analyzer__) || defined(__COVERITY__) || defined(__cppcheck__) || defined(__clang_tidy__)
#define _clang_analyzer
#endif


#undef _windows
#undef _windows32
#undef _windows64
#undef _win
#undef _win32
#undef _win64
#undef _nt
#undef _macos
#undef _osx
#undef _ios
#undef _linux
#undef _android
#undef _unix
#undef _posix
#undef _freebsd
#undef _openbsd
#undef _netbsd
#undef _dragonfly
#undef _solaris
#undef _sunos
#undef _aix
#undef _hpux
#undef _qnx
#undef _beos
#undef _haiku
#undef _hurd
#undef _vxworks
#undef _rtems
#undef _zos
#undef _minix
#undef _lynx
#undef _plan9
#undef _syllable
#undef _skyos
#undef _morphos
#undef _amigaos
#undef _aros
#undef _palmos
#undef _nonstop
#undef _vos
#undef _openvms
#undef _integrity
#undef _freertos
#undef _tirtos
#undef _zephyr
#undef _nuttx
#undef _mbed
#undef _riot
#undef _contiki
#undef _midnightbsd
#undef _ghostbsd
#undef _trueos
#undef _hellosystem
#undef _furybsd
#undef _nomadbsd
#undef _serenityos
#undef _redox
#undef _kolibri
#undef _openindiana
#undef _illumos
#undef _smartos
#undef _omnios
#undef _tribblix
#undef _dilos
#undef _cosmopolitan
#undef _sortix
#undef _toaruos
#undef _fuchsia
#undef _reactos
#undef _freedos

#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__) || defined(_WINDOWS) || defined(__WIN32) || defined(__NT__) || defined(WIN32) || defined(WIN64) || defined(__WIN64__) || defined(_WINDOWS_) || defined(__WINDOWS_386__) || defined(__WINNT__) || defined(__WINNT) || defined(_WINNT) || defined(__NT) || defined(_NT) || defined(_WIN32_WINNT) || defined(_WIN32_WINDOWS) || defined(WINAPI_FAMILY) || defined(__WINE__) || defined(__REACTOS__) || defined(__REACTOS) || defined(REACTOS) || defined(_REACTOS) || defined(reactos)
#define _windows
#define _win
#if defined(_WIN64) || defined(__WIN64__) || defined(WIN64) || defined(_WIN64_WINNT)
#define _windows64
#define _win64
#else
#define _windows32
#define _win32
#endif
#endif
#if defined(__NT__) || defined(__NT) || defined(_NT) || defined(__WINNT__) || defined(__WINNT) || defined(_WINNT) || defined(_WIN32_WINNT) || defined(_WIN64_WINNT) || defined(NT) || defined(__nt__) || defined(__nt) || defined(nt) || defined(_nt)
#define _nt
#endif
#if defined(__APPLE__) || defined(__MACH__) || defined(__APPLE_CC__) || defined(__APPLE_CPP__) || defined(APPLE) || defined(macintosh) || defined(Macintosh) || defined(__MACOS__) || defined(__MACOSX__) || defined(__OSX__) || defined(TARGET_OS_MAC) || defined(TARGET_OS_OSX) || defined(__DARWIN__) || defined(__DARWIN) || defined(DARWIN) || defined(__APPLE) || defined(__apple__) || defined(__MACH) || defined(MACH) || defined(__MACOSX) || defined(MACOSX) || defined(__OSX) || defined(OSX) || defined(__MACOS) || defined(MACOS)
#if defined(TARGET_OS_IPHONE) || defined(TARGET_IPHONE_SIMULATOR) || defined(TARGET_OS_IOS) || defined(TARGET_OS_TV) || defined(TARGET_OS_WATCH) || defined(__IOS__) || defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__) || defined(__IPHONE_OS_VERSION_MIN_REQUIRED) || defined(__TVOS__) || defined(__WATCHOS__) || defined(__IPHONE__) || defined(__iphone__) || defined(IPHONE) || defined(__TVOS) || defined(TVOS) || defined(__WATCHOS) || defined(WATCHOS)
#define _ios
#else
#define _macos
#define _osx
#endif
#endif
#if defined(__ANDROID__) || defined(ANDROID) || defined(__ANDROID) || defined(ANDROID_API) || defined(__BIONIC__) || defined(__ANDROID_API__) || defined(ANDROID_VERSION) || defined(__android) || defined(__ANDROID_NDK__) || defined(ANDROID_NDK) || defined(__ANDROID_NDK) || defined(ANDROID_PLATFORM) || defined(__ANDROID_PLATFORM__)
#define _android
#endif
#if defined(__linux__) || defined(__linux) || defined(linux) || defined(__gnu_linux__) || defined(__LINUX__) || defined(_LINUX) || defined(LINUX) || defined(__gnu_linux) || defined(_linux) || defined(__LINUX)
#define _linux
#endif
#if defined(__GNU__) || defined(__gnu_hurd__) || defined(__GNU_HURD__) || defined(__HURD__) || defined(HURD) || defined(__hurd__) || defined(__GNU) || defined(GNU) || defined(__gnu_hurd) || defined(GNU_HURD)
#define _hurd
#endif
#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__FreeBSD) || defined(FreeBSD) || defined(__FREEBSD__) || defined(__FreeBSD_version) || defined(__FreeBSD_version__) || defined(__FreeBSD_kernel) || defined(FreeBSD_kernel) || defined(__FREEBSD) || defined(FREEBSD)
#define _freebsd
#endif
#if defined(__OpenBSD__) || defined(__OpenBSD) || defined(OpenBSD) || defined(__OPENBSD__) || defined(__OpenBSD_version__) || defined(__OpenBSD_version) || defined(OpenBSD_version) || defined(__OPENBSD) || defined(OPENBSD)
#define _openbsd
#endif
#if defined(__NetBSD__) || defined(__NetBSD) || defined(NetBSD) || defined(__NETBSD__) || defined(__NetBSD_version__) || defined(__NetBSD_version) || defined(NetBSD_version) || defined(__NETBSD) || defined(NETBSD)
#define _netbsd
#endif
#if defined(__DragonFly__) || defined(__DragonFly) || defined(DragonFly) || defined(__DRAGONFLY__) || defined(__DragonFly_version) || defined(DragonFly_version) || defined(__DRAGONFLY) || defined(DRAGONFLY)
#define _dragonfly
#endif
#if defined(__sun) || defined(sun) || defined(__sun__) || defined(__sunos__) || defined(__SunOS) || defined(__SOLARIS__) || defined(_SOLARIS) || defined(SOLARIS) || defined(__SunOS) || defined(SunOS) || defined(__sunos) || defined(sunos) || defined(__SunOS__) || defined(__SOLARIS)
#define _solaris
#define _sunos
#endif
#if defined(_AIX) || defined(__TOS_AIX__) || defined(__AIX__) || defined(_AIX43) || defined(_AIX41) || defined(_AIX32) || defined(AIX) || defined(_AIX370) || defined(__AIX) || defined(_AIX51) || defined(_AIX52) || defined(_AIX53) || defined(_AIX61) || defined(_AIX71) || defined(_AIX72) || defined(__TOS_AIX) || defined(TOS_AIX)
#define _aix
#endif
#if defined(__hpux) || defined(__hpux__) || defined(hpux) || defined(_HPUX_SOURCE) || defined(HPUX) || defined(__HPUX) || defined(_HPUX) || defined(__hp9000s300) || defined(__hp9000s700) || defined(hp9000) || defined(__hp9000)
#define _hpux
#endif
#if defined(__QNX__) || defined(__QNXNTO__) || defined(_QNX_SOURCE) || defined(QNX) || defined(__QNX) || defined(_QNX) || defined(__QNXNTO) || defined(_QNXNTO) || defined(QNXNTO) || defined(__NTO__) || defined(NTO) || defined(__NTO) || defined(_NTO)
#define _qnx
#endif
#if defined(__BEOS__) || defined(__BEOS) || defined(BEOS) || defined(__beos) || defined(beos)
#define _beos
#endif
#if defined(__HAIKU__) || defined(HAIKU) || defined(__Haiku__) || defined(__haiku) || defined(haiku) || defined(__HAIKU)
#define _haiku
#endif
#if defined(__VXWORKS__) || defined(__VXWORKS) || defined(VXWORKS) || defined(_WRS_KERNEL) || defined(_VXWORKS) || defined(vxworks) || defined(__VXWORKS) || defined(_VXWORKS)
#define _vxworks
#endif
#if defined(__rtems__) || defined(__RTEMS__) || defined(RTEMS) || defined(__rtems) || defined(_RTEMS) || defined(__rtems) || defined(_RTEMS)
#define _rtems
#endif
#if defined(__MVS__) || defined(__TOS_MVS__) || defined(__zOS__) || defined(_ZOS) || defined(__MVS) || defined(MVS) || defined(__ZOS__) || defined(_OPEN_SYS) || defined(__OS390__) || defined(__os390__) || defined(__ZOS) || defined(_ZOS)
#define _zos
#endif
#if defined(__minix__) || defined(__MINIX__) || defined(__Minix__) || defined(MINIX) || defined(__minix) || defined(_MINIX) || defined(minix) || defined(__minix3__) || defined(__MINIX3__) || defined(__Minix3__) || defined(MINIX3) || defined(__minix3) || defined(_MINIX3) || defined(minix3)
#define _minix
#endif
#if defined(__Lynx__) || defined(__LYNX__) || defined(__LynxOS__) || defined(__LYNXOS__) || defined(LynxOS) || defined(__LynxOS) || defined(_LYNXOS) || defined(lynxos) || defined(__LYNX) || defined(_LYNX) || defined(lynx)
#define _lynx
#endif
#if defined(__Plan9__) || defined(__PLAN9__) || defined(PLAN9) || defined(__plan9__) || defined(_PLAN9) || defined(plan9) || defined(__9__) || defined(__9FRONT__) || defined(__9Front__) || defined(_9FRONT) || defined(_9FRONT__)
#define _plan9
#endif
#if defined(__Syllable__) || defined(__SYLLABLE__) || defined(Syllable) || defined(__syllable__) || defined(_SYLLABLE) || defined(syllable) || defined(__SYLLABLE) || defined(_SYLLABLE)
#define _syllable
#endif
#if defined(__SkyOS__) || defined(__SKYOS__) || defined(SkyOS) || defined(__skyos__) || defined(_SKYOS) || defined(skyos) || defined(__SKYOS) || defined(_SKYOS)
#define _skyos
#endif
#if defined(__MorphOS__) || defined(__MORPHOS__) || defined(MorphOS) || defined(__morphos__) || defined(_MORPHOS) || defined(morphos) || defined(__MORPHOS) || defined(_MORPHOS)
#define _morphos
#endif
#if defined(__AmigaOS__) || defined(__AMIGAOS__) || defined(AmigaOS) || defined(__amigaos__) || defined(_AMIGAOS) || defined(amigaos) || defined(__AMIGAOS) || defined(_AMIGAOS) || defined(__amigaos4__) || defined(__AMIGAOS4__) || defined(AmigaOS4) || defined(__amigaos4) || defined(_AMIGAOS4) || defined(amigaos4)
#define _amigaos
#endif
#if defined(__AROS__) || defined(AROS) || defined(__aros__) || defined(_AROS) || defined(aros) || defined(__AROS) || defined(_AROS)
#define _aros
#endif
#if defined(__PalmOS__) || defined(__PALMOS__) || defined(PalmOS) || defined(__palmos__) || defined(_PALMOS) || defined(palmos) || defined(__PALMOS) || defined(_PALMOS)
#define _palmos
#endif
#if defined(__TANDEM__) || defined(__TANDEM) || defined(TANDEM) || defined(__NSK__) || defined(__NSK) || defined(NSK) || defined(__OSS__) || defined(__OSS) || defined(OSS) || defined(__NonStop__) || defined(__NONSTOP__) || defined(NonStop) || defined(__nonstop__) || defined(_NONSTOP) || defined(nonstop) || defined(__TNS__) || defined(__TNS) || defined(TNS) || defined(__TNS_E__) || defined(__TNS_E) || defined(TNS_E) || defined(__TNS_X__) || defined(__TNS_X) || defined(TNS_X) || defined(__TNS_V__) || defined(__TNS_V) || defined(TNS_V) || defined(__TNS_R__) || defined(__TNS_R) || defined(TNS_R) || defined(__TNS_C__) || defined(__TNS_C) || defined(TNS_C) || defined(__TNS_L__) || defined(__TNS_L) || defined(TNS_L) || defined(__TNS_S__) || defined(__TNS_S) || defined(TNS_S) || defined(__TNS_T__) || defined(__TNS_T) || defined(TNS_T) || defined(__TNS_O__) || defined(__TNS_O) || defined(TNS_O) || defined(__TNS_I__) || defined(__TNS_I) || defined(TNS_I) || defined(__TNS_N__) || defined(__TNS_N) || defined(TNS_N) || defined(__TNS_U__) || defined(__TNS_U) || defined(TNS_U)
#define _nonstop
#endif
#if defined(__VOS__) || defined(__VOS) || defined(VOS) || defined(__vos__) || defined(_VOS) || defined(vos) || defined(__Stratus__) || defined(__STRATUS__) || defined(Stratus) || defined(__stratus__) || defined(_STRATUS) || defined(stratus)
#define _vos
#endif
#if defined(__VMS__) || defined(__VMS) || defined(VMS) || defined(__vms__) || defined(_VMS) || defined(vms) || defined(__OPENVMS__) || defined(__OpenVMS__) || defined(OpenVMS) || defined(__openvms__) || defined(_OPENVMS) || defined(openvms) || defined(__OPENVMS) || defined(_OPENVMS)
#define _openvms
#endif
#if defined(__INTEGRITY__) || defined(__INTEGRITY) || defined(INTEGRITY) || defined(__integrity__) || defined(_INTEGRITY) || defined(integrity) || defined(__INTEGRITY) || defined(_INTEGRITY)
#define _integrity
#endif
#if defined(__FREERTOS__) || defined(__FreeRTOS__) || defined(FreeRTOS) || defined(__freertos__) || defined(_FREERTOS) || defined(freertos) || defined(__FREERTOS) || defined(_FREERTOS)
#define _freertos
#endif
#if defined(__TIRTOS__) || defined(__TI_RTOS__) || defined(TI_RTOS) || defined(__tirtos__) || defined(_TIRTOS) || defined(tirtos) || defined(__TI_RTOS) || defined(_TI_RTOS)
#define _tirtos
#endif
#if defined(__ZEPHYR__) || defined(__Zephyr__) || defined(Zephyr) || defined(__zephyr__) || defined(_ZEPHYR) || defined(zephyr) || defined(__ZEPHYR) || defined(_ZEPHYR)
#define _zephyr
#endif
#if defined(__NUTTX__) || defined(__NuttX__) || defined(NuttX) || defined(__nuttx__) || defined(_NUTTX) || defined(nuttx) || defined(__NUTTX) || defined(_NUTTX)
#define _nuttx
#endif
#if defined(__MBED__) || defined(__Mbed__) || defined(Mbed) || defined(__mbed__) || defined(_MBED) || defined(mbed) || defined(__MBEDOS__) || defined(__MbedOS__) || defined(MbedOS) || defined(__mbedos__) || defined(_MBEDOS) || defined(mbedos)
#define _mbed
#endif
#if defined(__RIOT__) || defined(__Riot__) || defined(RIOT) || defined(__riot__) || defined(_RIOT) || defined(riot) || defined(__RIOT) || defined(_RIOT)
#define _riot
#endif
#if defined(__CONTIKI__) || defined(__Contiki__) || defined(Contiki) || defined(__contiki__) || defined(_CONTIKI) || defined(contiki) || defined(__CONTIKI) || defined(_CONTIKI)
#define _contiki
#endif
#if defined(__MidnightBSD__) || defined(__MIDNIGHTBSD__) || defined(MidnightBSD) || defined(__midnightbsd__) || defined(_MIDNIGHTBSD) || defined(midnightbsd) || defined(__MIDNIGHTBSD) || defined(_MIDNIGHTBSD)
#define _midnightbsd
#endif
#if defined(__GhostBSD__) || defined(__GHOSTBSD__) || defined(GhostBSD) || defined(__ghostbsd__) || defined(_GHOSTBSD) || defined(ghostbsd) || defined(__GHOSTBSD) || defined(_GHOSTBSD)
#define _ghostbsd
#endif
#if defined(__TrueOS__) || defined(__TRUEOS__) || defined(TrueOS) || defined(__trueos__) || defined(_TRUEOS) || defined(trueos) || defined(__TRUEOS) || defined(_TRUEOS)
#define _trueos
#endif
#if defined(__HelloSystem__) || defined(__HELLOSYSTEM__) || defined(HelloSystem) || defined(__hellosystem__) || defined(_HELLOSYSTEM) || defined(hellosystem) || defined(__HELLOSYSTEM) || defined(_HELLOSYSTEM)
#define _hellosystem
#endif
#if defined(__FuryBSD__) || defined(__FURYBSD__) || defined(FuryBSD) || defined(__furybsd__) || defined(_FURYBSD) || defined(furybsd) || defined(__FURYBSD) || defined(_FURYBSD)
#define _furybsd
#endif
#if defined(__NomadBSD__) || defined(__NOMADBSD__) || defined(NomadBSD) || defined(__nomadbsd__) || defined(_NOMADBSD) || defined(nomadbsd) || defined(__NOMADBSD) || defined(_NOMADBSD)
#define _nomadbsd
#endif
#if defined(__SerenityOS__) || defined(__SERENITYOS__) || defined(SerenityOS) || defined(__serenityos__) || defined(_SERENITYOS) || defined(serenityos) || defined(__SERENITYOS) || defined(_SERENITYOS)
#define _serenityos
#endif
#if defined(__Redox__) || defined(__REDOX__) || defined(Redox) || defined(__redox__) || defined(_REDOX) || defined(redox) || defined(__REDOX) || defined(_REDOX)
#define _redox
#endif
#if defined(__Kolibri__) || defined(__KOLIBRI__) || defined(Kolibri) || defined(__kolibri__) || defined(_KOLIBRI) || defined(kolibri) || defined(__KOLIBRI) || defined(_KOLIBRI)
#define _kolibri
#endif
#if defined(__OpenIndiana__) || defined(__OPENINDIANA__) || defined(OpenIndiana) || defined(__openindiana__) || defined(_OPENINDIANA) || defined(openindiana) || defined(__OPENINDIANA) || defined(_OPENINDIANA)
#define _openindiana
#endif
#if defined(__illumos__) || defined(__ILLUMOS__) || defined(illumos) || defined(__illumos__) || defined(_ILLUMOS) || defined(illumos) || defined(__ILLUMOS) || defined(_ILLUMOS)
#define _illumos
#endif
#if defined(__SmartOS__) || defined(__SMARTOS__) || defined(SmartOS) || defined(__smartos__) || defined(_SMARTOS) || defined(smartos) || defined(__SMARTOS) || defined(_SMARTOS)
#define _smartos
#endif
#if defined(__OmniOS__) || defined(__OMNIOS__) || defined(OmniOS) || defined(__omnios__) || defined(_OMNIOS) || defined(omnios) || defined(__OMNIOS) || defined(_OMNIOS)
#define _omnios
#endif
#if defined(__Tribblix__) || defined(__TRIBBLIX__) || defined(Tribblix) || defined(__tribblix__) || defined(_TRIBBLIX) || defined(tribblix) || defined(__TRIBBLIX) || defined(_TRIBBLIX)
#define _tribblix
#endif
#if defined(__Dilos__) || defined(__DILOS__) || defined(Dilos) || defined(__dilos__) || defined(_DILOS) || defined(dilos) || defined(__DILOS) || defined(_DILOS)
#define _dilos
#endif
#if defined(__Cosmopolitan__) || defined(__COSMOPOLITAN__) || defined(Cosmopolitan) || defined(__cosmopolitan__) || defined(_COSMOPOLITAN) || defined(cosmopolitan) || defined(__COSMOPOLITAN) || defined(_COSMOPOLITAN)
#define _cosmopolitan
#endif
#if defined(__Sortix__) || defined(__SORTIX__) || defined(Sortix) || defined(__sortix__) || defined(_SORTIX) || defined(sortix) || defined(__SORTIX) || defined(_SORTIX)
#define _sortix
#endif
#if defined(__ToaruOS__) || defined(__TOARUOS__) || defined(ToaruOS) || defined(__toaruos__) || defined(_TOARUOS) || defined(toaruos) || defined(__TOARUOS) || defined(_TOARUOS)
#define _toaruos
#endif
#if defined(__Fuchsia__) || defined(__FUCHSIA__) || defined(Fuchsia) || defined(__fuchsia__) || defined(_FUCHSIA) || defined(fuchsia) || defined(__FUCHSIA) || defined(_FUCHSIA)
#define _fuchsia
#endif
#if defined(__FreeDOS__) || defined(__FREEDOS__) || defined(FreeDOS) || defined(__freedos__) || defined(_FREEDOS) || defined(freedos) || defined(__FREEDOS) || defined(_FREEDOS)
#define _freedos
#endif
#if defined(__REACTOS__) || defined(__REACTOS) || defined(REACTOS) || defined(_REACTOS) || defined(reactos)
#define _reactos
#endif
#if defined(_macos) || defined(_ios) || defined(_freebsd) || defined(_openbsd) || defined(_netbsd) || defined(_dragonfly) || defined(_solaris) || defined(_aix) || defined(_hpux) || defined(_qnx) || defined(_beos) || defined(_haiku) || defined(_hurd) || defined(_vxworks) || defined(_rtems) || defined(_zos) || defined(_minix) || defined(_lynx) || defined(_plan9) || defined(_syllable) || defined(_skyos) || defined(_nonstop) || defined(_vos) || defined(_integrity) || defined(_linux) || defined(_android) || defined(_midnightbsd) || defined(_ghostbsd) || defined(_trueos) || defined(_hellosystem) || defined(_furybsd) || defined(_nomadbsd) || defined(_serenityos) || defined(_redox) || defined(_openindiana) || defined(_illumos) || defined(_smartos) || defined(_omnios) || defined(_tribblix) || defined(_dilos) || defined(_cosmopolitan) || defined(_sortix) || defined(_toaruos) || defined(_fuchsia) || defined(__unix__) || defined(__unix) || defined(unix) || defined(__UNIX__) || defined(__UNIX) || defined(UNIX)
#define _unix
#endif
#if defined(_POSIX_VERSION) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE) || defined(__POSIX__) || defined(__posix__) || defined(POSIX) || defined(_POSIX) || defined(__POSIX) || defined(_POSIX_) || defined(__posix) || defined(posix) || defined(__POSIX_VISIBLE) || defined(_XOPEN_SOURCE) || defined(__XOPEN_SOURCE) || defined(_XOPEN_VERSION) || defined(__XOPEN_VERSION) || defined(_XOPEN_SOURCE_EXTENDED) || defined(__XOPEN_SOURCE_EXTENDED)
#define _posix
#endif


#undef _x64
#undef _x32
#undef _x16
#undef _x8
#undef _x86
#undef _x86_64
#undef _amd
#undef _amd64
#undef _amd32
#undef _intel
#undef _intel64
#undef _intel32
#undef _i386
#undef _ia64
#undef _arm
#undef _arm64
#undef _arm32
#undef _aarch64
#undef _aarch32
#undef _thumb
#undef _thumb2
#undef _mips
#undef _mips64
#undef _mips32
#undef _powerpc
#undef _powerpc64
#undef _powerpc32
#undef _ppc
#undef _ppc64
#undef _ppc32
#undef _sparc
#undef _sparc64
#undef _sparc32
#undef _s390
#undef _s390x
#undef _riscv
#undef _riscv64
#undef _riscv32
#undef _loong
#undef _loongarch
#undef _loongarch64
#undef _avr
#undef _avr8
#undef _msp430
#undef _msp430x
#undef _esp
#undef _esp32
#undef _esp8266
#undef _xtensa
#undef _dsp
#undef _risc
#undef _risc_v
#undef _cisc
#undef _vliw
#undef _epic
#undef _superscalar
#undef _out_of_order
#undef _in_order
#undef _smp
#undef _numa

#if defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || defined(_M_AMD64) || defined(__amd64__) || defined(__amd64) || defined(__x64_64__)
#define _x64
#define _x86
#define _x86_64
#define _amd64
#define _intel64
#endif
#if defined(__i386__) || defined(__i386) || defined(_M_IX86) || defined(_X86_) || defined(__X86__) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) || defined(_M_I386) || defined(__i486__) || defined(__i486) || defined(__i586__) || defined(__i586) || defined(__i686__) || defined(__i686)
#define _x32
#define _x86
#define _amd32
#define _intel32
#endif
#if defined(_amd64) || defined(_amd32)
#define _amd
#endif
#if defined(_intel64) || defined(_intel32)
#define _intel
#endif
#if defined(__aarch64__) || defined(__aarch64) || defined(_M_ARM64) || defined(__ARM64__) || defined(__arm64__) || defined(__arm64) || defined(_M_ARM64EC)
#define _arm
#define _arm64
#define _aarch64
#define _x64
#endif
#if defined(__arm__) || defined(__arm) || defined(_M_ARM) || defined(__ARM__) || defined(__ARM) || defined(_ARM) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(__thumb__) || defined(__thumb) || defined(_M_ARMT) || defined(__THUMB__) || defined(__THUMB) || defined(_THUMB)
#define _arm
#define _arm32
#define _aarch32
#define _x32
#endif
#if defined(__mips__) || defined(__mips) || defined(__MIPS__) || defined(__MIPS) || defined(_MIPS) || defined(__mips64__) || defined(__mips64)
#define _mips
#if defined(__mips64__) || defined(__mips64)
#define _mips64
#define _x64
#else
#define _mips32
#define _x32
#endif
#endif
#if defined(__powerpc__) || defined(__powerpc) || defined(__powerpc64__) || defined(__powerpc64) || defined(__ppc__) || defined(__ppc) || defined(__ppc64__) || defined(__ppc64) || defined(_M_PPC) || defined(_ARCH_PPC) || defined(_ARCH_PPC64) || defined(__PPC__) || defined(__PPC) || defined(_PPC) || defined(__PPC64__) || defined(__PPC64) || defined(_PPC64)
#define _powerpc
#define _ppc
#if defined(__powerpc64__) || defined(__powerpc64) || defined(__ppc64__) || defined(__ppc64) || defined(_ARCH_PPC64) || defined(__PPC64__) || defined(__PPC64) || defined(_PPC64)
#define _powerpc64
#define _ppc64
#define _x64
#else
#define _powerpc32
#define _ppc32
#define _x32
#endif
#endif
#if defined(__sparc__) || defined(__sparc) || defined(__SPARC__) || defined(__SPARC) || defined(_SPARC) || defined(__sparcv9__) || defined(__sparcv9) || defined(__sparc64__) || defined(__sparc64)
#define _sparc
#if defined(__sparcv9__) || defined(__sparcv9) || defined(__sparc64__) || defined(__sparc64) || defined(__arch64__)
#define _sparc64
#define _x64
#else
#define _sparc32
#define _x32
#endif
#endif
#if defined(__s390__) || defined(__s390) || defined(__s390x__) || defined(__s390x) || defined(__zarch__) || defined(__zarch) || defined(__S390__) || defined(__S390) || defined(_S390) || defined(__S390X__) || defined(__S390X) || defined(_S390X)
#define _s390
#if defined(__s390x__) || defined(__s390x) || defined(__zarch__) || defined(__zarch) || defined(__S390X__) || defined(__S390X) || defined(_S390X)
#define _s390x
#define _x64
#else
#define _x32
#endif
#endif
#if defined(__riscv) || defined(__riscv__) || defined(__RISCV__) || defined(__RISCV) || defined(_RISCV) || defined(__riscv64__) || defined(__riscv64) || defined(__riscv32__) || defined(__riscv32)
#define _riscv
#define _risc_v
#if defined(__riscv64__) || defined(__riscv64)
#define _riscv64
#define _x64
#elif defined(__riscv32__) || defined(__riscv32)
#define _riscv32
#define _x32
#endif
#endif
#if defined(__loongarch__) || defined(__loongarch) || defined(__loongarch64__) || defined(__loongarch64) || defined(_LOONGARCH) || defined(_LOONGARCH64)
#define _loong
#define _loongarch
#define _loongarch64
#define _x64
#endif
#if defined(__AVR__) || defined(__AVR) || defined(_AVR) || defined(__AVR_ARCH__) || defined(__avr__) || defined(__avr)
#define _avr
#define _avr8
#define _x8
#endif
#if defined(__MSP430__) || defined(__MSP430) || defined(_MSP430) || defined(__msp430__) || defined(__msp430)
#define _msp430
#define _msp430x
#define _x16
#endif
#if defined(__xtensa__) || defined(__xtensa) || defined(__XTENSA__) || defined(__XTENSA) || defined(_XTENSA) || defined(__ESP32__) || defined(__ESP32) || defined(_ESP32) || defined(__esp32__) || defined(__esp32) || defined(__ESP8266__) || defined(__ESP8266) || defined(_ESP8266) || defined(__esp8266__) || defined(__esp8266)
#define _xtensa
#if defined(__ESP32__) || defined(__ESP32) || defined(_ESP32) || defined(__esp32__) || defined(__esp32)
#define _esp32
#define _esp
#define _x32
#endif
#if defined(__ESP8266__) || defined(__ESP8266) || defined(_ESP8266) || defined(__esp8266__) || defined(__esp8266)
#define _esp8266
#define _esp
#define _x32
#endif
#endif
#if defined(_arm) || defined(_mips) || defined(_powerpc) || defined(_ppc) || defined(_sparc) || defined(_riscv) || defined(_loongarch)
#define _risc
#endif
#if defined(_x86) || defined(_x86_64) || defined(_s390)
#define _cisc
#endif
#if defined(__SMP__) || defined(__SMP) || defined(_SMP) || defined(__smp__) || defined(__smp) || defined(__MULTIPROCESSOR__) || defined(__MULTIPROCESSOR) || defined(_MULTIPROCESSOR) || defined(__multiprocessor__) || defined(__multiprocessor)
#define _smp
#endif
#if defined(__NUMA__) || defined(__NUMA) || defined(_NUMA) || defined(__numa__) || defined(__numa)
#define _numa
#endif


#undef _little_endian
#undef _big_endian
#undef _mixed_endian
#undef _endian_little
#undef _endian_big
#undef _endian_mixed

#if defined(__BYTE_ORDER__) && defined(__ORDER_LITTLE_ENDIAN__) && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)
#define _little_endian
#define _endian_little
#endif
#if defined(__BYTE_ORDER__) && defined(__ORDER_BIG_ENDIAN__) && (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
#define _big_endian
#define _endian_big
#endif
#if defined(__BYTE_ORDER__) && defined(__ORDER_PDP_ENDIAN__) && (__BYTE_ORDER__ == __ORDER_PDP_ENDIAN__)
#define _mixed_endian
#define _endian_mixed
#endif


#undef _m_e
#undef _m_log2e
#undef _m_log10e
#undef _m_ln2
#undef _m_ln10
#undef _m_pi
#undef _m_pi_2
#undef _m_pi_4
#undef _m_1_pi
#undef _m_2_pi
#undef _m_2_sqrtpi
#undef _m_sqrt2
#undef _m_sqrt1_2
#undef _m_euler
#undef _m_gamma
#undef _m_phi
#undef _m_tau
#undef _m_deg2rad
#undef _m_rad2deg
#undef _m_lnpi
#undef _m_log2pi
#undef _m_log10pi
#undef _m_sqrtpi
#undef _m_cbrt2
#undef _m_cbrt3
#undef _m_inv_pi
#undef _m_inv_2pi
#undef _m_sqrt3
#undef _m_sqrt5
#undef _m_ln3
#undef _m_ln4
#undef _m_ln5
#undef _m_log10_2
#undef _m_log10_3
#undef _m_log10_4
#undef _m_log10_5
#undef _m_sqrt6
#undef _m_sqrt7
#undef _m_sqrt8
#undef _m_sqrt10
#undef _m_cbrt4
#undef _m_cbrt5
#undef _m_inv_sqrt2
#undef _m_inv_sqrt3
#undef _m_ln6
#undef _m_ln7
#undef _m_ln8
#undef _m_ln9
#undef _m_log10_6
#undef _m_log10_7
#undef _m_log10_8
#undef _m_log10_9
#undef _m_1_ln2
#undef _m_1_ln10
#undef _m_pi_2_sqrt2
#undef _m_sqrt2_over_2
#undef _m_sqrt3_over_2
#undef _m_ln2pi
#undef _m_ln_sqrt2pi
#undef _m_golden
#undef _m_catalan
#undef _m_apery
#undef _m_omega

#define _m_e         2.718281828459045
#define _m_log2e     1.442695040888963
#define _m_log10e    0.434294481903252
#define _m_ln2       0.693147180559945
#define _m_ln10      2.302585092994046
#define _m_pi        3.141592653589793
#define _m_pi_2      1.570796326794897
#define _m_pi_4      0.785398163397448
#define _m_1_pi      0.318309886183791
#define _m_2_pi      0.636619772367581
#define _m_2_sqrtpi  1.128379167095513
#define _m_sqrt2     1.414213562373095
#define _m_sqrt1_2   0.707106781186548
#define _m_euler     0.577215664901533
#define _m_phi       1.618033988749895
#define _m_tau       6.283185307179586
#define _m_deg2rad   0.017453292519943
#define _m_rad2deg  57.295779513082321
#define _m_lnpi      1.144729885849400
#define _m_log2pi    1.651496129472319
#define _m_log10pi   0.497149872694134
#define _m_sqrtpi    1.772453850905516
#define _m_cbrt2     1.259921049894873
#define _m_cbrt3     1.442249570307408
#define _m_inv_pi    0.318309886183791
#define _m_inv_2pi   0.159154943091895
#define _m_sqrt3     1.732050807568877
#define _m_sqrt5     2.236067977499790
#define _m_ln3       1.098612288668110
#define _m_ln4       1.386294361119891
#define _m_ln5       1.609437912434100
#define _m_log10_2   0.301029995663981
#define _m_log10_3   0.477121254719662
#define _m_log10_4   0.602059991327962
#define _m_log10_5   0.698970004336019
#define _m_sqrt6     2.449489742783178
#define _m_sqrt7     2.645751311064591
#define _m_sqrt8     2.828427124746190
#define _m_sqrt10    3.162277660168379
#define _m_cbrt4     1.587401051568199
#define _m_cbrt5     1.709975946676697
#define _m_inv_sqrt2 0.707106781186548
#define _m_inv_sqrt3 0.577350269189626
#define _m_ln6       1.791759469228055
#define _m_ln7       1.945910149055313
#define _m_ln8       2.079441541679836
#define _m_ln9       2.197224577336220
#define _m_log10_6   0.778151250383644
#define _m_log10_7   0.845098040014257
#define _m_log10_8   0.903089986991944
#define _m_log10_9   0.954242509439325
#define _m_1_ln2     1.442695040888963
#define _m_1_ln10    0.434294481903252
#define _m_pi_2_sqrt2    2.221441469079183
#define _m_sqrt2_over_2  0.707106781186548
#define _m_sqrt3_over_2  0.866025403784439
#define _m_ln2pi     1.837877066409345
#define _m_ln_sqrt2pi    0.918938533204673
#define _m_golden    1.618033988749895
#define _m_catalan   0.915965594177219
#define _m_apery     1.202056903159594
#define _m_omega     0.567143290409784


#undef _i8
#undef _u8
#undef _i16
#undef _u16
#undef _i32
#undef _u32
#undef _i64
#undef _u64
#undef i8
#undef u8
#undef i16
#undef u16
#undef i32
#undef u32
#undef i64
#undef u64

#define _i8 signed char
#define _u8 unsigned char
#define _i16 signed short int
#define _u16 unsigned short int
#if defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 4
#define _i32 signed long int
#define _u32 unsigned long int
#elif defined(__SIZEOF_INT__) && __SIZEOF_INT__ == 4
#define _i32 signed int
#define _u32 unsigned int
#else
#define _i32 signed long int
#define _u32 unsigned long int
#endif
#if defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 8
#define _i64 signed long int
#define _u64 unsigned long int
#elif defined(__SIZEOF_LONG_LONG__) && __SIZEOF_LONG_LONG__ == 8
#define _i64 signed long long int
#define _u64 unsigned long long int
#elif defined(_MSC_VER) && defined(_WIN64)
#define _i64 signed __int64
#define _u64 unsigned __int64
#endif
#define i8 _i8
#define u8 _u8
#define i16 _i16
#define u16 _u16
#define i32 _i32
#define u32 _u32
#ifdef _u64
#define i64 _i64
#define u64 _u64
#endif


#undef _f16
#undef _f32
#undef _f64
#undef _f80
#undef _f128
#undef f16
#undef f32
#undef f64
#undef f80
#undef f128

#if defined(__FLT16_MIN__) || defined(__FLT16_MAX__)
#define _f16 _Float16
#endif
#define _f32 float
#define _f64 double
#if defined(__SIZEOF_LONG_DOUBLE__) && __SIZEOF_LONG_DOUBLE__ == 16 && defined(__LDBL_MANT_DIG__) && __LDBL_MANT_DIG__ == 64
#define _f80 long double
#elif defined(__FLOAT80__)
#define _f80 __float80
#endif
#if defined(__SIZEOF_LONG_DOUBLE__) && __SIZEOF_LONG_DOUBLE__ == 16 && defined(__LDBL_MANT_DIG__) && __LDBL_MANT_DIG__ == 113
#define _f128 long double
#elif defined(__FLOAT128__)
#define _f128 __float128
#endif
#ifdef _f16
#define f16 _f16
#endif
#define f32 _f32
#define f64 _f64
#ifdef _f80
#define f80 _f80
#endif
#ifdef _f128
#define f128 _f128
#endif


#undef _imax
#undef _umax
#undef imax
#undef umax

#ifdef _u64
#define _imax _i64
#define _umax _u64
#else
#define _imax _i32
#define _umax _u32
#endif
#define imax _imax
#define umax _umax


#undef _i8_max
#undef _u8_max
#undef _i16_max
#undef _u16_max
#undef _i32_max
#undef _u32_max
#undef _i64_max
#undef _u64_max

#define _i8_max  127
#define _u8_max  255
#define _i16_max 32767
#define _u16_max 65535
#define _i32_max 2147483647
#define _u32_max 4294967295
#ifdef _u64
#define _i64_max  9223372036854775807ULL
#define _u64_max 18446744073709551615ULL
#endif


#undef _lcg32_mult
#undef _lcg32_inc
#undef _lcg32_a
#undef _lcg32_c
#undef _lcg64_mult
#undef _lcg64_inc
#undef _lcg64_a
#undef _lcg64_c
#undef _pcg32_mult
#undef _pcg32_inc
#undef _pcg32_a
#undef _pcg32_c
#undef _pcg64_mult
#undef _pcg64_inc
#undef _pcg64_a
#undef _pcg64_c
#undef _sha1_h0
#undef _sha1_h1
#undef _sha1_h2
#undef _sha1_h3
#undef _sha1_h4
#undef _sha256_h0
#undef _sha256_h1
#undef _sha256_h2
#undef _sha256_h3
#undef _sha256_h4
#undef _sha256_h5
#undef _sha256_h6
#undef _sha256_h7
#undef _sha512_h0
#undef _sha512_h1
#undef _sha512_h2
#undef _sha512_h3
#undef _sha512_h4
#undef _sha512_h5
#undef _sha512_h6
#undef _sha512_h7
#undef _md5_a
#undef _md5_b
#undef _md5_c
#undef _md5_d

#define _md5_a       0x67452301U
#define _md5_b       0xefcdab89U
#define _md5_c       0x98badcfeU
#define _md5_d       0x10325476U
#define _sha1_h0     0x67452301U
#define _sha1_h1     0xefcdab89U
#define _sha1_h2     0x98badcfeU
#define _sha1_h3     0x10325476U
#define _sha1_h4     0xc3d2e1f0U
#define _sha256_h0   0x6a09e667U
#define _sha256_h1   0xbb67ae85U
#define _sha256_h2   0x3c6ef372U
#define _sha256_h3   0xa54ff53aU
#define _sha256_h4   0x510e527fU
#define _sha256_h5   0x9b05688cU
#define _sha256_h6   0x1f83d9abU
#define _sha256_h7   0x5be0cd19U
#define _pcg32_mult  747796405U
#define _pcg32_inc   2891336453U
#define _pcg32_a     747796405U
#define _pcg32_c     2891336453U
#define _lcg32_mult     1103515245U
#define _lcg32_inc     12345U
#define _lcg32_a     1103515245U
#define _lcg32_c     12345U
#if defined(_u64) && _u64_max >= 18446744073709551615ULL
#define _lcg64_mult     6364136223846793005ULL
#define _lcg64_inc     1442695040888963407ULL
#define _lcg64_a     6364136223846793005ULL
#define _lcg64_c     1442695040888963407ULL
#define _pcg64_mult  6364136223846793005ULL
#define _pcg64_inc   1442695040888963407ULL
#define _pcg64_a     6364136223846793005ULL
#define _pcg64_c     1442695040888963407ULL
#define _sha512_h0   0x6a09e667f3bcc908ULL
#define _sha512_h1   0xbb67ae8584caa73bULL
#define _sha512_h2   0x3c6ef372fe94f82bULL
#define _sha512_h3   0xa54ff53a5f1d36f1ULL
#define _sha512_h4   0x510e527fade682d1ULL
#define _sha512_h5   0x9b05688c2b3e6c1fULL
#define _sha512_h6   0x1f83d9abfb41bd6bULL
#define _sha512_h7   0x5be0cd19137e2179ULL
#endif


_umax _rand = 1;

#undef _lcg_random
#undef _lcg_random64
#undef _lcg_random32
#undef _lcg_random16
#undef _lcg_random8
#undef _lcg_random_bit
#undef _lcg_brandom

#define _lcg_random32 (_rand = _rand * _lcg32_a + _lcg32_c)
#ifdef _u64
#define _lcg_random64 (_rand = _rand * _lcg64_a + _lcg64_c)
#define _lcg_random _lcg_random64
#else
#define _lcg_random _lcg_random32
#endif
#define _lcg_random16 ((_u16)_lcg_random)
#define _lcg_random8 ((_u8)_lcg_random)
#define _lcg_random_bit ((_lcg_random >> (_rand & 15)) & 1)
#define _lcg_brandom _lcg_random_bit


#undef _pcg_random
#undef _pcg_random64
#undef _pcg_random32
#undef _pcg_random16
#undef _pcg_random8
#undef _pcg_random_bit
#undef _pcg_brandom

#define _pcg_random32 (_rand = _rand * _pcg32_a + _pcg32_c, (_u32)((((_rand >> 18) ^ _rand) >> 27) >> (_rand >> 59) | (((_rand >> 18) ^ _rand) >> 27) << ((-(_rand >> 59)) & 31)))
#ifdef _u64
#define _pcg_random64 (_rand = _rand * _pcg64_a + _pcg64_c, (_u64)((((_rand >> 29) ^ _rand) >> 58) >> (_u64)(_rand >> 122) | (((_rand >> 29) ^ _rand) >> 58) << ((-(_u64)(_rand >> 122)) & 63)))
#define _pcg_random _pcg_random64
#else
#define _pcg_random _pcg_random32
#endif
#define _pcg_random16 ((_i16)_pcg_random)
#define _pcg_random8 ((_i8)_pcg_random)
#define _pcg_random_bit ((_pcg_random >> (_rand & 15)) & 1)
#define _pcg_brandom _pcg_random_bit


#undef _random
#undef _random64
#undef _random32
#undef _random16
#undef _random8
#undef _random_bit
#undef _brandom

#define _random _pcg_random
#ifdef _u64
#define _random64 _pcg_random64
#endif
#define _random32 _pcg_random32
#define _random16 _pcg_random16
#define _random8 _pcg_random8
#define _random_bit _pcg_random_bit
#define _brandom _pcg_random_bit

#endif
