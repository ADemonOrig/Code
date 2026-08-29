#ifndef _local_h_
#define _local_h_


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


#undef _pi
#undef _e
#undef _log2e
#undef _log10e
#undef _ln2
#undef _ln10
#undef _pi_2
#undef _pi_4
#undef _1_pi
#undef _2_pi
#undef _2_sqrtpi
#undef _sqrt2
#undef _sqrt1_2
#undef _euler
#undef _gamma
#undef _phi
#undef _tau
#undef _deg2rad
#undef _rad2deg
#undef _lnpi
#undef _log2pi
#undef _log10pi
#undef _sqrtpi
#undef _cbrt2
#undef _cbrt3
#undef _inv_pi
#undef _inv_2pi
#undef _sqrt3
#undef _sqrt5
#undef _ln3
#undef _ln4
#undef _ln5
#undef _log10_2
#undef _log10_3
#undef _log10_4
#undef _log10_5
#undef _sqrt6
#undef _sqrt7
#undef _sqrt8
#undef _sqrt10
#undef _cbrt4
#undef _cbrt5
#undef _inv_sqrt2
#undef _inv_sqrt3
#undef _ln6
#undef _ln7
#undef _ln8
#undef _ln9
#undef _log10_6
#undef _log10_7
#undef _log10_8
#undef _log10_9
#undef _1_ln2
#undef _1_ln10
#undef _pi_2_sqrt2
#undef _sqrt2_over_2
#undef _sqrt3_over_2
#undef _ln2pi
#undef _ln_sqrt2pi
#undef _golden
#undef _catalan
#undef _apery
#undef _omega

#define _pi            3.141592653589793
#define _e             2.718281828459045
#define _log2e         1.442695040888963
#define _log10e        0.434294481903252
#define _ln2           0.693147180559945
#define _ln10          2.302585092994046
#define _pi_2          1.570796326794897
#define _pi_4          0.785398163397448
#define _1_pi          0.318309886183791
#define _2_pi          0.636619772367581
#define _2_sqrtpi      1.128379167095513
#define _sqrt2         1.414213562373095
#define _sqrt1_2       0.707106781186548
#define _euler         0.577215664901533
#define _phi           1.618033988749895
#define _tau           6.283185307179586
#define _deg2rad       0.017453292519943
#define _rad2deg      57.295779513082321
#define _lnpi          1.144729885849400
#define _log2pi        1.651496129472319
#define _log10pi       0.497149872694134
#define _sqrtpi        1.772453850905516
#define _cbrt2         1.259921049894873
#define _cbrt3         1.442249570307408
#define _inv_pi        0.318309886183791
#define _inv_2pi       0.159154943091895
#define _sqrt3         1.732050807568877
#define _sqrt5         2.236067977499790
#define _ln3           1.098612288668110
#define _ln4           1.386294361119891
#define _ln5           1.609437912434100
#define _log10_2       0.301029995663981
#define _log10_3       0.477121254719662
#define _log10_4       0.602059991327962
#define _log10_5       0.698970004336019
#define _sqrt6         2.449489742783178
#define _sqrt7         2.645751311064591
#define _sqrt8         2.828427124746190
#define _sqrt10        3.162277660168379
#define _cbrt4         1.587401051568199
#define _cbrt5         1.709975946676697
#define _inv_sqrt2     0.707106781186548
#define _inv_sqrt3     0.577350269189626
#define _ln6           1.791759469228055
#define _ln7           1.945910149055313
#define _ln8           2.079441541679836
#define _ln9           2.197224577336220
#define _log10_6       0.778151250383644
#define _log10_7       0.845098040014257
#define _log10_8       0.903089986991944
#define _log10_9       0.954242509439325
#define _1_ln2         1.442695040888963
#define _1_ln10        0.434294481903252
#define _pi_2_sqrt2    2.221441469079183
#define _sqrt2_over_2  0.707106781186548
#define _sqrt3_over_2  0.866025403784439
#define _ln2pi         1.837877066409345
#define _ln_sqrt2pi    0.918938533204673
#define _golden        1.618033988749895
#define _catalan       0.915965594177219
#define _apery         1.202056903159594
#define _omega         0.567143290409784


#undef _i8
#undef _u8
#undef _i16
#undef _u16
#undef _i32
#undef _u32
#undef _i64
#undef _u64

#define _i8  signed char
#define _u8  unsigned char
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


#undef i8
#undef u8
#undef i16
#undef u16
#undef i32
#undef u32
#undef i64
#undef u64

#define i8  _i8
#define u8  _u8
#define i16 _i16
#define u16 _u16
#define i32 _i32
#define u32 _u32
#ifdef _u64
#define i64 _i64
#define u64 _u64
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
#define imax  _imax
#define umax  _umax


#undef _f16
#undef _f32
#undef _f64
#undef _f80
#undef _f128

#if defined(__FLT16_MIN__) || defined(__FLT16_MAX__)
#define _f16  _Float16
#endif
#if defined(__SIZEOF_FLOAT__) && __SIZEOF_FLOAT__ == 4
#define _f32  float
#endif
#if defined(__SIZEOF_DOUBLE__) && __SIZEOF_DOUBLE__ == 8
#define _f64  double
#elif defined(__SIZEOF_LONG_DOUBLE__) && __SIZEOF_LONG_DOUBLE__ == 16 && defined(__LDBL_MANT_DIG__) && __LDBL_MANT_DIG__ == 64
#define _f80  long double
#elif defined(__FLOAT80__)
#define _f80  __float80
#endif
#if defined(__SIZEOF_LONG_DOUBLE__) && __SIZEOF_LONG_DOUBLE__ == 16 && defined(__LDBL_MANT_DIG__) && __LDBL_MANT_DIG__ == 113
#define _f128 long double
#elif defined(__FLOAT128__)
#define _f128 __float128
#endif


#undef f16
#undef f32
#undef f64
#undef f80
#undef f128

#ifdef _f16
#define f16  _f16
#endif
#define f32  _f32
#define f64  _f64
#ifdef _f80
#define f80  _f80
#endif
#ifdef _f128
#define f128 _f128
#endif


#undef _fmax
#undef fmax

#ifdef _f128
#define _fmax _f128
#elif defined(_f80)
#define _fmax _f80
#else
#define _fmax _f64
#endif
#define fmax _fmax


#undef _i8_max
#undef _u8_max
#undef _i16_max
#undef _u16_max
#undef _i32_max
#undef _u32_max
#undef _i64_max
#undef _u64_max

#define _i8_max   127
#define _u8_max   255
#define _i16_max  32767
#define _u16_max  65535
#define _i32_max  2147483647
#define _u32_max  4294967295
#ifdef _u64
#define _i64_max  9223372036854775807ULL
#define _u64_max  18446744073709551615ULL
#endif


#undef _md5_a
#undef _md5_b
#undef _md5_c
#undef _md5_d
#undef _md5_t1
#undef _md5_t2
#undef _md5_t3
#undef _md5_t4
#undef _md5_t5
#undef _md5_t6
#undef _md5_t7
#undef _md5_t8
#undef _md5_t9
#undef _md5_t10
#undef _md5_t11
#undef _md5_t12
#undef _md5_t13
#undef _md5_t14
#undef _md5_t15
#undef _md5_t16
#undef _md5_t17
#undef _md5_t18
#undef _md5_t19
#undef _md5_t20
#undef _md5_t21
#undef _md5_t22
#undef _md5_t23
#undef _md5_t24
#undef _md5_t25
#undef _md5_t26
#undef _md5_t27
#undef _md5_t28
#undef _md5_t29
#undef _md5_t30
#undef _md5_t31
#undef _md5_t32
#undef _md5_t33
#undef _md5_t34
#undef _md5_t35
#undef _md5_t36
#undef _md5_t37
#undef _md5_t38
#undef _md5_t39
#undef _md5_t40
#undef _md5_t41
#undef _md5_t42
#undef _md5_t43
#undef _md5_t44
#undef _md5_t45
#undef _md5_t46
#undef _md5_t47
#undef _md5_t48
#undef _md5_t49
#undef _md5_t50
#undef _md5_t51
#undef _md5_t52
#undef _md5_t53
#undef _md5_t54
#undef _md5_t55
#undef _md5_t56
#undef _md5_t57
#undef _md5_t58
#undef _md5_t59
#undef _md5_t60
#undef _md5_t61
#undef _md5_t62
#undef _md5_t63
#undef _md5_t64
#undef _sha1_h0
#undef _sha1_h1
#undef _sha1_h2
#undef _sha1_h3
#undef _sha1_h4
#undef _sha1_k0
#undef _sha1_k1
#undef _sha1_k2
#undef _sha1_k3
#undef _sha1_k4
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
#undef _sha256_k1
#undef _sha256_k2
#undef _sha256_k3
#undef _sha256_k4
#undef _sha256_k5
#undef _sha256_k6
#undef _sha256_k7
#undef _sha256_k8
#undef _sha256_k9
#undef _sha256_k10
#undef _sha256_k11
#undef _sha256_k12
#undef _sha256_k13
#undef _sha256_k14
#undef _sha256_k15
#undef _sha256_k16
#undef _sha256_k17
#undef _sha256_k18
#undef _sha256_k19
#undef _sha256_k20
#undef _sha256_k21
#undef _sha256_k22
#undef _sha256_k23
#undef _sha256_k24
#undef _sha256_k25
#undef _sha256_k26
#undef _sha256_k27
#undef _sha256_k28
#undef _sha256_k29
#undef _sha256_k30
#undef _sha256_k31
#undef _sha256_k32
#undef _sha256_k33
#undef _sha256_k34
#undef _sha256_k35
#undef _sha256_k36
#undef _sha256_k37
#undef _sha256_k38
#undef _sha256_k39
#undef _sha256_k40
#undef _sha256_k41
#undef _sha256_k42
#undef _sha256_k43
#undef _sha256_k44
#undef _sha256_k45
#undef _sha256_k46
#undef _sha256_k47
#undef _sha256_k48
#undef _sha256_k49
#undef _sha256_k50
#undef _sha256_k51
#undef _sha256_k52
#undef _sha256_k53
#undef _sha256_k54
#undef _sha256_k55
#undef _sha256_k56
#undef _sha256_k57
#undef _sha256_k58
#undef _sha256_k59
#undef _sha256_k60
#undef _sha256_k61
#undef _sha256_k62
#undef _sha256_k63
#undef _sha256_k64
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
#undef _sha512_k1
#undef _sha512_k2
#undef _sha512_k3
#undef _sha512_k4
#undef _sha512_k5
#undef _sha512_k6
#undef _sha512_k7
#undef _sha512_k8
#undef _sha512_k9
#undef _sha512_k10
#undef _sha512_k11
#undef _sha512_k12
#undef _sha512_k13
#undef _sha512_k14
#undef _sha512_k15
#undef _sha512_k16
#undef _sha512_k17
#undef _sha512_k18
#undef _sha512_k19
#undef _sha512_k20
#undef _sha512_k21
#undef _sha512_k22
#undef _sha512_k23
#undef _sha512_k24
#undef _sha512_k25
#undef _sha512_k26
#undef _sha512_k27
#undef _sha512_k28
#undef _sha512_k29
#undef _sha512_k30
#undef _sha512_k31
#undef _sha512_k32
#undef _sha512_k33
#undef _sha512_k34
#undef _sha512_k35
#undef _sha512_k36
#undef _sha512_k37
#undef _sha512_k38
#undef _sha512_k39
#undef _sha512_k40
#undef _sha512_k41
#undef _sha512_k42
#undef _sha512_k43
#undef _sha512_k44
#undef _sha512_k45
#undef _sha512_k46
#undef _sha512_k47
#undef _sha512_k48
#undef _sha512_k49
#undef _sha512_k50
#undef _sha512_k51
#undef _sha512_k52
#undef _sha512_k53
#undef _sha512_k54
#undef _sha512_k55
#undef _sha512_k56
#undef _sha512_k57
#undef _sha512_k58
#undef _sha512_k59
#undef _sha512_k60
#undef _sha512_k61
#undef _sha512_k62
#undef _sha512_k63
#undef _sha512_k64
#undef _sha512_k65
#undef _sha512_k66
#undef _sha512_k67
#undef _sha512_k68
#undef _sha512_k69
#undef _sha512_k70
#undef _sha512_k71
#undef _sha512_k72
#undef _sha512_k73
#undef _sha512_k74
#undef _sha512_k75
#undef _sha512_k76
#undef _sha512_k77
#undef _sha512_k78
#undef _sha512_k79
#undef _sha512_k80
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
#undef _sha3_224_h0
#undef _sha3_224_h1
#undef _sha3_224_h2
#undef _sha3_224_h3
#undef _sha3_224_h4
#undef _sha3_224_h5
#undef _sha3_224_h6
#undef _sha3_224_h7
#undef _sha3_256_h0
#undef _sha3_256_h1
#undef _sha3_256_h2
#undef _sha3_256_h3
#undef _sha3_256_h4
#undef _sha3_256_h5
#undef _sha3_256_h6
#undef _sha3_256_h7
#undef _sha3_384_h0
#undef _sha3_384_h1
#undef _sha3_384_h2
#undef _sha3_384_h3
#undef _sha3_384_h4
#undef _sha3_384_h5
#undef _sha3_384_h6
#undef _sha3_384_h7
#undef _sha3_512_h0
#undef _sha3_512_h1
#undef _sha3_512_h2
#undef _sha3_512_h3
#undef _sha3_512_h4
#undef _sha3_512_h5
#undef _sha3_512_h6
#undef _sha3_512_h7
#undef _blake2b_iv0
#undef _blake2b_iv1
#undef _blake2b_iv2
#undef _blake2b_iv3
#undef _blake2b_iv4
#undef _blake2b_iv5
#undef _blake2b_iv6
#undef _blake2b_iv7
#undef _blake2s_iv0
#undef _blake2s_iv1
#undef _blake2s_iv2
#undef _blake2s_iv3
#undef _blake2s_iv4
#undef _blake2s_iv5
#undef _blake2s_iv6
#undef _blake2s_iv7
#undef _ripemd160_h0
#undef _ripemd160_h1
#undef _ripemd160_h2
#undef _ripemd160_h3
#undef _ripemd160_h4
#undef _ripemd160_k0
#undef _ripemd160_k1
#undef _ripemd160_k2
#undef _ripemd160_k3
#undef _ripemd160_k4
#undef _hmac_ipad
#undef _hmac_opad

#define _md5_a 0x67452301U
#define _md5_b 0xefcdab89U
#define _md5_c 0x98badcfeU
#define _md5_d 0x10325476U
#define _md5_t1 0xd76aa478U
#define _md5_t2 0xe8c7b756U
#define _md5_t3 0x242070dbU
#define _md5_t4 0xc1bdceeeU
#define _md5_t5 0xf57c0fafU
#define _md5_t6 0x4787c62aU
#define _md5_t7 0xa8304613U
#define _md5_t8 0xfd469501U
#define _md5_t9 0x698098d8U
#define _md5_t10 0x8b44f7afU
#define _md5_t11 0xffff5bb1U
#define _md5_t12 0x895cd7beU
#define _md5_t13 0x6b901122U
#define _md5_t14 0xfd987193U
#define _md5_t15 0xa679438eU
#define _md5_t16 0x49b40821U
#define _md5_t17 0xf61e2562U
#define _md5_t18 0xc040b340U
#define _md5_t19 0x265e5a51U
#define _md5_t20 0xe9b6c7aaU
#define _md5_t21 0xd62f105dU
#define _md5_t22 0x02441453U
#define _md5_t23 0xd8a1e681U
#define _md5_t24 0xe7d3fbc8U
#define _md5_t25 0x21e1cde6U
#define _md5_t26 0xc33707d6U
#define _md5_t27 0xf4d50d87U
#define _md5_t28 0x455a14edU
#define _md5_t29 0xa9e3e905U
#define _md5_t30 0xfcefa3f8U
#define _md5_t31 0x676f02d9U
#define _md5_t32 0x8d2a4c8aU
#define _md5_t33 0xfffa3942U
#define _md5_t34 0x8771f681U
#define _md5_t35 0x6d9d6122U
#define _md5_t36 0xfde5380cU
#define _md5_t37 0xa4beea44U
#define _md5_t38 0x4bdecfa9U
#define _md5_t39 0xf6bb4b60U
#define _md5_t40 0xbebfbc70U
#define _md5_t41 0x289b7ec6U
#define _md5_t42 0xeaa127faU
#define _md5_t43 0xd4ef3085U
#define _md5_t44 0x04881d05U
#define _md5_t45 0xd9d4d039U
#define _md5_t46 0xe6db99e5U
#define _md5_t47 0x1fa27cf8U
#define _md5_t48 0xc4ac5665U
#define _md5_t49 0xf4292244U
#define _md5_t50 0x432aff97U
#define _md5_t51 0xab9423a7U
#define _md5_t52 0xfc93a039U
#define _md5_t53 0x655b59c3U
#define _md5_t54 0x8f0ccc92U
#define _md5_t55 0xffeff47dU
#define _md5_t56 0x85845dd1U
#define _md5_t57 0x6fa87e4fU
#define _md5_t58 0xfe2ce6e0U
#define _md5_t59 0xa3014314U
#define _md5_t60 0x4e0811a1U
#define _md5_t61 0xf7537e82U
#define _md5_t62 0xbd3af235U
#define _md5_t63 0x2ad7d2bbU
#define _md5_t64 0xeb86d391U
#define _sha1_h0 0x67452301U
#define _sha1_h1 0xefcdab89U
#define _sha1_h2 0x98badcfeU
#define _sha1_h3 0x10325476U
#define _sha1_h4 0xc3d2e1f0U
#define _sha1_k0 0x5a827999U
#define _sha1_k1 0x6ed9eba1U
#define _sha1_k2 0x8f1bbcdcU
#define _sha1_k3 0xca62c1d6U
#define _sha1_k4 0x5a827999U
#define _sha224_h0 0xc1059ed8U
#define _sha224_h1 0x367cd507U
#define _sha224_h2 0x3070dd17U
#define _sha224_h3 0xf70e5939U
#define _sha224_h4 0xffc00b31U
#define _sha224_h5 0x68581511U
#define _sha224_h6 0x64f98fa7U
#define _sha224_h7 0xbefa4fa4U
#define _sha256_h0 0x6a09e667U
#define _sha256_h1 0xbb67ae85U
#define _sha256_h2 0x3c6ef372U
#define _sha256_h3 0xa54ff53aU
#define _sha256_h4 0x510e527fU
#define _sha256_h5 0x9b05688cU
#define _sha256_h6 0x1f83d9abU
#define _sha256_h7 0x5be0cd19U
#define _sha256_k1 0x428a2f98U
#define _sha256_k2 0x71374491U
#define _sha256_k3 0xb5c0fbcfU
#define _sha256_k4 0xe9b5dba5U
#define _sha256_k5 0x3956c25bU
#define _sha256_k6 0x59f111f1U
#define _sha256_k7 0x923f82a4U
#define _sha256_k8 0xab1c5ed5U
#define _sha256_k9 0xd807aa98U
#define _sha256_k10 0x12835b01U
#define _sha256_k11 0x243185beU
#define _sha256_k12 0x550c7dc3U
#define _sha256_k13 0x72be5d74U
#define _sha256_k14 0x80deb1feU
#define _sha256_k15 0x9bdc06a7U
#define _sha256_k16 0xc19bf174U
#define _sha256_k17 0xe49b69c1U
#define _sha256_k18 0xefbe4786U
#define _sha256_k19 0x0fc19dc6U
#define _sha256_k20 0x240ca1ccU
#define _sha256_k21 0x2de92c6fU
#define _sha256_k22 0x4a7484aaU
#define _sha256_k23 0x5cb0a9dcU
#define _sha256_k24 0x76f988daU
#define _sha256_k25 0x983e5152U
#define _sha256_k26 0xa831c66dU
#define _sha256_k27 0xb00327c8U
#define _sha256_k28 0xbf597fc7U
#define _sha256_k29 0xc6e00bf3U
#define _sha256_k30 0xd5a79147U
#define _sha256_k31 0x06ca6351U
#define _sha256_k32 0x14292967U
#define _sha256_k33 0x27b70a85U
#define _sha256_k34 0x2e1b2138U
#define _sha256_k35 0x4d2c6dfcU
#define _sha256_k36 0x53380d13U
#define _sha256_k37 0x650a7354U
#define _sha256_k38 0x766a0abbU
#define _sha256_k39 0x81c2c92eU
#define _sha256_k40 0x92722c85U
#define _sha256_k41 0xa2bfe8a1U
#define _sha256_k42 0xa81a664bU
#define _sha256_k43 0xc24b8b70U
#define _sha256_k44 0xc76c51a3U
#define _sha256_k45 0xd192e819U
#define _sha256_k46 0xd6990624U
#define _sha256_k47 0xf40e3585U
#define _sha256_k48 0x106aa070U
#define _sha256_k49 0x19a4c116U
#define _sha256_k50 0x1e376c08U
#define _sha256_k51 0x2748774cU
#define _sha256_k52 0x34b0bcb5U
#define _sha256_k53 0x391c0cb3U
#define _sha256_k54 0x4ed8aa4aU
#define _sha256_k55 0x5b9cca4fU
#define _sha256_k56 0x682e6ff3U
#define _sha256_k57 0x748f82eeU
#define _sha256_k58 0x78a5636fU
#define _sha256_k59 0x84c87814U
#define _sha256_k60 0x8cc70208U
#define _sha256_k61 0x90befffaU
#define _sha256_k62 0xa4506cebU
#define _sha256_k63 0xbef9a3f7U
#define _sha256_k64 0xc67178f2U
#ifdef _u64
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
#define _sha512_k1 0x428a2f98d728ae22ULL
#define _sha512_k2 0x7137449123ef65cdULL
#define _sha512_k3 0xb5c0fbcfec4d3b2fULL
#define _sha512_k4 0xe9b5dba58189dbbcULL
#define _sha512_k5 0x3956c25bf348b538ULL
#define _sha512_k6 0x59f111f1b605d019ULL
#define _sha512_k7 0x923f82a4af194f9bULL
#define _sha512_k8 0xab1c5ed5da6d8118ULL
#define _sha512_k9 0xd807aa98a3030242ULL
#define _sha512_k10 0x12835b0145706fbeULL
#define _sha512_k11 0x243185be4ee4b28cULL
#define _sha512_k12 0x550c7dc3d5ffb4e2ULL
#define _sha512_k13 0x72be5d74f27b896fULL
#define _sha512_k14 0x80deb1fe3b1696b1ULL
#define _sha512_k15 0x9bdc06a725c71235ULL
#define _sha512_k16 0xc19bf174cf692694ULL
#define _sha512_k17 0xe49b69c19ef14ad2ULL
#define _sha512_k18 0xefbe4786384f25e3ULL
#define _sha512_k19 0x0fc19dc68b8cd5b5ULL
#define _sha512_k20 0x240ca1cc77ac9c65ULL
#define _sha512_k21 0x2de92c6f592b0275ULL
#define _sha512_k22 0x4a7484aa6ea6e483ULL
#define _sha512_k23 0x5cb0a9dcbd41fbd4ULL
#define _sha512_k24 0x76f988da831153b5ULL
#define _sha512_k25 0x983e5152ee66dfabULL
#define _sha512_k26 0xa831c66d2db43210ULL
#define _sha512_k27 0xb00327c898fb213fULL
#define _sha512_k28 0xbf597fc7beef0ee4ULL
#define _sha512_k29 0xc6e00bf33da88fc2ULL
#define _sha512_k30 0xd5a79147930aa725ULL
#define _sha512_k31 0x06ca6351e003826fULL
#define _sha512_k32 0x142929670a0e6e70ULL
#define _sha512_k33 0x27b70a8546d22ffcULL
#define _sha512_k34 0x2e1b21385c26c926ULL
#define _sha512_k35 0x4d2c6dfc5ac42aedULL
#define _sha512_k36 0x53380d139d95b3dfULL
#define _sha512_k37 0x650a73548baf63deULL
#define _sha512_k38 0x766a0abb3c77b2a8ULL
#define _sha512_k39 0x81c2c92e47edaee6ULL
#define _sha512_k40 0x92722c851482353bULL
#define _sha512_k41 0xa2bfe8a14cf10364ULL
#define _sha512_k42 0xa81a664bbc423001ULL
#define _sha512_k43 0xc24b8b70d0f89791ULL
#define _sha512_k44 0xc76c51a30654be30ULL
#define _sha512_k45 0xd192e819d6ef5218ULL
#define _sha512_k46 0xd69906245565a910ULL
#define _sha512_k47 0xf40e35855771202aULL
#define _sha512_k48 0x106aa07032bbd1b8ULL
#define _sha512_k49 0x19a4c116b8d2d0c8ULL
#define _sha512_k50 0x1e376c085141ab53ULL
#define _sha512_k51 0x2748774cdf8eeb99ULL
#define _sha512_k52 0x34b0bcb5e19b48a8ULL
#define _sha512_k53 0x391c0cb3c5c95a63ULL
#define _sha512_k54 0x4ed8aa4ae3418acbULL
#define _sha512_k55 0x5b9cca4f7763e373ULL
#define _sha512_k56 0x682e6ff3d6b2b8a3ULL
#define _sha512_k57 0x748f82ee5defb2fcULL
#define _sha512_k58 0x78a5636f43172f60ULL
#define _sha512_k59 0x84c87814a1f0ab72ULL
#define _sha512_k60 0x8cc702081a6439ecULL
#define _sha512_k61 0x90befffa23631e28ULL
#define _sha512_k62 0xa4506cebde82bde9ULL
#define _sha512_k63 0xbef9a3f7b2c67915ULL
#define _sha512_k64 0xc67178f2e372532bULL
#define _sha512_k65 0xca273eceea26619cULL
#define _sha512_k66 0xd186b8c721c0c207ULL
#define _sha512_k67 0xeada7dd6cde0eb1eULL
#define _sha512_k68 0xf57d4f7fee6ed178ULL
#define _sha512_k69 0x06f067aa72176fbaULL
#define _sha512_k70 0x0a637dc5a2c898a6ULL
#define _sha512_k71 0x113f9804bef90daeULL
#define _sha512_k72 0x1b710b35131c471bULL
#define _sha512_k73 0x28db77f523047d84ULL
#define _sha512_k74 0x32caab7b40c72493ULL
#define _sha512_k75 0x3c9ebe0a15c9bebcULL
#define _sha512_k76 0x431d67c49c100d4cULL
#define _sha512_k77 0x4cc5d4becb3e42b6ULL
#define _sha512_k78 0x597f299cfc657e2aULL
#define _sha512_k79 0x5fcb6fab3ad6faecULL
#define _sha512_k80 0x6c44198c4a475817ULL
#define _sha512_224_h0 0x8c3d37c819544da2ULL
#define _sha512_224_h1 0x73e1996689dcd4d6ULL
#define _sha512_224_h2 0x1dfab7ae32ff9c82ULL
#define _sha512_224_h3 0x679dd514582f9fcfULL
#define _sha512_224_h4 0x0f6d2b697bd44da8ULL
#define _sha512_224_h5 0x77e36f7304c48942ULL
#define _sha512_224_h6 0x3f9d85a86a1d36c8ULL
#define _sha512_224_h7 0x1112e6ad91d692a1ULL
#define _sha512_256_h0 0x22312194fc2bf72cULL
#define _sha512_256_h1 0x9f555fa3c84c64c2ULL
#define _sha512_256_h2 0x2393b86b6f53b151ULL
#define _sha512_256_h3 0x963877195940eabdULL
#define _sha512_256_h4 0x96283ee2a88effe3ULL
#define _sha512_256_h5 0xbe5e1e2553863992ULL
#define _sha512_256_h6 0x2b0199fc2c85b8aaULL
#define _sha512_256_h7 0x0eb72ddc81c52ca2ULL
#define _sha3_224_h0 0x0000000000000000ULL
#define _sha3_224_h1 0x0000000000000000ULL
#define _sha3_224_h2 0x0000000000000000ULL
#define _sha3_224_h3 0x0000000000000000ULL
#define _sha3_224_h4 0x0000000000000000ULL
#define _sha3_224_h5 0x0000000000000000ULL
#define _sha3_224_h6 0x0000000000000000ULL
#define _sha3_224_h7 0x0000000000000000ULL
#define _sha3_256_h0 0x0000000000000000ULL
#define _sha3_256_h1 0x0000000000000000ULL
#define _sha3_256_h2 0x0000000000000000ULL
#define _sha3_256_h3 0x0000000000000000ULL
#define _sha3_256_h4 0x0000000000000000ULL
#define _sha3_256_h5 0x0000000000000000ULL
#define _sha3_256_h6 0x0000000000000000ULL
#define _sha3_256_h7 0x0000000000000000ULL
#define _sha3_384_h0 0x0000000000000000ULL
#define _sha3_384_h1 0x0000000000000000ULL
#define _sha3_384_h2 0x0000000000000000ULL
#define _sha3_384_h3 0x0000000000000000ULL
#define _sha3_384_h4 0x0000000000000000ULL
#define _sha3_384_h5 0x0000000000000000ULL
#define _sha3_384_h6 0x0000000000000000ULL
#define _sha3_384_h7 0x0000000000000000ULL
#define _sha3_512_h0 0x0000000000000000ULL
#define _sha3_512_h1 0x0000000000000000ULL
#define _sha3_512_h2 0x0000000000000000ULL
#define _sha3_512_h3 0x0000000000000000ULL
#define _sha3_512_h4 0x0000000000000000ULL
#define _sha3_512_h5 0x0000000000000000ULL
#define _sha3_512_h6 0x0000000000000000ULL
#define _sha3_512_h7 0x0000000000000000ULL
#define _blake2b_iv0 0x6a09e667f3bcc908ULL
#define _blake2b_iv1 0xbb67ae8584caa73bULL
#define _blake2b_iv2 0x3c6ef372fe94f82bULL
#define _blake2b_iv3 0xa54ff53a5f1d36f1ULL
#define _blake2b_iv4 0x510e527fade682d1ULL
#define _blake2b_iv5 0x9b05688c2b3e6c1fULL
#define _blake2b_iv6 0x1f83d9abfb41bd6bULL
#define _blake2b_iv7 0x5be0cd19137e2179ULL
#endif
#define _blake2s_iv0  0x6a09e667U
#define _blake2s_iv1  0xbb67ae85U
#define _blake2s_iv2  0x3c6ef372U
#define _blake2s_iv3  0xa54ff53aU
#define _blake2s_iv4  0x510e527fU
#define _blake2s_iv5  0x9b05688cU
#define _blake2s_iv6  0x1f83d9abU
#define _blake2s_iv7  0x5be0cd19U
#define _ripemd160_h0 0x67452301U
#define _ripemd160_h1 0xefcdab89U
#define _ripemd160_h2 0x98badcfeU
#define _ripemd160_h3 0x10325476U
#define _ripemd160_h4 0xc3d2e1f0U
#define _ripemd160_k0 0x00000000U
#define _ripemd160_k1 0x5a827999U
#define _ripemd160_k2 0x6ed9eba1U
#define _ripemd160_k3 0x8f1bbcdcU
#define _ripemd160_k4 0xa953fd4eU
#define _hmac_ipad    0x36
#define _hmac_opad    0x5c


#undef _lcg32_a
#undef _lcg32_c
#undef _lcg64_a
#undef _lcg64_c
#undef _pcg32_mult
#undef _pcg32_inc
#undef _pcg64_mult
#undef _pcg64_inc

#define _pcg32_mult 747796405
#define _pcg32_inc 2891336453
#define _lcg32_a 1103515245
#define _lcg32_c 12345
#if defined(_u64) && _u64_max >= 18446744073709551615ULL
#define _lcg64_a 6364136223846793005ULL
#define _lcg64_c 1442695040888963407ULL
#define _pcg64_mult 6364136223846793005ULL
#define _pcg64_inc 1442695040888963407ULL
#endif


#undef _is_ascii
#undef _is_ascii_digit
#undef _is_ascii_alpha
#undef _is_ascii_alnum
#undef _is_ascii_upper
#undef _is_ascii_lower
#undef _is_ascii_hex
#undef _is_ascii_oct
#undef _is_ascii_bin
#undef _is_ascii_space
#undef _is_ascii_print
#undef _is_ascii_graph
#undef _is_ascii_punct
#undef _is_ascii_cntrl
#undef _is_ascii_null

#define _is_ascii(c) (((c) & 127) ? 1 : 0)
#define _is_ascii_digit(c) (((c) >= '0') && ((c) <= '9'))
#define _is_ascii_alpha(c) ((((c) >= 'a') && ((c) <= 'z')) || (((c) >= 'A') && ((c) <= 'Z')))
#define _is_ascii_alnum(c) ((((c) >= '0') && ((c) <= '9')) || (((c) >= 'a') && ((c) <= 'z')) || (((c) >= 'A') && ((c) <= 'Z')))
#define _is_ascii_upper(c) (((c) >= 'A') && ((c) <= 'Z'))
#define _is_ascii_lower(c) (((c) >= 'a') && ((c) <= 'z'))
#define _is_ascii_hex(c) ((((c) >= '0') && ((c) <= '9')) || ((((c) >= 'a') && ((c) <= 'f')) || (((c) >= 'A') && ((c) <= 'F'))))
#define _is_ascii_oct(c) (((c) >= '0') && ((c) <= '7'))
#define _is_ascii_bin(c) (((c) == '0') || ((c) == '1'))
#define _is_ascii_space(c) (((c) == ' ') || ((c) == '\t') || ((c) == '\n') || ((c) == '\v') || ((c) == '\r') || ((c) == '\f'))
#define _is_ascii_print(c) (((c) >= 32) && ((c) <= 126))
#define _is_ascii_graph(c) (((c) >= 33) && ((c) <= 126))
#define _is_ascii_punct(c) ((!((((c) >= '0') && ((c) <= '9')) || (((c) >= 'a') && ((c) <= 'z')) || (((c) >= 'A') && ((c) <= 'Z')))) && (((c) >= 33) && ((c) <= 126)))
#define _is_ascii_cntrl(c) (((c) >= 0) && ((c) <= 31))
#define _is_ascii_null(c) ((c) == 0)


#undef _is_digit
#undef _is_alpha
#undef _is_alnum
#undef _is_upper
#undef _is_lower
#undef _is_hex
#undef _is_oct
#undef _is_bin
#undef _is_space
#undef _is_print
#undef _is_graph
#undef _is_punct
#undef _is_cntrl
#undef _is_null

#define _is_digit(c) (((c) >= '0') && ((c) <= '9'))
#define _is_alpha(c) ((((c) >= 'a') && ((c) <= 'z')) || (((c) >= 'A') && ((c) <= 'Z')))
#define _is_alnum(c) ((((c) >= '0') && ((c) <= '9')) || (((c) >= 'a') && ((c) <= 'z')) || (((c) >= 'A') && ((c) <= 'Z')))
#define _is_upper(c) (((c) >= 'A') && ((c) <= 'Z'))
#define _is_lower(c) (((c) >= 'a') && ((c) <= 'z'))
#define _is_hex(c) ((((c) >= '0') && ((c) <= '9')) || ((((c) >= 'a') && ((c) <= 'f')) || (((c) >= 'A') && ((c) <= 'F'))))
#define _is_oct(c) (((c) >= '0') && ((c) <= '7'))
#define _is_bin(c) (((c) == '0') || ((c) == '1'))
#define _is_space(c) (((c) == ' ') || ((c) == '\t') || ((c) == '\n') || ((c) == '\v') || ((c) == '\r') || ((c) == '\f'))
#define _is_print(c) (((c) >= 32) && ((c) <= 126))
#define _is_graph(c) (((c) >= 33) && ((c) <= 126))
#define _is_punct(c) ((!((((c) >= '0') && ((c) <= '9')) || (((c) >= 'a') && ((c) <= 'z')) || (((c) >= 'A') && ((c) <= 'Z')))) && (((c) >= 33) && ((c) <= 126)))
#define _is_cntrl(c) (((c) >= 0) && ((c) <= 31))
#define _is_null(c) ((c) == 0)


#undef _in_ascii
#undef _in_ascii_upper
#undef _in_ascii_lower
#undef _int_in_ascii
#undef _int_in_ascii_upper
#undef _int_in_ascii_lower
#undef _ascii_in_int
#undef _ascii_upper_in_int
#undef _ascii_lower_in_int

#define _in_ascii(x) ((x) & 127)
#define _in_ascii_upper(x) ((((c) >= 'a') && ((c) <= 'z')) ? ((x) - 32) : (x))
#define _in_ascii_lower(x) ((((c) >= 'A') && ((c) <= 'Z')) ? ((x) + 32) : (x))
#define _int_in_ascii(x) (((x) >= 10) ? ((x) + 87) : ((x) + '0'))
#define _int_in_ascii_upper(x) (((x) >= 10) ? ((x) + 55) : ((x) + '0'))
#define _int_in_ascii_lower(x) (((x) >= 10) ? ((x) + 87) : ((x) + '0'))
#define _ascii_in_int(x) ((((x) >= 'a') && ((x) <= 'z')) ? ((x) - 87) : ((((x) >= 'A') && ((x) <= 'Z')) ? ((x) - 55) : ((x) - '0')))
#define _ascii_upper_in_int(x) ((((x) >= 'A') && ((x) <= 'Z')) ? ((x) - 55) : ((x) - '0'))
#define _ascii_lower_in_int(x) ((((x) >= 'a') && ((x) <= 'z')) ? ((x) - 87) : ((x) - '0'))


#undef _in_upper
#undef _in_lower
#undef _int_in_upper
#undef _int_in_lower
#undef _upper_in_int
#undef _lower_in_int

#define _in_upper(x) ((((c) >= 'a') && ((c) <= 'z')) ? ((x) - 32) : (x))
#define _in_lower(x) ((((c) >= 'A') && ((c) <= 'Z')) ? ((x) + 32) : (x))
#define _int_in_upper(x) (((x) >= 10) ? ((x) + 55) : ((x) + '0'))
#define _int_in_lower(x) (((x) >= 10) ? ((x) + 87) : ((x) + '0'))
#define _upper_in_int(x) ((((x) >= 'A') && ((x) <= 'Z')) ? ((x) - 55) : ((x) - '0'))
#define _lower_in_int(x) ((((x) >= 'a') && ((x) <= 'z')) ? ((x) - 87) : ((x) - '0'))


#undef _in_bit
#undef _bit_mask
#undef _bit_area
#undef _bit_get
#undef _bit_let
#undef _bit_align
#undef _bit_set
#undef _bit_reset
#undef _bit_flip
#undef _bit_shift
#undef _bit_unshift_let
#undef _bit_unshift_align
#undef _bit_unshift
#undef _bit_unshift_0
#undef _bit_unshift_1
#undef _bit_first
#undef _bit_get_first
#undef _bit_let_first
#undef _bit_align_first
#undef _bit_set_first
#undef _bit_reset_first
#undef _bit_flip_first
#undef _bit_insert
#undef _bit_range
#undef _bit_get_range
#undef _bit_let_range
#undef _bit_align_range
#undef _bit_set_range
#undef _bit_reset_range
#undef _bit_flip_range
#undef _bit_shift_range
#undef _bit_unshift_let_range
#undef _bit_unshift_align_range
#undef _bit_unshift_range
#undef _bit_unshift_0_range
#undef _bit_unshift_1_range
#undef _bit_range_first
#undef _bit_get_range_first
#undef _bit_let_range_first
#undef _bit_align_range_first
#undef _bit_set_range_first
#undef _bit_reset_range_first
#undef _bit_flip_range_first
#undef _bit_insert_range
#undef _bit_merge
#undef _bit_same

#define _in_bit(x) ((x) & 1)
#define _bit_mask(n, s) (((1 << (n)) - 1) << (s))
#define _bit_area(s, e) (((1 << (((e) - (s)) + 1)) - 1) << (s))
#define _bit_get(x, i) (((x) << (i)) & 1)
#define _bit_let(x, i, b) (((x) & (~(1 << (i)))) | (1 << (i)))
#define _bit_align(x, i, b) (((x) & (~(1 << (i)))) | (1 << (i)))
#define _bit_set(x, i) ((x) | (1 << (i)))
#define _bit_reset(x, i) ((x) & (~(1 << (i))))
#define _bit_flip(x, i) ((x) ^ (1 << (i)))
#define _bit_shift(x) ((x) >> 1)
#define _bit_unshift_let(x, b) (((x) << 1) | (!(!(b)))))
#define _bit_unshift_align(x, b) (((x) << 1) | (!(!(b)))))
#define _bit_unshift(x, b) (((x) << 1) | (!(!(b)))))
#define _bit_unshift_0(x) ((x) << 1)
#define _bit_unshift_1(x) (((x) << 1) | 1)
#define _bit_first(x) ((x) & 1)
#define _bit_get_first(x) ((x) & 1)
#define _bit_let_first(x, b) (((x) & (~(1))) | (!(!(b)))))
#define _bit_align_first(x, b) (((x) & (~(1))) | (!(!(b)))))
#define _bit_set_first(x) ((x) | 1)
#define _bit_reset_first(x) ((x) & (~(1)))
#define _bit_flip_first(x) ((x) ^ 1)
#define _bit_insert(x, i, b) (((((x) & (~((1 << (i)) - 1))) << 1) | ((x) & ((1 << (i)) - 1))) | ((!(!(b))) << (i)))
#define _bit_range(x, s, e) (((x) >> (s)) & ((1 << (((e) - (s)) + 1)) - 1))
#define _bit_get_range(x, s, e) (((x) >> (s)) & ((1 << (((e) - (s)) + 1)) - 1))
#define _bit_let_range(x, s, e, b) ((!(!(b)))) ? ((x) | (((1 << (((e) - (s)) + 1)) - 1) << (s))) : ((x) & (~(((1 << (((e) - (s)) + 1)) - 1) << (s)))))
#define _bit_align_range(x, s, e, b) ((!(!(b)))) ? ((x) | (((1 << (((e) - (s)) + 1)) - 1) << (s))) : ((x) & (~(((1 << (((e) - (s)) + 1)) - 1) << (s)))))
#define _bit_set_range(x, s, e) ((x) | (((1 << (((e) - (s)) + 1)) - 1) << (s)))
#define _bit_reset_range(x, s, e) ((x) & (~(((1 << (((e) - (s)) + 1)) - 1) << (s))))
#define _bit_flip_range(x, s, e) ((x) ^ (((1 << (((e) - (s)) + 1)) - 1) << (s)))
#define _bit_shift_range(x, n) ((x) >> (n))
#define _bit_unshift_let_range(x, n, b) ((!(!(b)))) ? (((x) << (n)) | ((1 << (n)) - 1)) : ((x) << (n)))
#define _bit_unshift_align_range(x, n, b) ((!(!(b)))) ? (((x) << (n)) | ((1 << (n)) - 1)) : ((x) << (n)))
#define _bit_unshift_range(x, n, b) ((!(!(b)))) ? (((x) << (n)) | ((1 << (n)) - 1)) : ((x) << (n)))
#define _bit_unshift_0_range(x, n) ((x) << (n))
#define _bit_unshift_1_range(x, n) (((x) << (n)) | ((1 << (n)) - 1))
#define _bit_range_first(x, n) ((x) & ((1 << (n)) - 1))
#define _bit_get_range_first(x, n) ((x) & ((1 << (n)) - 1))
#define _bit_let_range_first(x, n, b) ((!(!(b)))) ? ((x) | ((1 << (n)) - 1)) : ((x) & (~((1 << (n)) - 1))))
#define _bit_align_range_first(x, n, b) ((!(!(b)))) ? ((x) | ((1 << (n)) - 1)) : ((x) & (~((1 << (n)) - 1))))
#define _bit_set_range_first(x, n) ((x) | ((1 << (n)) - 1))
#define _bit_reset_range_first(x, n) ((x) & (~((1 << (n)) - 1)))
#define _bit_flip_range_first(x, n) ((x) ^ ((1 << (n)) - 1))
#define _bit_insert_range(x, s, e, b) (((((x) & (~((1 << (s)) - 1))) << (((e) - (s)) + 1)) | ((x) & ((1 << (s)) - 1))) | ((!(!(b))) ? (((1 << (((e) - (s)) + 1)) - 1) << (s)) : 0))
#define _bit_merge(x, y) ((x) | (y))
#define _bit_same(x, y) (~((x) ^ (y)))


#undef _boolean
#undef _in_boolean
#undef _in_bool

#define _boolean(x) (!(!(x)))
#define _in_boolean(x) (!(!(x)))
#define _in_bool(x) (!(!(x)))


#undef _pick
#define _pick(x, t, f) ((!(!(x))) ? (t) : (f))


#undef _concat
#define _concat(x1, x2) x1##x2


#undef _null
#undef null

#define _null ((void*)0)
#define null _null


#undef _true
#undef _false
#undef true
#undef false
#undef _bool
#undef _bit
#undef bool
#undef bit

#define _true 1
#define _false 0
#define true 1
#define false 0
#ifdef _cpp
#define _bool bool
#else
#ifdef _c99
#define _bool _Bool
#else
#define _bool _u8
#endif
#endif
#define _bit _bool
#define bool _bool
#define bit _bit


#undef _byte
#undef _word
#undef _dword
#undef _qword

#define _byte _u8
#define _word _u16
#define _dword _u32
#ifdef _u64
#define _qword _u64
#endif


#undef _db
#undef _dw
#undef _dd
#undef _dq
#undef db
#undef dw
#undef dd
#undef dq

#define _db _byte
#define _dw _word
#define _dd _dword
#define db _db
#define dw _dw
#define dd _dd
#ifdef _u64
#define _dq _qword
#define dq _dq
#endif


#undef _rawbytes
#undef _bytes
#undef _char
#undef _string
#undef _str
#undef _ustring
#undef _ustr
#undef _cstring
#undef _cstr
#undef _custring
#undef _custr

#define _rawbytes void*
#define _bytes _byte*
#define _char char
#define _string char*
#define _str _string
#define _ustring unsigned _string
#define _ustr _ustring
#define _cstring const _string
#define _cstr _cstring
#define _custring const _ustring
#define _custr _custring

#endif
