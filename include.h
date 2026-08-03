#ifndef ENV_DETECT__H
#define ENV_DETECT__H

#undef c_
#undef cpp_
#undef clang_
#undef gcc_
#undef msvc_
#undef icc_
#undef mingw_
#undef cygwin_
#undef borland_
#undef watcom_
#undef tcc_
#undef pelles_
#undef clang_cl_
#undef nvcc_
#undef nvhpc_
#undef cray_
#undef iar_
#undef keil_
#undef sdcc_
#undef codewarrior_
#undef djgpp_
#undef xl_
#undef sunpro_
#undef hp_acc_
#undef tasking_
#undef ti_
#undef ghs_
#undef diab_
#undef armcc_
#undef armclang_
#undef c51_
#undef c166_
#undef c251_
#undef c430_
#undef c2000_
#undef kcc_
#undef dmc_
#undef sgi_
#undef compaq_
#undef dec_
#undef mic_
#undef tendra_
#undef pathscale_
#undef open64_
#undef pgi_
#undef symantec_
#undef zortech_
#undef pacific_
#undef lcc_
#undef bcc_
#undef ch_
#undef ucx_
#undef aztec_
#undef highc_
#undef letb_
#undef quickc_
#undef pcc_
#undef ack_
#undef vbcc_
#undef fcc_
#undef ndpc_
#undef cc65_
#undef xc8_
#undef xc16_
#undef xc32_
#undef cosmic_
#undef rais_
#undef rowley_
#undef imag_
#undef ht_
#undef mpw_
#undef arm_
#undef thumb_
#undef c_ver_
#undef cpp_ver_
#undef c89_
#undef c90_
#undef c94_
#undef c95_
#undef c99_
#undef c99_tc_
#undef c11_
#undef c11_tc_
#undef c17_
#undef c23_
#undef cpp98_
#undef cpp11_
#undef cpp14_
#undef cpp17_
#undef cpp20_
#undef cpp23_
#undef cpp26_
#undef embedded_c_
#undef freestanding_
#undef hosted_
#undef c_longlong_
#undef cpp_longlong_
#undef c_complex_
#undef cpp_complex_
#undef c_vla_
#undef c_restrict_
#undef c_threads_
#undef cpp_threads_
#undef c_atomic_
#undef cpp_atomic_
#undef c_static_assert_
#undef cpp_static_assert_
#undef c_thread_local_
#undef cpp_thread_local_
#undef c_alignas_
#undef cpp_alignas_
#undef c_alignof_
#undef cpp_alignof_
#undef c_nullptr_
#undef cpp_nullptr_
#undef c_char8_t_
#undef cpp_char8_t_
#undef c_char16_t_
#undef cpp_char16_t_
#undef c_char32_t_
#undef cpp_char32_t_
#undef c_utf8_literals_
#undef cpp_utf8_literals_
#undef c_constexpr_
#undef cpp_constexpr_
#undef c_noexcept_
#undef cpp_noexcept_
#undef cpp_concepts_
#undef cpp_coroutines_
#undef cpp_modules_
#undef cpp_ranges_
#undef cpp_format_
#undef cpp_span_
#undef cpp_expected_
#undef cpp_optional_
#undef cpp_variant_
#undef cpp_string_view_
#undef cpp_exceptions_
#undef cpp_rtti_
#undef c_bool_
#undef cpp_bool_
#undef c_variadic_macros_
#undef cpp_variadic_macros_
#undef c_inline_
#undef cpp_inline_
#undef c_utf16_literals_
#undef c_utf32_literals_
#undef c_max_align_t_
#undef cpp_max_align_t_
#undef c_fp_fenv_
#undef cpp_fp_fenv_
#undef c_stdint_
#undef cpp_stdint_
#undef c_stdbool_
#undef cpp_stdbool_
#undef c_stdatomic_
#undef cpp_stdatomic_
#undef c_stdnoreturn_
#undef cpp_stdnoreturn_
#undef c_stdalign_
#undef cpp_stdalign_
#undef c_generic_
#undef cpp_generic_
#undef c_static_array_
#undef cpp_static_array_
#undef c_float128_
#undef cpp_float128_
#undef c_decimal_float_
#undef cpp_decimal_float_
#undef c_hex_float_
#undef cpp_hex_float_
#undef c_compound_literals_
#undef c_designated_init_
#undef cpp_designated_init_
#undef c_iec559_
#undef cpp_iec559_
#undef c_fenv_access_
#undef cpp_fenv_access_
#undef c_unreachable_
#undef cpp_unreachable_
#undef c_stdarg_
#undef cpp_stdarg_
#undef c_stddef_
#undef cpp_stddef_
#undef c_stdlib_
#undef cpp_stdlib_
#undef c_stdio_
#undef cpp_stdio_
#undef c_string_
#undef cpp_string_
#undef c_math_
#undef cpp_math_
#undef c_time_
#undef cpp_time_
#undef c_errno_
#undef cpp_errno_
#undef c_signal_
#undef cpp_signal_
#undef c_locale_
#undef cpp_locale_
#undef c_wchar_
#undef cpp_wchar_
#undef c_wctype_
#undef cpp_wctype_
#undef c_assert_
#undef cpp_assert_
#undef c_inttypes_
#undef cpp_inttypes_
#undef c_fenv_
#undef cpp_fenv_
#undef c_complex_h_
#undef cpp_complex_h_
#undef c_tgmath_
#undef cpp_tgmath_
#undef c_uchar_
#undef cpp_uchar_
#undef c_float_
#undef cpp_float_
#undef c_limits_
#undef cpp_limits_
#undef cpp_type_traits_
#undef cpp_utility_
#undef cpp_tuple_
#undef cpp_any_
#undef cpp_bitset_
#undef cpp_chrono_
#undef cpp_codecvt_
#undef cpp_compare_
#undef cpp_filesystem_
#undef cpp_functional_
#undef cpp_initializer_list_
#undef cpp_iterator_
#undef cpp_memory_
#undef cpp_new_
#undef cpp_numeric_
#undef cpp_random_
#undef cpp_ratio_
#undef cpp_regex_
#undef cpp_scoped_allocator_
#undef cpp_source_location_
#undef cpp_stacktrace_
#undef cpp_stdexcept_
#undef cpp_syncstream_
#undef cpp_system_error_
#undef cpp_typeindex_
#undef cpp_typeinfo_
#undef cpp_valarray_
#undef cpp_version_
#undef cpp_algorithm_
#undef cpp_atomic_
#undef cpp_concepts_
#undef cpp_container_
#undef cpp_deque_
#undef cpp_forward_list_
#undef cpp_list_
#undef cpp_map_
#undef cpp_queue_
#undef cpp_set_
#undef cpp_stack_
#undef cpp_unordered_map_
#undef cpp_unordered_set_
#undef cpp_vector_
#undef cpp_array_
#undef cpp_flat_map_
#undef cpp_flat_set_
#undef cpp_mdspan_
#undef cpp_expected_
#undef cpp_generator_
#undef cpp_latch_
#undef cpp_barrier_
#undef cpp_semaphore_
#undef cpp_stop_token_
#undef cpp_print_
#undef cpp_stream_
#undef cpp_ios_
#undef cpp_iostream_
#undef cpp_fstream_
#undef cpp_sstream_
#undef cpp_spanstream_
#undef cpp_strstream_
#undef cpp_execution_
#undef cpp_mutex_
#undef cpp_shared_mutex_
#undef cpp_rcu_
#undef cpp_hazard_pointer_
#undef cpp_atomic_wait_
#undef cpp_atomic_ref_
#undef cpp_bit_
#undef cpp_byte_
#undef cpp_numbers_
#undef cpp_simd_
#undef cpp_gcd_lcm_
#undef cpp_endian_
#undef cpp_three_way_
#undef cpp_destroy_delete_
#undef cpp_launder_
#undef cpp_uninitialized_
#undef cpp_to_chars_
#undef cpp_clamp_
#undef cpp_sample_
#undef cpp_shift_
#undef cpp_hardware_
#undef cpp_freestanding_
#undef cpp_text_encoding_
#undef cpp_debugging_
#undef cpp_constexpr_math_
#undef cpp_assume_aligned_
#undef cpp_byteswap_
#undef cpp_to_underlying_
#undef cpp_unreachable_
#undef x32_
#undef x64_
#undef x16_
#undef x128_
#undef intel_
#undef amd_
#undef arm_
#undef arm32_
#undef arm64_
#undef amd32_
#undef amd64_
#undef mips_
#undef mips32_
#undef mips64_
#undef powerpc_
#undef powerpc32_
#undef powerpc64_
#undef riscv_
#undef riscv32_
#undef riscv64_
#undef sparc_
#undef sparc32_
#undef sparc64_
#undef s390_
#undef s390x_
#undef alpha_
#undef hppa_
#undef ia64_
#undef sh_
#undef avr_
#undef avr32_
#undef msp430_
#undef xtensa_
#undef vax_
#undef m68k_
#undef m88k_
#undef loongarch_
#undef loongarch64_
#undef e2k_
#undef wasm_
#undef wasm32_
#undef wasm64_
#undef nvptx_
#undef nvptx64_
#undef bpf_
#undef epiphany_
#undef parallax_
#undef blackfin_
#undef tricore_
#undef rl78_
#undef rx_
#undef v850_
#undef 78k_
#undef m32r_
#undef mcore_
#undef arc_
#undef cr16_
#undef xgate_
#undef propeller_
#undef windows_
#undef windows_ver_
#undef windows32_
#undef windows64_
#undef macos_
#undef macos_ver_
#undef darwin_
#undef darwin_ver_
#undef linux_
#undef linux_ver_
#undef android_
#undef android_ver_
#undef ios_
#undef ios_ver_
#undef tvos_
#undef tvos_ver_
#undef watchos_
#undef watchos_ver_
#undef visionos_
#undef visionos_ver_
#undef freebsd_
#undef freebsd_ver_
#undef netbsd_
#undef netbsd_ver_
#undef openbsd_
#undef openbsd_ver_
#undef dragonfly_
#undef solaris_
#undef haiku_
#undef serenityos_
#undef redox_
#undef fuchsia_
#undef minix_
#undef qnx_
#undef qnx_ver_
#undef vxworks_
#undef rtems_
#undef zephyr_
#undef freertos_
#undef nucleus_
#undef threadx_
#undef ecos_
#undef lynxos_
#undef integrity_
#undef psp_
#undef ps2_
#undef ps3_
#undef ps4_
#undef ps5_
#undef ps_vita_
#undef nintendo_switch_
#undef nintendo_3ds_
#undef nintendo_wii_
#undef nintendo_wiiu_
#undef nintendo_gamecube_
#undef xbox_
#undef xbox360_
#undef xboxone_
#undef xboxseries_
#undef msdos_
#undef freedos_
#undef cpm_
#undef os2_
#undef beos_
#undef amiga_
#undef amigaos4_
#undef morphos_
#undef atari_
#undef riscos_
#undef templeos_
#undef kolibri_
#undef menuet_
#undef reactos_
#undef wine_
#undef proton_
#undef cygwin_os_
#undef msys_
#undef msys2_
#undef mingw_os_
#undef wsl_
#undef unix_
#undef posix_
#undef bsd_
#undef sysv_
#undef syllable_
#undef atheos_
#undef skyos_
#undef aros_
#undef plan9_
#undef inferno_
#undef hurd_
#undef kfreebsd_
#undef openvms_
#undef nonstop_
#undef unixware_
#undef openserver_
#undef aix_
#undef hpux_
#undef irix_
#undef tru64_
#undef ultrix_
#undef domainos_
#undef news_
#undef sunos_
#undef xenix_
#undef ucos_
#undef embos_
#undef scmx_
#undef mqx_
#undef tizen_
#undef webos_
#undef kaios_
#undef fireos_
#undef coloros_
#undef harmonyos_
#undef hyperos_
#undef palm_
#undef webos_old_
#undef symbian_
#undef windows_phone_
#undef windows_mobile_
#undef blackberry_
#undef meego_
#undef maemo_
#undef sailfish_
#undef tizen_rt_
#undef nuttx_
#undef contiki_
#undef tinyos_
#undef riot_
#undef mynewt_
#undef mbed_
#undef arduino_
#undef esp_idf_
#undef raspbian_
#undef yocto_
#undef openwrt_
#undef ddwrt_
#undef rockbox_
#undef toaru_
#undef sortix_
#undef helenos_
#undef genode_
#undef sel4_
#undef xnu_
#undef nt_
#undef mach_
#undef lk_
#undef flatpak_
#undef snap_
#undef appimage_
#undef docker_
#undef podman_
#undef ci_
#undef github_actions_
#undef gitlab_ci_
#undef travis_
#undef jenkins_
#undef appveyor_
#undef circleci_
#undef valgrind_
#undef asan_
#undef tsan_
#undef ubsan_
#undef msan_
#undef cov_

#ifdef __cplusplus
  #define cpp_ 1
  #define c_ 0
#else
  #define cpp_ 0
  #define c_ 1
#endif

#if defined(__clang__) && !defined(__CLANG_CL__)
  #define clang_ 1
#else
  #define clang_ 0
#endif

#if defined(__clang__) && defined(_MSC_VER)
  #define clang_cl_ 1
#else
  #define clang_cl_ 0
#endif

#if defined(__GNUC__) && !defined(__clang__) && !defined(__INTEL_COMPILER) && !defined(__ICC) && !defined(__ICL) && !defined(__NVCOMPILER) && !defined(__PGI)
  #define gcc_ 1
#else
  #define gcc_ 0
#endif

#if defined(_MSC_VER) && !defined(__clang__)
  #define msvc_ 1
#else
  #define msvc_ 0
#endif

#if defined(__INTEL_COMPILER) || defined(__ICC) || defined(__ICL)
  #define icc_ 1
#else
  #define icc_ 0
#endif

#if defined(__MINGW32__) || defined(__MINGW64__)
  #define mingw_ 1
#else
  #define mingw_ 0
#endif

#if defined(__CYGWIN__)
  #define cygwin_ 1
#else
  #define cygwin_ 0
#endif

#if defined(__BORLANDC__) || defined(__CODEGEARC__) || defined(__TURBOC__)
  #define borland_ 1
#else
  #define borland_ 0
#endif

#if defined(__WATCOMC__)
  #define watcom_ 1
#else
  #define watcom_ 0
#endif

#if defined(__TINYC__)
  #define tcc_ 1
#else
  #define tcc_ 0
#endif

#if defined(__POCC__)
  #define pelles_ 1
#else
  #define pelles_ 0
#endif

#if defined(__NVCC__) || defined(__CUDACC__)
  #define nvcc_ 1
#else
  #define nvcc_ 0
#endif

#if defined(__NVCOMPILER) || defined(__PGI)
  #define nvhpc_ 1
#else
  #define nvhpc_ 0
#endif

#if defined(_CRAYC)
  #define cray_ 1
#else
  #define cray_ 0
#endif

#if defined(__IAR_SYSTEMS_ICC__) || defined(__IAR_SYSTEMS_ICC) || defined(__ICCARM__) || defined(__ICCAVR__) || defined(__ICCRX__) || defined(__ICCRL78__) || defined(__ICCMSP430__) || defined(__ICC8051__)
  #define iar_ 1
#else
  #define iar_ 0
#endif

#if defined(__KEIL__) || defined(__CA__) || defined(__CC_ARM)
  #define keil_ 1
#else
  #define keil_ 0
#endif

#if defined(SDCC)
  #define sdcc_ 1
#else
  #define sdcc_ 0
#endif

#if defined(__MWERKS__) || defined(__CWCC__)
  #define codewarrior_ 1
#else
  #define codewarrior_ 0
#endif

#if defined(__DJGPP__)
  #define djgpp_ 1
#else
  #define djgpp_ 0
#endif

#if defined(__IBMC__) || defined(__IBMCPP__) || defined(__xlC__) || defined(__xlc__)
  #define xl_ 1
#else
  #define xl_ 0
#endif

#if defined(__SUNPRO_C) || defined(__SUNPRO_CC)
  #define sunpro_ 1
#else
  #define sunpro_ 0
#endif

#if defined(__HP_aCC) || defined(__HP_cc)
  #define hp_acc_ 1
#else
  #define hp_acc_ 0
#endif

#if defined(__TASKING__)
  #define tasking_ 1
#else
  #define tasking_ 0
#endif

#if defined(__TI_COMPILER_VERSION__) || defined(__TI_ARM__) || defined(__TMS320C2000__) || defined(__TMS320C55X__) || defined(__TMS320C6X__) || defined(_TMS320C6600)
  #define ti_ 1
#else
  #define ti_ 0
#endif

#if defined(__GHS_VERSION__) || defined(__ghs__) || defined(__ghs) || defined(__GHS__)
  #define ghs_ 1
#else
  #define ghs_ 0
#endif

#if defined(__DIAB__) || defined(__diab) || defined(__DCC__)
  #define diab_ 1
#else
  #define diab_ 0
#endif

#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  #define armcc_ 1
#else
  #define armcc_ 0
#endif

#if defined(__ARMCOMPILER_VERSION) && defined(__clang__)
  #define armclang_ 1
#else
  #define armclang_ 0
#endif

#if defined(__C51__) || defined(_C51_) || defined(SDCC_mcs51)
  #define c51_ 1
#else
  #define c51_ 0
#endif

#if defined(__C166__)
  #define c166_ 1
#else
  #define c166_ 0
#endif

#if defined(__C251__)
  #define c251_ 1
#else
  #define c251_ 0
#endif

#if defined(__C430__) || defined(__MSP430__) || defined(__MSP430)
  #define c430_ 1
#else
  #define c430_ 0
#endif

#if defined(__C2000__) || defined(__TMS320C2000__)
  #define c2000_ 1
#else
  #define c2000_ 0
#endif

#if defined(__KCC) || defined(__KAI__)
  #define kcc_ 1
#else
  #define kcc_ 0
#endif

#if defined(__DMC__) || defined(__SC__)
  #define dmc_ 1
#else
  #define dmc_ 0
#endif

#if defined(__sgi) || defined(sgi)
  #define sgi_ 1
#else
  #define sgi_ 0
#endif

#if defined(__DECC) || defined(__DECCXX) || defined(__VAXC) || defined(__osf__)
  #define compaq_ 1
  #define dec_ 1
#else
  #define compaq_ 0
  #define dec_ 0
#endif

#if defined(__MIC__) || defined(__MIC)
  #define mic_ 1
#else
  #define mic_ 0
#endif

#if defined(__TenDRA__)
  #define tendra_ 1
#else
  #define tendra_ 0
#endif

#if defined(__PATHSCALE__) || defined(__PATHCC__)
  #define pathscale_ 1
#else
  #define pathscale_ 0
#endif

#if defined(__OPEN64__) || defined(__OPENCC__)
  #define open64_ 1
#else
  #define open64_ 0
#endif

#if defined(__PGI) || defined(__PGIC__)
  #define pgi_ 1
#else
  #define pgi_ 0
#endif

#if defined(__SYMANTECC__) || defined(__SC__)
  #define symantec_ 1
#else
  #define symantec_ 0
#endif

#if defined(__ZORTECHC__) || defined(__ZTC__)
  #define zortech_ 1
#else
  #define zortech_ 0
#endif

#if defined(__PACIFIC__) || defined(__PACC__)
  #define pacific_ 1
#else
  #define pacific_ 0
#endif

#if defined(__LCC__) || defined(__LCCWIN32__)
  #define lcc_ 1
#else
  #define lcc_ 0
#endif

#if defined(__BCC__) || defined(__BRUCE__)
  #define bcc_ 1
#else
  #define bcc_ 0
#endif

#if defined(__CH__) || defined(__SOFTINTEGRATION__)
  #define ch_ 1
#else
  #define ch_ 0
#endif

#if defined(__UCX__)
  #define ucx_ 1
#else
  #define ucx_ 0
#endif

#if defined(__AZTEC__) || defined(AZTEC_C)
  #define aztec_ 1
#else
  #define aztec_ 0
#endif

#if defined(__HIGHC__) || defined(__HIGH_C__)
  #define highc_ 1
#else
  #define highc_ 0
#endif

#if defined(__LETSC__) || defined(__LETB__)
  #define letb_ 1
#else
  #define letb_ 0
#endif

#if defined(__QUICKC__) || defined(_QC)
  #define quickc_ 1
#else
  #define quickc_ 0
#endif

#if defined(__PCC__) || defined(__pcc__)
  #define pcc_ 1
#else
  #define pcc_ 0
#endif

#if defined(__ACK__) || defined(ACK)
  #define ack_ 1
#else
  #define ack_ 0
#endif

#if defined(__VBCC__)
  #define vbcc_ 1
#else
  #define vbcc_ 0
#endif

#if defined(__FUJITSU__) || defined(__FCC__)
  #define fcc_ 1
#else
  #define fcc_ 0
#endif

#if defined(__NDPC__) || defined(NDP_C)
  #define ndpc_ 1
#else
  #define ndpc_ 0
#endif

#if defined(__CC65__) || defined(__CC65)
  #define cc65_ 1
#else
  #define cc65_ 0
#endif

#if defined(__XC8) || defined(_PICC_)
  #define xc8_ 1
#else
  #define xc8_ 0
#endif

#if defined(__XC16) || defined(_PIC24_)
  #define xc16_ 1
#else
  #define xc16_ 0
#endif

#if defined(__XC32) || defined(_PIC32_)
  #define xc32_ 1
#else
  #define xc32_ 0
#endif

#if defined(__COSMIC__) || defined(COMSIC)
  #define cosmic_ 1
#else
  #define cosmic_ 0
#endif

#if defined(__RAIS__) || defined(RAISONANCE)
  #define rais_ 1
#else
  #define rais_ 0
#endif

#if defined(__ROWLEY__) || defined(CROSSWORKS)
  #define rowley_ 1
#else
  #define rowley_ 0
#endif

#if defined(__IMAGECRAFT__) || defined(IMAGECRAFT)
  #define imag_ 1
#else
  #define imag_ 0
#endif

#if defined(__HITECH__) || defined(HI_TECH_C)
  #define ht_ 1
#else
  #define ht_ 0
#endif

#if defined(__MPW__) || defined(MPW_C)
  #define mpw_ 1
#else
  #define mpw_ 0
#endif

#ifdef __cplusplus
  #if __cplusplus >= 202602L
    #define cpp_ver_ 26
    #define cpp26_ 1
  #else
    #define cpp26_ 0
  #endif
  #if __cplusplus >= 202302L
    #define cpp_ver_ 23
    #define cpp23_ 1
  #else
    #define cpp23_ 0
  #endif
  #if __cplusplus >= 202002L
    #define cpp_ver_ 20
    #define cpp20_ 1
  #else
    #define cpp20_ 0
  #endif
  #if __cplusplus >= 201703L
    #define cpp_ver_ 17
    #define cpp17_ 1
  #else
    #define cpp17_ 0
  #endif
  #if __cplusplus >= 201402L
    #define cpp_ver_ 14
    #define cpp14_ 1
  #else
    #define cpp14_ 0
  #endif
  #if __cplusplus >= 201103L
    #define cpp_ver_ 11
    #define cpp11_ 1
  #else
    #define cpp11_ 0
  #endif
  #if __cplusplus == 199711L
    #define cpp_ver_ 98
    #define cpp98_ 1
  #else
    #define cpp98_ 0
  #endif
#else
  #define cpp_ver_ 0
  #define cpp98_ 0
  #define cpp11_ 0
  #define cpp14_ 0
  #define cpp17_ 0
  #define cpp20_ 0
  #define cpp23_ 0
  #define cpp26_ 0
#endif

#ifdef __STDC_VERSION__
  #if __STDC_VERSION__ >= 202311L
    #define c_ver_ 23
    #define c23_ 1
    #define c17_ 1
    #define c11_ 1
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 201710L
    #define c_ver_ 17
    #define c23_ 0
    #define c17_ 1
    #define c11_ 1
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 201112L
    #define c_ver_ 11
    #define c23_ 0
    #define c17_ 0
    #define c11_ 1
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 199901L
    #define c_ver_ 99
    #define c23_ 0
    #define c17_ 0
    #define c11_ 0
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 199409L
    #define c_ver_ 95
    #define c23_ 0
    #define c17_ 0
    #define c11_ 0
    #define c99_ 0
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #endif
#else
  #ifdef __STDC__
    #define c_ver_ 90
    #define c23_ 0
    #define c17_ 0
    #define c11_ 0
    #define c99_ 0
    #define c95_ 0
    #define c90_ 1
    #define c89_ 1
  #else
    #define c_ver_ 0
    #define c23_ 0
    #define c17_ 0
    #define c11_ 0
    #define c99_ 0
    #define c95_ 0
    #define c90_ 0
    #define c89_ 0
  #endif
#endif

#define c94_ c95_
#define c99_tc_ c99_
#define c11_tc_ c11_

#if defined(__STDC_EMBEDDED__) || defined(__EMBEDDED_C__)
  #define embedded_c_ 1
#else
  #define embedded_c_ 0
#endif

#if defined(__STDC_HOSTED__) && __STDC_HOSTED__ == 0
  #define freestanding_ 1
  #define hosted_ 0
#else
  #define freestanding_ 0
  #define hosted_ 1
#endif

#if defined(__SIZEOF_LONG_LONG__) || defined(ULLONG_MAX) || defined(__LONG_LONG_MAX__) || (defined(__cplusplus) && __cplusplus >= 201103L) || (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || (defined(_MSC_VER) && _MSC_VER >= 1200)
  #define c_longlong_ 1
  #define cpp_longlong_ 1
#else
  #define c_longlong_ 0
  #define cpp_longlong_ 0
#endif

#if defined(__STDC_NO_COMPLEX__)
  #define c_complex_ 0
#else
  #define c_complex_ 1
#endif
#if defined(__cpp_lib_complex) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_complex_ 1
#else
  #define cpp_complex_ 0
#endif

#if defined(__STDC_NO_VLA__)
  #define c_vla_ 0
#else
  #define c_vla_ 1
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_restrict_ 1
#else
  #define c_restrict_ 0
#endif

#if defined(__STDC_NO_THREADS__)
  #define c_threads_ 0
#else
  #define c_threads_ 1
#endif
#if defined(__cpp_threads) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_threads_ 1
#else
  #define cpp_threads_ 0
#endif

#if defined(__STDC_NO_ATOMICS__)
  #define c_atomic_ 0
#else
  #define c_atomic_ 1
#endif
#if defined(__cpp_lib_atomic) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_atomic_ 1
#else
  #define cpp_atomic_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_static_assert_ 1
#else
  #define c_static_assert_ 0
#endif
#if defined(__cpp_static_assert) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_static_assert_ 1
#else
  #define cpp_static_assert_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_thread_local_ 1
#else
  #define c_thread_local_ 0
#endif
#if defined(__cpp_thread_local) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_thread_local_ 1
#else
  #define cpp_thread_local_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_alignas_ 1
#else
  #define c_alignas_ 0
#endif
#if defined(__cpp_alignment) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_alignas_ 1
#else
  #define cpp_alignas_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_alignof_ 1
#else
  #define c_alignof_ 0
#endif
#if defined(__cpp_alignment) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_alignof_ 1
#else
  #define cpp_alignof_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
  #define c_nullptr_ 1
#else
  #define c_nullptr_ 0
#endif
#if defined(__cpp_nullptr) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_nullptr_ 1
#else
  #define cpp_nullptr_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
  #define c_char8_t_ 1
#else
  #define c_char8_t_ 0
#endif
#if defined(__cpp_char8_t) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_char8_t_ 1
#else
  #define cpp_char8_t_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_char16_t_ 1
#else
  #define c_char16_t_ 0
#endif
#if defined(__cpp_unicode_characters) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_char16_t_ 1
#else
  #define cpp_char16_t_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_char32_t_ 1
#else
  #define c_char32_t_ 0
#endif
#if defined(__cpp_unicode_characters) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_char32_t_ 1
#else
  #define cpp_char32_t_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_utf8_literals_ 1
#else
  #define c_utf8_literals_ 0
#endif
#if defined(__cpp_unicode_literals) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_utf8_literals_ 1
#else
  #define cpp_utf8_literals_ 0
#endif

#define c_constexpr_ 0
#if defined(__cpp_constexpr) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_constexpr_ 1
#else
  #define cpp_constexpr_ 0
#endif

#define c_noexcept_ 0
#if defined(__cpp_noexcept) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_noexcept_ 1
#else
  #define cpp_noexcept_ 0
#endif

#if defined(__cpp_exceptions) || defined(__EXCEPTIONS) || defined(_CPPUNWIND)
  #define cpp_exceptions_ 1
#else
  #define cpp_exceptions_ 0
#endif

#if defined(__cpp_rtti) || defined(__GXX_RTTI) || defined(_CPPRTTI)
  #define cpp_rtti_ 1
#else
  #define cpp_rtti_ 0
#endif

#if defined(__cpp_concepts) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_concepts_ 1
#else
  #define cpp_concepts_ 0
#endif

#if defined(__cpp_coroutines) || defined(__cpp_impl_coroutine) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_coroutines_ 1
#else
  #define cpp_coroutines_ 0
#endif

#if defined(__cpp_modules) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_modules_ 1
#else
  #define cpp_modules_ 0
#endif

#if defined(__cpp_lib_ranges) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_ranges_ 1
#else
  #define cpp_ranges_ 0
#endif

#if defined(__cpp_lib_format) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_format_ 1
#else
  #define cpp_format_ 0
#endif

#if defined(__cpp_lib_span) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_span_ 1
#else
  #define cpp_span_ 0
#endif

#if defined(__cpp_lib_expected) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_expected_ 1
#else
  #define cpp_expected_ 0
#endif

#if defined(__cpp_lib_optional) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_optional_ 1
#else
  #define cpp_optional_ 0
#endif

#if defined(__cpp_lib_variant) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_variant_ 1
#else
  #define cpp_variant_ 0
#endif

#if defined(__cpp_lib_string_view) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_string_view_ 1
#else
  #define cpp_string_view_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_bool_ 1
#else
  #define c_bool_ 0
#endif
#define cpp_bool_ 1

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_variadic_macros_ 1
#else
  #define c_variadic_macros_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_variadic_macros_ 1
#else
  #define cpp_variadic_macros_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_inline_ 1
#else
  #define c_inline_ 0
#endif
#define cpp_inline_ 1

#if defined(__STDC_UTF_16__)
  #define c_utf16_literals_ 1
#else
  #define c_utf16_literals_ 0
#endif

#if defined(__STDC_UTF_32__)
  #define c_utf32_literals_ 1
#else
  #define c_utf32_literals_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_max_align_t_ 1
#else
  #define c_max_align_t_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_max_align_t_ 1
#else
  #define cpp_max_align_t_ 0
#endif

#if defined(__STDC_IEC_559__)
  #define c_iec559_ 1
#else
  #define c_iec559_ 0
#endif
#if defined(__STDCPP_IEC_559__) || defined(__GCC_IEC_559)
  #define cpp_iec559_ 1
#else
  #define cpp_iec559_ 0
#endif

#if defined(__STDC_IEC_559_COMPLEX__) || defined(__STDC_NO_COMPLEX__) == 0
  #define c_fp_fenv_ 1
#else
  #define c_fp_fenv_ 0
#endif
#if defined(__STDCPP_IEC_559_COMPLEX__) || defined(__GCC_IEC_559_COMPLEX)
  #define cpp_fp_fenv_ 1
#else
  #define cpp_fp_fenv_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_stdint_ 1
#else
  #define c_stdint_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_stdint_ 1
#else
  #define cpp_stdint_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_stdbool_ 1
#else
  #define c_stdbool_ 0
#endif
#define cpp_stdbool_ 1

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_stdatomic_ 1
#else
  #define c_stdatomic_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_stdatomic_ 1
#else
  #define cpp_stdatomic_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_stdnoreturn_ 1
#else
  #define c_stdnoreturn_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_stdnoreturn_ 1
#else
  #define cpp_stdnoreturn_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_stdalign_ 1
#else
  #define c_stdalign_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_stdalign_ 1
#else
  #define cpp_stdalign_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_generic_ 1
#else
  #define c_generic_ 0
#endif
#define cpp_generic_ 0

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_static_array_ 1
#else
  #define c_static_array_ 0
#endif
#define cpp_static_array_ 0

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_compound_literals_ 1
#else
  #define c_compound_literals_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_designated_init_ 1
#else
  #define c_designated_init_ 0
#endif
#if defined(__cpp_designated_initializers) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_designated_init_ 1
#else
  #define cpp_designated_init_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
  #define c_unreachable_ 1
#else
  #define c_unreachable_ 0
#endif
#if defined(__cpp_lib_unreachable) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_unreachable_ 1
#else
  #define cpp_unreachable_ 0
#endif

#if defined(__STDC_IEC_60559_BFP__) || defined(__STDC_IEC_559__)
  #define c_float128_ 1
#else
  #define c_float128_ 0
#endif
#if defined(__STDCPP_FLOAT128_T__) || defined(__FLOAT128__)
  #define cpp_float128_ 1
#else
  #define cpp_float128_ 0
#endif

#if defined(__STDC_IEC_60559_DFP__)
  #define c_decimal_float_ 1
#else
  #define c_decimal_float_ 0
#endif
#if defined(__STDCPP_DECFLOAT__)
  #define cpp_decimal_float_ 1
#else
  #define cpp_decimal_float_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_hex_float_ 1
#else
  #define c_hex_float_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_hex_float_ 1
#else
  #define cpp_hex_float_ 0
#endif

#if defined(__STDC_IEC_559__) && defined(__STDC_IEC_559_COMPLEX__)
  #define c_fenv_access_ 1
#else
  #define c_fenv_access_ 0
#endif
#if defined(__STDCPP_IEC_559__) && defined(__STDCPP_IEC_559_COMPLEX__)
  #define cpp_fenv_access_ 1
#else
  #define cpp_fenv_access_ 0
#endif

#define c_stdarg_ 1
#define cpp_stdarg_ 1
#define c_stddef_ 1
#define cpp_stddef_ 1
#define c_stdlib_ 1
#define cpp_stdlib_ 1
#define c_stdio_ 1
#define cpp_stdio_ 1
#define c_string_ 1
#define cpp_string_ 1
#define c_math_ 1
#define cpp_math_ 1
#define c_time_ 1
#define cpp_time_ 1
#define c_errno_ 1
#define cpp_errno_ 1
#define c_signal_ 1
#define cpp_signal_ 1
#define c_locale_ 1
#define cpp_locale_ 1
#define c_wchar_ 1
#define cpp_wchar_ 1
#define c_wctype_ 1
#define cpp_wctype_ 1
#define c_assert_ 1
#define cpp_assert_ 1

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_inttypes_ 1
  #define c_fenv_ 1
  #define c_complex_h_ 1
  #define c_tgmath_ 1
#else
  #define c_inttypes_ 0
  #define c_fenv_ 0
  #define c_complex_h_ 0
  #define c_tgmath_ 0
#endif
#if defined(__cplusplus) && __cplusplus >= 201103L
  #define cpp_inttypes_ 1
  #define cpp_fenv_ 1
  #define cpp_complex_h_ 1
  #define cpp_tgmath_ 1
#else
  #define cpp_inttypes_ 0
  #define cpp_fenv_ 0
  #define cpp_complex_h_ 0
  #define cpp_tgmath_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_uchar_ 1
#else
  #define c_uchar_ 0
#endif
#define cpp_uchar_ 0

#define c_float_ 1
#define cpp_float_ 1
#define c_limits_ 1
#define cpp_limits_ 1

#define cpp_type_traits_ 1
#define cpp_utility_ 1
#define cpp_tuple_ 1
#if defined(__cpp_lib_any) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_any_ 1
#else
  #define cpp_any_ 0
#endif
#define cpp_bitset_ 1
#if defined(__cpp_lib_chrono) || (defined(__cplusplus) && __cplusplus >= 201103L)
  #define cpp_chrono_ 1
#else
  #define cpp_chrono_ 0
#endif
#define cpp_codecvt_ 1
#if defined(__cpp_lib_three_way_comparison) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_compare_ 1
#else
  #define cpp_compare_ 0
#endif
#if defined(__cpp_lib_filesystem) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_filesystem_ 1
#else
  #define cpp_filesystem_ 0
#endif
#define cpp_functional_ 1
#define cpp_initializer_list_ 1
#define cpp_iterator_ 1
#define cpp_memory_ 1
#define cpp_new_ 1
#define cpp_numeric_ 1
#define cpp_random_ 1
#define cpp_ratio_ 1
#define cpp_regex_ 1
#define cpp_scoped_allocator_ 1
#if defined(__cpp_lib_source_location) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_source_location_ 1
#else
  #define cpp_source_location_ 0
#endif
#if defined(__cpp_lib_stacktrace) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_stacktrace_ 1
#else
  #define cpp_stacktrace_ 0
#endif
#define cpp_stdexcept_ 1
#if defined(__cpp_lib_syncstream) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_syncstream_ 1
#else
  #define cpp_syncstream_ 0
#endif
#define cpp_system_error_ 1
#define cpp_typeindex_ 1
#define cpp_typeinfo_ 1
#define cpp_valarray_ 1
#define cpp_version_ 1
#define cpp_algorithm_ 1
#define cpp_atomic_ 1
#define cpp_container_ 1
#define cpp_deque_ 1
#define cpp_forward_list_ 1
#define cpp_list_ 1
#define cpp_map_ 1
#define cpp_queue_ 1
#define cpp_set_ 1
#define cpp_stack_ 1
#define cpp_unordered_map_ 1
#define cpp_unordered_set_ 1
#define cpp_vector_ 1
#define cpp_array_ 1
#if defined(__cpp_lib_flat_map) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_flat_map_ 1
#else
  #define cpp_flat_map_ 0
#endif
#if defined(__cpp_lib_flat_set) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_flat_set_ 1
#else
  #define cpp_flat_set_ 0
#endif
#if defined(__cpp_lib_mdspan) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_mdspan_ 1
#else
  #define cpp_mdspan_ 0
#endif
#if defined(__cpp_lib_expected) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_expected_ 1
#else
  #define cpp_expected_ 0
#endif
#if defined(__cpp_lib_generator) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_generator_ 1
#else
  #define cpp_generator_ 0
#endif
#if defined(__cpp_lib_latch) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_latch_ 1
#else
  #define cpp_latch_ 0
#endif
#if defined(__cpp_lib_barrier) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_barrier_ 1
#else
  #define cpp_barrier_ 0
#endif
#if defined(__cpp_lib_semaphore) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_semaphore_ 1
#else
  #define cpp_semaphore_ 0
#endif
#if defined(__cpp_lib_jthread) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_stop_token_ 1
#else
  #define cpp_stop_token_ 0
#endif
#if defined(__cpp_lib_print) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_print_ 1
#else
  #define cpp_print_ 0
#endif
#define cpp_stream_ 1
#define cpp_ios_ 1
#define cpp_iostream_ 1
#define cpp_fstream_ 1
#define cpp_sstream_ 1
#if defined(__cpp_lib_spanstream) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_spanstream_ 1
#else
  #define cpp_spanstream_ 0
#endif
#define cpp_strstream_ 1
#if defined(__cpp_lib_execution) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_execution_ 1
#else
  #define cpp_execution_ 0
#endif
#define cpp_mutex_ 1
#define cpp_shared_mutex_ 1
#if defined(__cpp_lib_rcu) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_rcu_ 1
#else
  #define cpp_rcu_ 0
#endif
#if defined(__cpp_lib_hazard_pointer) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_hazard_pointer_ 1
#else
  #define cpp_hazard_pointer_ 0
#endif
#if defined(__cpp_lib_atomic_wait) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_atomic_wait_ 1
#else
  #define cpp_atomic_wait_ 0
#endif
#if defined(__cpp_lib_atomic_ref) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_atomic_ref_ 1
#else
  #define cpp_atomic_ref_ 0
#endif
#if defined(__cpp_lib_bit_cast) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_bit_ 1
#else
  #define cpp_bit_ 0
#endif
#if defined(__cpp_lib_byte) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_byte_ 1
#else
  #define cpp_byte_ 0
#endif
#if defined(__cpp_lib_math_constants) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_numbers_ 1
#else
  #define cpp_numbers_ 0
#endif
#if defined(__cpp_lib_simd) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_simd_ 1
#else
  #define cpp_simd_ 0
#endif
#if defined(__cpp_lib_gcd) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_gcd_lcm_ 1
#else
  #define cpp_gcd_lcm_ 0
#endif
#if defined(__cpp_lib_endian) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_endian_ 1
#else
  #define cpp_endian_ 0
#endif
#if defined(__cpp_lib_three_way_comparison) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_three_way_ 1
#else
  #define cpp_three_way_ 0
#endif
#if defined(__cpp_lib_destroying_delete) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_destroy_delete_ 1
#else
  #define cpp_destroy_delete_ 0
#endif
#if defined(__cpp_lib_launder) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_launder_ 1
#else
  #define cpp_launder_ 0
#endif
#if defined(__cpp_lib_raw_memory_algorithms) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_uninitialized_ 1
#else
  #define cpp_uninitialized_ 0
#endif
#if defined(__cpp_lib_to_chars) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_to_chars_ 1
#else
  #define cpp_to_chars_ 0
#endif
#if defined(__cpp_lib_clamp) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_clamp_ 1
#else
  #define cpp_clamp_ 0
#endif
#if defined(__cpp_lib_sample) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_sample_ 1
#else
  #define cpp_sample_ 0
#endif
#if defined(__cpp_lib_shift) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_shift_ 1
#else
  #define cpp_shift_ 0
#endif
#if defined(__cpp_lib_hardware_interference_size) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_hardware_ 1
#else
  #define cpp_hardware_ 0
#endif
#if defined(__cpp_lib_freestanding) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_freestanding_ 1
#else
  #define cpp_freestanding_ 0
#endif
#if defined(__cpp_lib_text_encoding) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_text_encoding_ 1
#else
  #define cpp_text_encoding_ 0
#endif
#if defined(__cpp_lib_debugging) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_debugging_ 1
#else
  #define cpp_debugging_ 0
#endif
#if defined(__cpp_lib_constexpr_cmath) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_constexpr_math_ 1
#else
  #define cpp_constexpr_math_ 0
#endif
#if defined(__cpp_lib_assume_aligned) || (defined(__cplusplus) && __cplusplus >= 202002L)
  #define cpp_assume_aligned_ 1
#else
  #define cpp_assume_aligned_ 0
#endif
#if defined(__cpp_lib_byteswap) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_byteswap_ 1
#else
  #define cpp_byteswap_ 0
#endif
#if defined(__cpp_lib_to_underlying) || (defined(__cplusplus) && __cplusplus >= 202302L)
  #define cpp_to_underlying_ 1
#else
  #define cpp_to_underlying_ 0
#endif

#if defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64) || defined(__aarch64__) || defined(__64BIT__) || (defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ == 8) || defined(__LP64__) || defined(_LP64) || defined(__ppc64__) || defined(__powerpc64__) || defined(__sparc64__) || defined(__sparc_v9__) || defined(__mips64) || (defined(__riscv_xlen) && __riscv_xlen == 64) || defined(__loongarch64) || defined(__s390x__) || defined(__ia64__) || defined(__e2k__) || defined(__wasm64__) || defined(__nvptx64__)
  #define x64_ 1
  #define x32_ 0
  #define x16_ 0
  #define x128_ 0
#elif defined(__i386__) || defined(__i386) || defined(_M_IX86) || defined(__arm__) || defined(__32BIT__) || (defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ == 4) || defined(__ILP32__) || defined(__mips32) || (defined(__riscv_xlen) && __riscv_xlen == 32) || defined(__sparc__) || defined(__ppc__) || defined(__wasm32__) || defined(__nvptx__)
  #define x32_ 1
  #define x64_ 0
  #define x16_ 0
  #define x128_ 0
#elif defined(__16BIT__) || defined(__msp430__) || defined(__AVR__) || (defined(__DOS__) && !defined(__DJGPP__))
  #define x16_ 1
  #define x32_ 0
  #define x64_ 0
  #define x128_ 0
#elif defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ == 16
  #define x128_ 1
  #define x64_ 0
  #define x32_ 0
  #define x16_ 0
#else
  #define x16_ 0
  #define x32_ 0
  #define x64_ 0
  #define x128_ 0
#endif

#if defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64)
  #define amd64_ 1
#else
  #define amd64_ 0
#endif

#if defined(__i386__) || defined(__i386) || defined(_M_IX86)
  #define amd32_ 1
#else
  #define amd32_ 0
#endif

#if defined(__arm__) || defined(_M_ARM)
  #define arm32_ 1
#else
  #define arm32_ 0
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
  #define arm64_ 1
#else
  #define arm64_ 0
#endif

#if defined(__arm__) || defined(_M_ARM) || defined(__aarch64__) || defined(_M_ARM64)
  #define arm_ 1
#else
  #define arm_ 0
#endif

#if defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64) || defined(__i386__) || defined(__i386) || defined(_M_IX86)
  #define intel_ 1
  #define amd_ 1
#else
  #define intel_ 0
  #define amd_ 0
#endif

#if defined(__mips__) || defined(__mips) || defined(_MIPS_ARCH) || defined(__mips64) || defined(_MIPS_ARCH_MIPS64)
  #define mips_ 1
  #if defined(__mips64) || defined(_MIPS_ARCH_MIPS64)
    #define mips64_ 1
    #define mips32_ 0
  #else
    #define mips32_ 1
    #define mips64_ 0
  #endif
#else
  #define mips_ 0
  #define mips32_ 0
  #define mips64_ 0
#endif

#if defined(__powerpc__) || defined(__ppc__) || defined(__PPC__) || defined(__powerpc64__) || defined(__ppc64__)
  #define powerpc_ 1
  #if defined(__powerpc64__) || defined(__ppc64__)
    #define powerpc64_ 1
    #define powerpc32_ 0
  #else
    #define powerpc32_ 1
    #define powerpc64_ 0
  #endif
#else
  #define powerpc_ 0
  #define powerpc32_ 0
  #define powerpc64_ 0
#endif

#if defined(__riscv)
  #define riscv_ 1
  #if defined(__riscv_xlen) && __riscv_xlen == 64
    #define riscv64_ 1
    #define riscv32_ 0
  #else
    #define riscv32_ 1
    #define riscv64_ 0
  #endif
#else
  #define riscv_ 0
  #define riscv32_ 0
  #define riscv64_ 0
#endif

#if defined(__sparc__) || defined(__sparc) || defined(__sparc64__) || defined(__sparc_v9__)
  #define sparc_ 1
  #if defined(__sparc64__) || defined(__sparc_v9__)
    #define sparc64_ 1
    #define sparc32_ 0
  #else
    #define sparc32_ 1
    #define sparc64_ 0
  #endif
#else
  #define sparc_ 0
  #define sparc32_ 0
  #define sparc64_ 0
#endif

#if defined(__s390__) || defined(__s390x__) || defined(__zarch__)
  #define s390_ 1
  #if defined(__s390x__) || defined(__zarch__) || (defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ == 8)
    #define s390x_ 1
  #else
    #define s390x_ 0
  #endif
#else
  #define s390_ 0
  #define s390x_ 0
#endif

#if defined(__alpha__) || defined(__alpha)
  #define alpha_ 1
#else
  #define alpha_ 0
#endif

#if defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
  #define hppa_ 1
#else
  #define hppa_ 0
#endif

#if defined(__ia64__) || defined(_M_IA64) || defined(__IA64__)
  #define ia64_ 1
#else
  #define ia64_ 0
#endif

#if defined(__sh__) || defined(__SH4__) || defined(__SH3__)
  #define sh_ 1
#else
  #define sh_ 0
#endif

#if defined(__AVR__) || defined(__AVR_ARCH__)
  #define avr_ 1
  #if defined(__AVR_ARCH__) && __AVR_ARCH__ >= 6
    #define avr32_ 1
  #else
    #define avr32_ 0
  #endif
#else
  #define avr_ 0
  #define avr32_ 0
#endif

#if defined(__MSP430__) || defined(__msp430__) || defined(_MSP430)
  #define msp430_ 1
#else
  #define msp430_ 0
#endif

#if defined(__xtensa__) || defined(XTENSA)
  #define xtensa_ 1
#else
  #define xtensa_ 0
#endif

#if defined(__vax__) || defined(__VAX)
  #define vax_ 1
#else
  #define vax_ 0
#endif

#if defined(__m68k__) || defined(M68000) || defined(__mc68000__)
  #define m68k_ 1
#else
  #define m68k_ 0
#endif

#if defined(__m88k__)
  #define m88k_ 1
#else
  #define m88k_ 0
#endif

#if defined(__loongarch__) || defined(__loongarch64)
  #define loongarch_ 1
  #if defined(__loongarch64)
    #define loongarch64_ 1
  #else
    #define loongarch64_ 0
  #endif
#else
  #define loongarch_ 0
  #define loongarch64_ 0
#endif

#if defined(__e2k__)
  #define e2k_ 1
#else
  #define e2k_ 0
#endif

#if defined(__EMSCRIPTEN__) || defined(__wasm__) || defined(__wasm32__) || defined(__wasm64__)
  #define wasm_ 1
  #if defined(__wasm64__) || (defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ == 8)
    #define wasm64_ 1
    #define wasm32_ 0
  #else
    #define wasm32_ 1
    #define wasm64_ 0
  #endif
#else
  #define wasm_ 0
  #define wasm32_ 0
  #define wasm64_ 0
#endif

#if defined(__NVPTX__)
  #define nvptx_ 1
  #if defined(__nvptx64__)
    #define nvptx64_ 1
  #else
    #define nvptx64_ 0
  #endif
#else
  #define nvptx_ 0
  #define nvptx64_ 0
#endif

#if defined(__bpf__) || defined(__BPF__)
  #define bpf_ 1
#else
  #define bpf_ 0
#endif

#if defined(__epiphany__) || defined(EPIPHANY)
  #define epiphany_ 1
#else
  #define epiphany_ 0
#endif

#if defined(__propeller__) || defined(PROPELLER)
  #define propeller_ 1
  #define parallax_ 1
#else
  #define propeller_ 0
  #define parallax_ 0
#endif

#if defined(__blackfin__) || defined(BLACKFIN)
  #define blackfin_ 1
#else
  #define blackfin_ 0
#endif

#if defined(__tricore__) || defined(TRICORE)
  #define tricore_ 1
#else
  #define tricore_ 0
#endif

#if defined(__RL78__) || defined(RL78)
  #define rl78_ 1
#else
  #define rl78_ 0
#endif

#if defined(__RX__) || defined(RX)
  #define rx_ 1
#else
  #define rx_ 0
#endif

#if defined(__V850__) || defined(V850)
  #define v850_ 1
#else
  #define v850_ 0
#endif

#if defined(__78K__) || defined(_78K)
  #define 78k_ 1
#else
  #define 78k_ 0
#endif

#if defined(__M32R__) || defined(M32R)
  #define m32r_ 1
#else
  #define m32r_ 0
#endif

#if defined(__MCORE__) || defined(MCORE)
  #define mcore_ 1
#else
  #define mcore_ 0
#endif

#if defined(__arc__) || defined(ARC)
  #define arc_ 1
#else
  #define arc_ 0
#endif

#if defined(__CR16__) || defined(CR16)
  #define cr16_ 1
#else
  #define cr16_ 0
#endif

#if defined(__XGATE__) || defined(XGATE)
  #define xgate_ 1
#else
  #define xgate_ 0
#endif

#if defined(__APPLE__) && defined(__MACH__)
  #define darwin_ 1
  #define macos_ 0
  #define ios_ 0
  #define tvos_ 0
  #define watchos_ 0
  #define visionos_ 0
  #define macos_ver_ 0
  #define darwin_ver_ 0
  #define ios_ver_ 0
  #define tvos_ver_ 0
  #define watchos_ver_ 0
  #define visionos_ver_ 0
  #if defined(TARGET_OS_MAC) && TARGET_OS_MAC
    #define macos_ 1
  #endif
  #if defined(__MAC_OS_X_VERSION_MIN_REQUIRED)
    #define macos_ver_ __MAC_OS_X_VERSION_MIN_REQUIRED
  #endif
  #if defined(TARGET_OS_IOS) && TARGET_OS_IOS
    #define ios_ 1
  #endif
  #if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
    #define ios_ver_ __IPHONE_OS_VERSION_MIN_REQUIRED
  #endif
  #if defined(TARGET_OS_TV) && TARGET_OS_TV
    #define tvos_ 1
  #endif
  #if defined(__TV_OS_VERSION_MIN_REQUIRED)
    #define tvos_ver_ __TV_OS_VERSION_MIN_REQUIRED
  #endif
  #if defined(TARGET_OS_WATCH) && TARGET_OS_WATCH
    #define watchos_ 1
  #endif
  #if defined(__WATCH_OS_VERSION_MIN_REQUIRED)
    #define watchos_ver_ __WATCH_OS_VERSION_MIN_REQUIRED
  #endif
  #if defined(TARGET_OS_VISION) && TARGET_OS_VISION
    #define visionos_ 1
  #endif
  #if defined(__VISION_OS_VERSION_MIN_REQUIRED)
    #define visionos_ver_ __VISION_OS_VERSION_MIN_REQUIRED
  #endif
  #if defined(__DARWIN_C_LEVEL) || defined(__DARWIN_C)
    #define darwin_ver_ __DARWIN_C_LEVEL
  #endif
#else
  #define macos_ 0
  #define darwin_ 0
  #define ios_ 0
  #define tvos_ 0
  #define watchos_ 0
  #define visionos_ 0
  #define macos_ver_ 0
  #define darwin_ver_ 0
  #define ios_ver_ 0
  #define tvos_ver_ 0
  #define watchos_ver_ 0
  #define visionos_ver_ 0
#endif

#if defined(_WIN32) || defined(_WIN64)
  #define windows_ 1
  #if defined(_WIN64)
    #define windows64_ 1
    #define windows32_ 0
  #else
    #define windows32_ 1
    #define windows64_ 0
  #endif
  #if defined(_WIN32_WINNT)
    #define windows_ver_ _WIN32_WINNT
  #elif defined(WINVER)
    #define windows_ver_ WINVER
  #else
    #define windows_ver_ 0
  #endif
#else
  #define windows_ 0
  #define windows32_ 0
  #define windows64_ 0
  #define windows_ver_ 0
#endif

#if defined(__linux__) && !defined(__ANDROID__)
  #define linux_ 1
  #define linux_ver_ 0
#else
  #define linux_ 0
  #define linux_ver_ 0
#endif

#if defined(__ANDROID__)
  #define android_ 1
  #if defined(__ANDROID_API__)
    #define android_ver_ __ANDROID_API__
  #else
    #define android_ver_ 0
  #endif
#else
  #define android_ 0
  #define android_ver_ 0
#endif

#if defined(__FreeBSD__)
  #define freebsd_ 1
  #if defined(__FreeBSD_version)
    #define freebsd_ver_ __FreeBSD_version
  #else
    #define freebsd_ver_ 0
  #endif
#else
  #define freebsd_ 0
  #define freebsd_ver_ 0
#endif

#if defined(__NetBSD__)
  #define netbsd_ 1
  #if defined(__NetBSD_Version__)
    #define netbsd_ver_ __NetBSD_Version__
  #else
    #define netbsd_ver_ 0
  #endif
#else
  #define netbsd_ 0
  #define netbsd_ver_ 0
#endif

#if defined(__OpenBSD__)
  #define openbsd_ 1
  #if defined(OpenBSD)
    #define openbsd_ver_ OpenBSD
  #else
    #define openbsd_ver_ 0
  #endif
#else
  #define openbsd_ 0
  #define openbsd_ver_ 0
#endif

#if defined(__DragonFly__)
  #define dragonfly_ 1
#else
  #define dragonfly_ 0
#endif

#if defined(__sun) || defined(__sun__) || defined(sun) || defined(__SVR4)
  #define solaris_ 1
#else
  #define solaris_ 0
#endif

#if defined(__HAIKU__)
  #define haiku_ 1
#else
  #define haiku_ 0
#endif

#if defined(__serenity__)
  #define serenityos_ 1
#else
  #define serenityos_ 0
#endif

#if defined(__REDOX__)
  #define redox_ 1
#else
  #define redox_ 0
#endif

#if defined(__Fuchsia__)
  #define fuchsia_ 1
#else
  #define fuchsia_ 0
#endif

#if defined(__minix) || defined(__MINIX)
  #define minix_ 1
#else
  #define minix_ 0
#endif

#if defined(__QNX__) || defined(__QNXNTO__) || defined(_QNX_SOURCE)
  #define qnx_ 1
  #if defined(_NTO_VERSION)
    #define qnx_ver_ _NTO_VERSION
  #else
    #define qnx_ver_ 0
  #endif
#else
  #define qnx_ 0
  #define qnx_ver_ 0
#endif

#if defined(__VXWORKS__) || defined(__vxworks) || defined(_WRS_KERNEL)
  #define vxworks_ 1
#else
  #define vxworks_ 0
#endif

#if defined(__RTEMS__)
  #define rtems_ 1
#else
  #define rtems_ 0
#endif

#if defined(__ZEPHYR__)
  #define zephyr_ 1
#else
  #define zephyr_ 0
#endif

#if defined(configUSE_PREEMPTION) || defined(FREERTOS_CONFIG_H)
  #define freertos_ 1
#else
  #define freertos_ 0
#endif

#if defined(NUCLEUS_PLUS)
  #define nucleus_ 1
#else
  #define nucleus_ 0
#endif

#if defined(THREADX_VERSION) || defined(TX_VERSION_ID)
  #define threadx_ 1
#else
  #define threadx_ 0
#endif

#if defined(__ECOS) || defined(__ECOS__)
  #define ecos_ 1
#else
  #define ecos_ 0
#endif

#if defined(__Lynx__)
  #define lynxos_ 1
#else
  #define lynxos_ 0
#endif

#if defined(__INTEGRITY)
  #define integrity_ 1
#else
  #define integrity_ 0
#endif

#if defined(__PSP__) || defined(_PSP) || defined(PSP)
  #define psp_ 1
#else
  #define psp_ 0
#endif

#if defined(__PS2__) || defined(_PS2)
  #define ps2_ 1
#else
  #define ps2_ 0
#endif

#if defined(__CELLOS_LV2__) || defined(__PS3__)
  #define ps3_ 1
#else
  #define ps3_ 0
#endif

#if defined(__ORBIS__)
  #define ps4_ 1
#else
  #define ps4_ 0
#endif

#if defined(__PROSPERO__)
  #define ps5_ 1
#else
  #define ps5_ 0
#endif

#if defined(__vita__) || defined(__VITA__)
  #define ps_vita_ 1
#else
  #define ps_vita_ 0
#endif

#if defined(__SWITCH__)
  #define nintendo_switch_ 1
#else
  #define nintendo_switch_ 0
#endif

#if defined(_3DS) || defined(__3DS__)
  #define nintendo_3ds_ 1
#else
  #define nintendo_3ds_ 0
#endif

#if defined(__wii__) || defined(WII_PLATFORM) || defined(__WII__)
  #define nintendo_wii_ 1
#else
  #define nintendo_wii_ 0
#endif

#if defined(__wiiu__) || defined(WIIU_PLATFORM)
  #define nintendo_wiiu_ 1
#else
  #define nintendo_wiiu_ 0
#endif

#if defined(__gamecube__) || defined(GAMECUBE)
  #define nintendo_gamecube_ 1
#else
  #define nintendo_gamecube_ 0
#endif

#if defined(_XBOX) || defined(__XBOX__)
  #define xbox_ 1
#else
  #define xbox_ 0
#endif

#if defined(_XBOX360) || defined(__xbox360__)
  #define xbox360_ 1
#else
  #define xbox360_ 0
#endif

#if defined(_DURANGO) || defined(__xboxone__)
  #define xboxone_ 1
#else
  #define xboxone_ 0
#endif

#if defined(_SCARLETT) || defined(__xboxseries__)
  #define xboxseries_ 1
#else
  #define xboxseries_ 0
#endif

#if defined(MSDOS) || defined(__MSDOS__) || defined(__DOS__)
  #define msdos_ 1
#else
  #define msdos_ 0
#endif

#if defined(__FREEDOS__)
  #define freedos_ 1
#else
  #define freedos_ 0
#endif

#if defined(CPM) || defined(__CPM__)
  #define cpm_ 1
#else
  #define cpm_ 0
#endif

#if defined(OS2) || defined(__OS2__) || defined(__TOS_OS2__)
  #define os2_ 1
#else
  #define os2_ 0
#endif

#if defined(__BEOS__)
  #define beos_ 1
#else
  #define beos_ 0
#endif

#if defined(AMIGA) || defined(__amigaos__) || defined(__amiga__)
  #define amiga_ 1
#else
  #define amiga_ 0
#endif

#if defined(__amigaos4__)
  #define amigaos4_ 1
#else
  #define amigaos4_ 0
#endif

#if defined(__MORPHOS__)
  #define morphos_ 1
#else
  #define morphos_ 0
#endif

#if defined(__ATARI__) || defined(__atarist__) || defined(__TOS__)
  #define atari_ 1
#else
  #define atari_ 0
#endif

#if defined(__riscos__) || defined(__RISCOS__)
  #define riscos_ 1
#else
  #define riscos_ 0
#endif

#if defined(__TEMPLEOS__) || (defined(__TOS__) && defined(__TEMPLE__))
  #define templeos_ 1
#else
  #define templeos_ 0
#endif

#if defined(__kolibri__) || defined(KOLIBRI)
  #define kolibri_ 1
#else
  #define kolibri_ 0
#endif

#if defined(__menuet__) || defined(__MEOS__)
  #define menuet_ 1
#else
  #define menuet_ 0
#endif

#if defined(__REACTOS__)
  #define reactos_ 1
#else
  #define reactos_ 0
#endif

#if defined(__WINE__)
  #define wine_ 1
#else
  #define wine_ 0
#endif

#if defined(__PROTON__) || defined(STEAM_BUILD)
  #define proton_ 1
#else
  #define proton_ 0
#endif

#if defined(__CYGWIN__)
  #define cygwin_os_ 1
#else
  #define cygwin_os_ 0
#endif

#if defined(__MSYS__)
  #define msys_ 1
  #define msys2_ 0
#elif defined(MSYSTEM)
  #define msys2_ 1
  #define msys_ 0
#else
  #define msys_ 0
  #define msys2_ 0
#endif

#if defined(__MINGW32__) || defined(__MINGW64__)
  #define mingw_os_ 1
#else
  #define mingw_os_ 0
#endif

#if defined(__linux__) && defined(__WSL__)
  #define wsl_ 1
#elif defined(__WSL__)
  #define wsl_ 1
#else
  #define wsl_ 0
#endif

#if defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
  #define unix_ 1
#else
  #define unix_ 0
#endif

#if defined(_POSIX_VERSION)
  #define posix_ 1
#else
  #define posix_ 0
#endif

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__bsdi__) || defined(BSD)
  #define bsd_ 1
#else
  #define bsd_ 0
#endif

#if defined(__sun) || defined(__sun__) || defined(sun) || defined(__SVR4) || defined(__sysv__) || defined(_SYSV)
  #define sysv_ 1
#else
  #define sysv_ 0
#endif

#if defined(__syllable__) || defined(SYLLABLE)
  #define syllable_ 1
#else
  #define syllable_ 0
#endif

#if defined(__atheos__) || defined(ATHEOS)
  #define atheos_ 1
#else
  #define atheos_ 0
#endif

#if defined(__SKYOS__) || defined(SKYOS)
  #define skyos_ 1
#else
  #define skyos_ 0
#endif

#if defined(__AROS__) || defined(AROS)
  #define aros_ 1
#else
  #define aros_ 0
#endif

#if defined(plan9) || defined(PLAN9)
  #define plan9_ 1
#else
  #define plan9_ 0
#endif

#if defined(INFERNO) || defined(__INFERNO__)
  #define inferno_ 1
#else
  #define inferno_ 0
#endif

#if defined(__GNU__) && defined(__MACH__) && defined(__gnu_hurd__)
  #define hurd_ 1
#else
  #define hurd_ 0
#endif

#if defined(__FreeBSD_kernel__) || defined(__GNU_kFreeBSD__)
  #define kfreebsd_ 1
#else
  #define kfreebsd_ 0
#endif

#if defined(__VMS) || defined(VMS) || defined(__VMS_VER)
  #define openvms_ 1
#else
  #define openvms_ 0
#endif

#if defined(__TANDEM) || defined(__NONSTOP__) || defined(TNS)
  #define nonstop_ 1
#else
  #define nonstop_ 0
#endif

#if defined(__UNIXWARE__) || defined(UNIXWARE)
  #define unixware_ 1
#else
  #define unixware_ 0
#endif

#if defined(__OPENSERVER__) || defined(OPENSERVER)
  #define openserver_ 1
#else
  #define openserver_ 0
#endif

#if defined(_AIX) || defined(__AIX) || defined(__TOS_AIX__)
  #define aix_ 1
#else
  #define aix_ 0
#endif

#if defined(__hpux) || defined(__hpux__) || defined(_HPUX_SOURCE)
  #define hpux_ 1
#else
  #define hpux_ 0
#endif

#if defined(sgi) || defined(__sgi) || defined(IRIX)
  #define irix_ 1
#else
  #define irix_ 0
#endif

#if defined(__osf__) || defined(__osf) || defined(__TRU64__)
  #define tru64_ 1
#else
  #define tru64_ 0
#endif

#if defined(ultrix) || defined(__ultrix) || defined(__ultrix__)
  #define ultrix_ 1
#else
  #define ultrix_ 0
#endif

#if defined(apollo) || defined(__apollo) || defined(DOMAINOS)
  #define domainos_ 1
#else
  #define domainos_ 0
#endif

#if defined(news) || defined(__news) || defined(SONYNEWS)
  #define news_ 1
#else
  #define news_ 0
#endif

#if defined(sun) || defined(__sun) && !defined(__SVR4)
  #define sunos_ 1
#else
  #define sunos_ 0
#endif

#if defined(__XENIX__) || defined(XENIX)
  #define xenix_ 1
#else
  #define xenix_ 0
#endif

#if defined(UCOS) || defined(uCOS) || defined(__UCOS__)
  #define ucos_ 1
#else
  #define ucos_ 0
#endif

#if defined(EMBOS) || defined(__EMBOS__)
  #define embos_ 1
#else
  #define embos_ 0
#endif

#if defined(SCMX) || defined(__SCMX__)
  #define scmx_ 1
#else
  #define scmx_ 0
#endif

#if defined(MQX) || defined(__MQX__)
  #define mqx_ 1
#else
  #define mqx_ 0
#endif

#if defined(__TIZEN__) || defined(TIZEN)
  #define tizen_ 1
#else
  #define tizen_ 0
#endif

#if defined(__WEBOS__) || defined(WEBOS)
  #define webos_ 1
#else
  #define webos_ 0
#endif

#if defined(__KAIOS__) || defined(KAIOS)
  #define kaios_ 1
#else
  #define kaios_ 0
#endif

#if defined(__FIREOS__) || defined(FIREOS)
  #define fireos_ 1
#else
  #define fireos_ 0
#endif

#if defined(__COLOROS__) || defined(COLOROS)
  #define coloros_ 1
#else
  #define coloros_ 0
#endif

#if defined(__HARMONYOS__) || defined(HARMONYOS) || defined(__OHOS__)
  #define harmonyos_ 1
#else
  #define harmonyos_ 0
#endif

#if defined(__HYPEROS__) || defined(HYPEROS)
  #define hyperos_ 1
#else
  #define hyperos_ 0
#endif

#if defined(__PALMOS__) || defined(PALMOS)
  #define palm_ 1
#else
  #define palm_ 0
#endif

#if defined(__PALMWEBOS__)
  #define webos_old_ 1
#else
  #define webos_old_ 0
#endif

#if defined(__SYMBIAN__) || defined(SYMBIAN)
  #define symbian_ 1
#else
  #define symbian_ 0
#endif

#if defined(__WINPHONE__) || defined(_WINPHONE)
  #define windows_phone_ 1
#else
  #define windows_phone_ 0
#endif

#if defined(__WINMOBILE__) || defined(_WINMOBILE)
  #define windows_mobile_ 1
#else
  #define windows_mobile_ 0
#endif

#if defined(__BLACKBERRY__) || defined(BLACKBERRY)
  #define blackberry_ 1
#else
  #define blackberry_ 0
#endif

#if defined(__MEEGO__) || defined(MEEGO)
  #define meego_ 1
#else
  #define meego_ 0
#endif

#if defined(__MAEMO__) || defined(MAEMO)
  #define maemo_ 1
#else
  #define maemo_ 0
#endif

#if defined(__SAILFISH__) || defined(SAILFISH)
  #define sailfish_ 1
#else
  #define sailfish_ 0
#endif

#if defined(__TIZENRT__)
  #define tizen_rt_ 1
#else
  #define tizen_rt_ 0
#endif

#if defined(__NUTTX__) || defined(NUTTX)
  #define nuttx_ 1
#else
  #define nuttx_ 0
#endif

#if defined(__CONTIKI__) || defined(CONTIKI)
  #define contiki_ 1
#else
  #define contiki_ 0
#endif

#if defined(__TINYOS__) || defined(TINYOS)
  #define tinyos_ 1
#else
  #define tinyos_ 0
#endif

#if defined(__RIOT__) || defined(RIOT)
  #define riot_ 1
#else
  #define riot_ 0
#endif

#if defined(__MYNEWT__) || defined(MYNEWT)
  #define mynewt_ 1
#else
  #define mynewt_ 0
#endif

#if defined(__MBED__) || defined(MBED)
  #define mbed_ 1
#else
  #define mbed_ 0
#endif

#if defined(ARDUINO) || defined(__ARDUINO__) || defined(ARDUINO_ARCH_AVR)
  #define arduino_ 1
#else
  #define arduino_ 0
#endif

#if defined(ESP_PLATFORM) || defined(ESP_IDF_VERSION)
  #define esp_idf_ 1
#else
  #define esp_idf_ 0
#endif

#if defined(__RASPBIAN__) || defined(RASPBIAN)
  #define raspbian_ 1
#else
  #define raspbian_ 0
#endif

#if defined(__YOCTO__) || defined(YOCTO)
  #define yocto_ 1
#else
  #define yocto_ 0
#endif

#if defined(__OPENWRT__) || defined(OPENWRT)
  #define openwrt_ 1
#else
  #define openwrt_ 0
#endif

#if defined(__DDWRT__) || defined(DDWRT)
  #define ddwrt_ 1
#else
  #define ddwrt_ 0
#endif

#if defined(__ROCKBOX__) || defined(ROCKBOX)
  #define rockbox_ 1
#else
  #define rockbox_ 0
#endif

#if defined(__TOARU__) || defined(TOARU)
  #define toaru_ 1
#else
  #define toaru_ 0
#endif

#if defined(__SORTIX__) || defined(SORTIX)
  #define sortix_ 1
#else
  #define sortix_ 0
#endif

#if defined(__HELENOS__) || defined(HELENOS)
  #define helenos_ 1
#else
  #define helenos_ 0
#endif

#if defined(__GENODE__) || defined(GENODE)
  #define genode_ 1
#else
  #define genode_ 0
#endif

#if defined(__SEL4__) || defined(SEL4)
  #define sel4_ 1
#else
  #define sel4_ 0
#endif

#if defined(__APPLE__) && defined(__MACH__)
  #define xnu_ 1
#else
  #define xnu_ 0
#endif

#if defined(_WIN32) || defined(_WIN64)
  #define nt_ 1
#else
  #define nt_ 0
#endif

#if defined(__MACH__) && !defined(__APPLE__)
  #define mach_ 1
#else
  #define mach_ 0
#endif

#if defined(__LK__) || defined(LK)
  #define lk_ 1
#else
  #define lk_ 0
#endif

#if defined(__FLATPAK__) || defined(FLATPAK)
  #define flatpak_ 1
#else
  #define flatpak_ 0
#endif

#if defined(__SNAP__) || defined(SNAP)
  #define snap_ 1
#else
  #define snap_ 0
#endif

#if defined(__APPIMAGE__) || defined(APPIMAGE)
  #define appimage_ 1
#else
  #define appimage_ 0
#endif

#if defined(__DOCKER__) || defined(DOCKER)
  #define docker_ 1
#else
  #define docker_ 0
#endif

#if defined(__PODMAN__) || defined(PODMAN)
  #define podman_ 1
#else
  #define podman_ 0
#endif

#if defined(CI) || defined(__CI__) || defined(CONTINUOUS_INTEGRATION)
  #define ci_ 1
#else
  #define ci_ 0
#endif

#if defined(GITHUB_ACTIONS) || defined(__GITHUB_ACTIONS__)
  #define github_actions_ 1
#else
  #define github_actions_ 0
#endif

#if defined(GITLAB_CI) || defined(__GITLAB_CI__)
  #define gitlab_ci_ 1
#else
  #define gitlab_ci_ 0
#endif

#if defined(TRAVIS) || defined(__TRAVIS__)
  #define travis_ 1
#else
  #define travis_ 0
#endif

#if defined(JENKINS) || defined(__JENKINS__)
  #define jenkins_ 1
#else
  #define jenkins_ 0
#endif

#if defined(APPVEYOR) || defined(__APPVEYOR__)
  #define appveyor_ 1
#else
  #define appveyor_ 0
#endif

#if defined(CIRCLECI) || defined(__CIRCLECI__)
  #define circleci_ 1
#else
  #define circleci_ 0
#endif

#if defined(__VALGRIND__) || defined(VALGRIND)
  #define valgrind_ 1
#else
  #define valgrind_ 0
#endif

#if defined(__SANITIZE_ADDRESS__) || defined(__ADDRESS_SANITIZER__) || defined(_ADDRESS_SANITIZER)
  #define asan_ 1
#else
  #define asan_ 0
#endif

#if defined(__SANITIZE_THREAD__) || defined(__THREAD_SANITIZER__) || defined(_THREAD_SANITIZER)
  #define tsan_ 1
#else
  #define tsan_ 0
#endif

#if defined(__SANITIZE_UNDEFINED__) || defined(__UNDEFINED_SANITIZER__) || defined(_UNDEFINED_SANITIZER)
  #define ubsan_ 1
#else
  #define ubsan_ 0
#endif

#if defined(__SANITIZE_MEMORY__) || defined(__MEMORY_SANITIZER__) || defined(_MEMORY_SANITIZER)
  #define msan_ 1
#else
  #define msan_ 0
#endif

#if defined(__COVERAGE__) || defined(COVERAGE) || defined(__GCOV__)
  #define cov_ 1
#else
  #define cov_ 0
#endif

#undef clang_apple_
#undef clang_google_
#undef clang_android_
#undef clang_emscripten_
#undef riscv_cc_
#undef arm_none_eabi_
#undef avr_gcc_
#undef mips_gcc_
#undef powerpc_gcc_
#undef sparc_gcc_
#undef csky_cc_
#undef nios2_cc_
#undef microblaze_cc_
#undef or1k_cc_
#undef kalimba_cc_
#undef tms320_cc_
#undef clang_ver_
#undef gcc_ver_
#undef msvc_ver_
#undef icc_ver_
#undef nvcc_ver_
#undef cray_ver_
#undef iar_ver_
#undef keil_ver_
#undef sdcc_ver_
#undef csky_
#undef nios2_
#undef microblaze_
#undef or1k_
#undef kalimba_
#undef mep_
#undef moxie_
#undef visium_
#undef frv_
#undef iq2000_
#undef lm32_
#undef m32c_
#undef mmix_
#undef nds32_
#undef pdp11_
#undef pru_
#undef tile_
#undef tilepro_
#undef tilegx_
#undef unicore32_
#undef xtensa_diamond_
#undef z80_
#undef z8000_
#undef z80000_
#undef ez80_
#undef r800_
#undef gbz80_
#undef h8300_
#undef h8500_
#undef lattice_
#undef pic_
#undef pic18_
#undef pic24_
#undef pic32_
#undef stm8_
#undef stm32_
#undef st7_
#undef super10_
#undef tms320_
#undef tms470_
#undef tms570_
#undef xcore_
#undef darling_
#undef mirage_
#undef includeos_
#undef osv_
#undef unikraft_
#undef nanos_
#undef hermit_
#undef rump_
#undef akaros_
#undef barrelfish_
#undef chibi_
#undef distortos_
#undef f9_
#undef femtos_
#undef frosteds_
#undef funks_
#undef geckos_
#undef hcos_
#undef josek_
#undef l4re_
#undef m3_
#undef manux_
#undef mkernel_
#undef moose_
#undef nebulet_
#undef osek_
#undef parrot_
#undef phantom_
#undef picoos_
#undef pik_
#undef prex_
#undef puff_
#undef pure_
#undef raw_
#undef rex_
#undef rkernel_
#undef rthal_
#undef rtlinux_
#undef saros_
#undef seos_
#undef shark_
#undef siberite_
#undef simple_
#undef sinos_
#undef skronk_
#undef smartos_
#undef smx_
#undef snake_
#undef snow_
#undef solar_
#undef sparrow_
#undef sprite_
#undef starfish_
#undef stone_
#undef storm_
#undef stratus_
#undef sunrise_
#undef swift_
#undef talos_
#undef tango_
#undef taos_
#undef theos_
#undef thor_
#undef thunder_
#undef tick_
#undef tinix_
#undef tom_
#undef topaz_
#undef topsy_
#undef tramp_
#undef triton_
#undef trusted_
#undef tum_
#undef turtle_
#undef twister_
#undef typhoon_
#undef ubuntu_
#undef debian_
#undef fedora_
#undef arch_
#undef gentoo_
#undef suse_
#undef redhat_
#undef centos_
#undef rocky_
#undef alma_
#undef oracle_
#undef scientific_
#undef clear_
#undef kali_
#undef mint_
#undef popos_
#undef elementary_
#undef zorin_
#undef nixos_
#undef guix_
#undef voids_
#undef alpine_
#undef busybox_
#undef toybox_
#undef musl_
#undef glibc_
#undef uclibc_
#undef dietlibc_
#undef newlib_
#undef picolibc_
#undef bionic_
#undef cosmopolitan_
#undef bwrap_
#undef firejail_
#undef nsjail_
#undef gvisor_
#undef kata_
#undef firecracker_
#undef qemu_
#undef kvm_
#undef xen_
#undef hyperv_
#undef vmware_
#undef virtualbox_
#undef parallels_
#undef bhyve_
#undef chroot_
#undef overlayfs_
#undef aufs_
#undef fuse_
#undef selinux_
#undef apparmor_
#undef tomoyo_
#undef smack_
#undef yama_
#undef landlock_
#undef seccomp_
#undef pledge_
#undef unveil_
#undef capsicum_
#undef sandbox_
#undef lwip_
#undef uip_
#undef freertos_tcp_
#undef open_tcp_
#undef picotcp_
#undef mbedtls_
#undef openssl_
#undef libressl_
#undef boringssl_
#undef wolfssl_
#undef gnutls_
#undef matrixssl_
#undef cyassl_
#undef s2n_
#undef picotls_
#undef c_annex_k_
#undef c_annex_d_
#undef c_annex_f_
#undef c_annex_g_
#undef c_annex_h_
#undef c_annex_i_
#undef c_annex_j_
#undef c_annex_l_
#undef c_noreturn_
#undef c_nodiscard_
#undef c_maybe_unused_
#undef c_deprecated_
#undef c_fallthrough_
#undef c_unsequenced_
#undef c_reproducible_
#undef cpp_lib_memory_resource_
#undef cpp_lib_polymorphic_allocator_
#undef cpp_lib_parallel_algorithm_
#undef cmake_
#undef make_
#undef ninja_
#undef meson_
#undef bazel_
#undef buck2_
#undef scons_
#undef waf_
#undef premake_
#undef qmake_
#undef qbs_
#undef autotools_
#undef gn_
#undef blade_
#undef please_
#undef pants_
#undef maven_
#undef gradle_
#undef msbuild_
#undef xcode_
#undef ndk_
#undef platformio_

#if defined(__apple_build_version__)
  #define clang_apple_ 1
#else
  #define clang_apple_ 0
#endif

#if defined(__clang__) && !defined(__apple_build_version__) && !defined(__ANDROID__) && !defined(__EMSCRIPTEN__)
  #define clang_google_ 1
#else
  #define clang_google_ 0
#endif

#if defined(__clang__) && defined(__ANDROID__)
  #define clang_android_ 1
#else
  #define clang_android_ 0
#endif

#if defined(__clang__) && defined(__EMSCRIPTEN__)
  #define clang_emscripten_ 1
#else
  #define clang_emscripten_ 0
#endif

#if defined(__riscv) && defined(__GNUC__)
  #define riscv_cc_ 1
#else
  #define riscv_cc_ 0
#endif

#if defined(__arm__) && !defined(__linux__) && !defined(__ANDROID__) && defined(__GNUC__)
  #define arm_none_eabi_ 1
#else
  #define arm_none_eabi_ 0
#endif

#if defined(__AVR__) && defined(__GNUC__)
  #define avr_gcc_ 1
#else
  #define avr_gcc_ 0
#endif

#if defined(__mips__) && defined(__GNUC__)
  #define mips_gcc_ 1
#else
  #define mips_gcc_ 0
#endif

#if defined(__powerpc__) && defined(__GNUC__)
  #define powerpc_gcc_ 1
#else
  #define powerpc_gcc_ 0
#endif

#if defined(__sparc__) && defined(__GNUC__)
  #define sparc_gcc_ 1
#else
  #define sparc_gcc_ 0
#endif

#if defined(__CSKY__) || defined(__csky__)
  #define csky_cc_ 1
  #define csky_ 1
#else
  #define csky_cc_ 0
  #define csky_ 0
#endif

#if defined(__nios2__) || defined(NIOS2)
  #define nios2_cc_ 1
  #define nios2_ 1
#else
  #define nios2_cc_ 0
  #define nios2_ 0
#endif

#if defined(__MICROBLAZE__) || defined(MICROBLAZE)
  #define microblaze_cc_ 1
  #define microblaze_ 1
#else
  #define microblaze_cc_ 0
  #define microblaze_ 0
#endif

#if defined(__or1k__) || defined(OR1K)
  #define or1k_cc_ 1
  #define or1k_ 1
#else
  #define or1k_cc_ 0
  #define or1k_ 0
#endif

#if defined(__KALIMBA__) || defined(KALIMBA)
  #define kalimba_cc_ 1
  #define kalimba_ 1
#else
  #define kalimba_cc_ 0
  #define kalimba_ 0
#endif

#if defined(_TMS320C6X) || defined(_TMS320C5X) || defined(_TMS320C54X) || defined(_TMS320C55X)
  #define tms320_cc_ 1
#else
  #define tms320_cc_ 0
#endif

#if defined(__clang_version__)
  #define clang_ver_ __clang_version__
#elif defined(__clang_major__)
  #define clang_ver_ __clang_major__
#else
  #define clang_ver_ 0
#endif

#if defined(__GNUC__)
  #define gcc_ver_ __GNUC__
#else
  #define gcc_ver_ 0
#endif

#if defined(_MSC_VER)
  #define msvc_ver_ _MSC_VER
#else
  #define msvc_ver_ 0
#endif

#if defined(__INTEL_COMPILER)
  #define icc_ver_ __INTEL_COMPILER
#elif defined(__ICC)
  #define icc_ver_ __ICC
#else
  #define icc_ver_ 0
#endif

#if defined(__CUDACC_VER_MAJOR__)
  #define nvcc_ver_ __CUDACC_VER_MAJOR__
#else
  #define nvcc_ver_ 0
#endif

#if defined(_CRAYC)
  #define cray_ver_ _CRAYC
#else
  #define cray_ver_ 0
#endif

#if defined(__IAR_SYSTEMS_ICC__)
  #define iar_ver_ __IAR_SYSTEMS_ICC__
#else
  #define iar_ver_ 0
#endif

#if defined(__KEIL__)
  #define keil_ver_ 1
#else
  #define keil_ver_ 0
#endif

#if defined(SDCC)
  #define sdcc_ver_ SDCC
#else
  #define sdcc_ver_ 0
#endif

#if defined(__mep__) || defined(MEP)
  #define mep_ 1
#else
  #define mep_ 0
#endif

#if defined(__moxie__) || defined(MOXIE)
  #define moxie_ 1
#else
  #define moxie_ 0
#endif

#if defined(__visium__) || defined(VISIUM)
  #define visium_ 1
#else
  #define visium_ 0
#endif

#if defined(__frv__) || defined(FRV)
  #define frv_ 1
#else
  #define frv_ 0
#endif

#if defined(__iq2000__) || defined(IQ2000)
  #define iq2000_ 1
#else
  #define iq2000_ 0
#endif

#if defined(__lm32__) || defined(LM32)
  #define lm32_ 1
#else
  #define lm32_ 0
#endif

#if defined(__m32c__) || defined(M32C)
  #define m32c_ 1
#else
  #define m32c_ 0
#endif

#if defined(__mmix__) || defined(MMIX)
  #define mmix_ 1
#else
  #define mmix_ 0
#endif

#if defined(__nds32__) || defined(NDS32)
  #define nds32_ 1
#else
  #define nds32_ 0
#endif

#if defined(__pdp11__) || defined(PDP11)
  #define pdp11_ 1
#else
  #define pdp11_ 0
#endif

#if defined(__PRU__) || defined(PRU) || defined(__PRU_C__)
  #define pru_ 1
#else
  #define pru_ 0
#endif

#if defined(__tile__) || defined(TILE)
  #define tile_ 1
#else
  #define tile_ 0
#endif

#if defined(__tilepro__) || defined(TILEPRO)
  #define tilepro_ 1
#else
  #define tilepro_ 0
#endif

#if defined(__tilegx__) || defined(TILEGX)
  #define tilegx_ 1
#else
  #define tilegx_ 0
#endif

#if defined(__unicore32__) || defined(UNICORE32)
  #define unicore32_ 1
#else
  #define unicore32_ 0
#endif

#if defined(__XTENSA_DIAMOND__) || defined(XTENSA_DIAMOND)
  #define xtensa_diamond_ 1
#else
  #define xtensa_diamond_ 0
#endif

#if defined(__Z80__) || defined(Z80) || defined(SDCC_z80)
  #define z80_ 1
#else
  #define z80_ 0
#endif

#if defined(__Z8000__) || defined(Z8000)
  #define z8000_ 1
#else
  #define z8000_ 0
#endif

#if defined(__Z80000__) || defined(Z80000)
  #define z80000_ 1
#else
  #define z80000_ 0
#endif

#if defined(__EZ80__) || defined(EZ80)
  #define ez80_ 1
#else
  #define ez80_ 0
#endif

#if defined(__R800__) || defined(R800)
  #define r800_ 1
#else
  #define r800_ 0
#endif

#if defined(__GBZ80__) || defined(GBZ80) || defined(SDCC_gbz80)
  #define gbz80_ 1
#else
  #define gbz80_ 0
#endif

#if defined(__H8300__) || defined(H8300)
  #define h8300_ 1
#else
  #define h8300_ 0
#endif

#if defined(__H8500__) || defined(H8500)
  #define h8500_ 1
#else
  #define h8500_ 0
#endif

#if defined(__LATTICE__) || defined(LATTICE)
  #define lattice_ 1
#else
  #define lattice_ 0
#endif

#if defined(_PIC) || defined(__PIC__) || defined(__pic__)
  #define pic_ 1
#else
  #define pic_ 0
#endif

#if defined(_PIC18) || defined(__PIC18__) || defined(__18F__)
  #define pic18_ 1
#else
  #define pic18_ 0
#endif

#if defined(__PIC24__) || defined(_PIC24_) || defined(__PIC24F__) || defined(__PIC24H__)
  #define pic24_ 1
#else
  #define pic24_ 0
#endif

#if defined(__PIC32__) || defined(_PIC32_) || defined(__PIC32MX__) || defined(__PIC32MZ__)
  #define pic32_ 1
#else
  #define pic32_ 0
#endif

#if defined(__STM8__) || defined(STM8)
  #define stm8_ 1
#else
  #define stm8_ 0
#endif

#if defined(__STM32__) || defined(STM32)
  #define stm32_ 1
#else
  #define stm32_ 0
#endif

#if defined(__ST7__) || defined(ST7)
  #define st7_ 1
#else
  #define st7_ 0
#endif

#if defined(__SUPER10__) || defined(SUPER10)
  #define super10_ 1
#else
  #define super10_ 0
#endif

#if defined(__TMS320__) || defined(_TMS320)
  #define tms320_ 1
#else
  #define tms320_ 0
#endif

#if defined(__TMS470__) || defined(_TMS470)
  #define tms470_ 1
#else
  #define tms470_ 0
#endif

#if defined(__TMS570__) || defined(_TMS570)
  #define tms570_ 1
#else
  #define tms570_ 0
#endif

#if defined(__XCORE__) || defined(XCORE) || defined(__XS1B__)
  #define xcore_ 1
#else
  #define xcore_ 0
#endif

#if defined(__DARLING__) || defined(DARLING)
  #define darling_ 1
#else
  #define darling_ 0
#endif

#if defined(__MIRAGE__) || defined(MIRAGE)
  #define mirage_ 1
#else
  #define mirage_ 0
#endif

#if defined(__INCLUDEOS__) || defined(INCLUDEOS)
  #define includeos_ 1
#else
  #define includeos_ 0
#endif

#if defined(__OSV__) || defined(OSV)
  #define osv_ 1
#else
  #define osv_ 0
#endif

#if defined(__UNIKRAFT__) || defined(UNIKRAFT)
  #define unikraft_ 1
#else
  #define unikraft_ 0
#endif

#if defined(__NANOS__) || defined(NANOS)
  #define nanos_ 1
#else
  #define nanos_ 0
#endif

#if defined(__HERMIT__) || defined(HERMIT)
  #define hermit_ 1
#else
  #define hermit_ 0
#endif

#if defined(__RUMP__) || defined(RUMP)
  #define rump_ 1
#else
  #define rump_ 0
#endif

#if defined(__AKAROS__) || defined(AKAROS)
  #define akaros_ 1
#else
  #define akaros_ 0
#endif

#if defined(__BARRELFISH__) || defined(BARRELFISH)
  #define barrelfish_ 1
#else
  #define barrelfish_ 0
#endif

#if defined(__CHIBIOS__) || defined(CHIBIOS)
  #define chibi_ 1
#else
  #define chibi_ 0
#endif

#if defined(__DISTORTOS__) || defined(DISTORTOS)
  #define distortos_ 1
#else
  #define distortos_ 0
#endif

#if defined(__F9__) || defined(F9)
  #define f9_ 1
#else
  #define f9_ 0
#endif

#if defined(__FEMTOS__) || defined(FEMTOS)
  #define femtos_ 1
#else
  #define femtos_ 0
#endif

#if defined(__FROSTED__) || defined(FROSTED)
  #define frosteds_ 1
#else
  #define frosteds_ 0
#endif

#if defined(__FUNKOS__) || defined(FUNKOS)
  #define funks_ 1
#else
  #define funks_ 0
#endif

#if defined(__GECKOS__) || defined(GECKOS)
  #define geckos_ 1
#else
  #define geckos_ 0
#endif

#if defined(__HCOS__) || defined(HCOS)
  #define hcos_ 1
#else
  #define hcos_ 0
#endif

#if defined(__JOSEK__) || defined(JOSEK)
  #define josek_ 1
#else
  #define josek_ 0
#endif

#if defined(__L4RE__) || defined(L4RE)
  #define l4re_ 1
#else
  #define l4re_ 0
#endif

#if defined(__M3__) || defined(M3OS)
  #define m3_ 1
#else
  #define m3_ 0
#endif

#if defined(__MANUX__) || defined(MANUX)
  #define manux_ 1
#else
  #define manux_ 0
#endif

#if defined(__MKERNEL__) || defined(MKERNEL)
  #define mkernel_ 1
#else
  #define mkernel_ 0
#endif

#if defined(__MOOSE__) || defined(MOOSE)
  #define moose_ 1
#else
  #define moose_ 0
#endif

#if defined(__NEBULET__) || defined(NEBULET)
  #define nebulet_ 1
#else
  #define nebulet_ 0
#endif

#if defined(__OSEK__) || defined(OSEK) || defined(OSEKOS)
  #define osek_ 1
#else
  #define osek_ 0
#endif

#if defined(__PARROT__) || defined(PARROT)
  #define parrot_ 1
#else
  #define parrot_ 0
#endif

#if defined(__PHANTOM__) || defined(PHANTOM)
  #define phantom_ 1
#else
  #define phantom_ 0
#endif

#if defined(__PICOOS__) || defined(PICOOS)
  #define picoos_ 1
#else
  #define picoos_ 0
#endif

#if defined(__PIKOS__) || defined(PIKOS)
  #define pik_ 1
#else
  #define pik_ 0
#endif

#if defined(__PREX__) || defined(PREX)
  #define prex_ 1
#else
  #define prex_ 0
#endif

#if defined(__PUFF__) || defined(PUFF)
  #define puff_ 1
#else
  #define puff_ 0
#endif

#if defined(__PURE__) || defined(PUREOS)
  #define pure_ 1
#else
  #define pure_ 0
#endif

#if defined(__RAW__) || defined(RAWOS)
  #define raw_ 1
#else
  #define raw_ 0
#endif

#if defined(__REX__) || defined(REXOS)
  #define rex_ 1
#else
  #define rex_ 0
#endif

#if defined(__RKERNEL__) || defined(RKERNEL)
  #define rkernel_ 1
#else
  #define rkernel_ 0
#endif

#if defined(__RTHAL__) || defined(RTHAL)
  #define rthal_ 1
#else
  #define rthal_ 0
#endif

#if defined(__RTLINUX__) || defined(RTLINUX)
  #define rtlinux_ 1
#else
  #define rtlinux_ 0
#endif

#if defined(__SAROS__) || defined(SAROS)
  #define saros_ 1
#else
  #define saros_ 0
#endif

#if defined(__SEOS__) || defined(SEOS)
  #define seos_ 1
#else
  #define seos_ 0
#endif

#if defined(__SHARK__) || defined(SHARKOS)
  #define shark_ 1
#else
  #define shark_ 0
#endif

#if defined(__SIBERITE__) || defined(SIBERITE)
  #define siberite_ 1
#else
  #define siberite_ 0
#endif

#if defined(__SIMPLE__) || defined(SIMPLEOS)
  #define simple_ 1
#else
  #define simple_ 0
#endif

#if defined(__SINOS__) || defined(SINOS)
  #define sinos_ 1
#else
  #define sinos_ 0
#endif

#if defined(__SKRONK__) || defined(SKRONK)
  #define skronk_ 1
#else
  #define skronk_ 0
#endif

#if defined(__SMARTOS__) || defined(SMARTOS)
  #define smartos_ 1
#else
  #define smartos_ 0
#endif

#if defined(__SMX__) || defined(SMX)
  #define smx_ 1
#else
  #define smx_ 0
#endif

#if defined(__SNAKE__) || defined(SNAKEOS)
  #define snake_ 1
#else
  #define snake_ 0
#endif

#if defined(__SNOW__) || defined(SNOWOS)
  #define snow_ 1
#else
  #define snow_ 0
#endif

#if defined(__SOLAR__) || defined(SOLAROS)
  #define solar_ 1
#else
  #define solar_ 0
#endif

#if defined(__SPARROW__) || defined(SPARROWOS)
  #define sparrow_ 1
#else
  #define sparrow_ 0
#endif

#if defined(__SPRITE__) || defined(SPRITEOS)
  #define sprite_ 1
#else
  #define sprite_ 0
#endif

#if defined(__STARFISH__) || defined(STARFISHOS)
  #define starfish_ 1
#else
  #define starfish_ 0
#endif

#if defined(__STONE__) || defined(STONEOS)
  #define stone_ 1
#else
  #define stone_ 0
#endif

#if defined(__STORM__) || defined(STORMOS)
  #define storm_ 1
#else
  #define storm_ 0
#endif

#if defined(__STRATUS__) || defined(STRATUSOS)
  #define stratus_ 1
#else
  #define stratus_ 0
#endif

#if defined(__SUNRISE__) || defined(SUNRISEOS)
  #define sunrise_ 1
#else
  #define sunrise_ 0
#endif

#if defined(__SWIFTOS__) || defined(SWIFTOS)
  #define swift_ 1
#else
  #define swift_ 0
#endif

#if defined(__TALOS__) || defined(TALOS)
  #define talos_ 1
#else
  #define talos_ 0
#endif

#if defined(__TANGO__) || defined(TANGOOS)
  #define tango_ 1
#else
  #define tango_ 0
#endif

#if defined(__TAOS__) || defined(TAOS)
  #define taos_ 1
#else
  #define taos_ 0
#endif

#if defined(__THEOS__) || defined(THEOS)
  #define theos_ 1
#else
  #define theos_ 0
#endif

#if defined(__THOR__) || defined(THOROS)
  #define thor_ 1
#else
  #define thor_ 0
#endif

#if defined(__THUNDER__) || defined(THUNDEROS)
  #define thunder_ 1
#else
  #define thunder_ 0
#endif

#if defined(__TICK__) || defined(TICKOS)
  #define tick_ 1
#else
  #define tick_ 0
#endif

#if defined(__TINIX__) || defined(TINIX)
  #define tinix_ 1
#else
  #define tinix_ 0
#endif

#if defined(__TOMOS__) || defined(TOMOS)
  #define tom_ 1
#else
  #define tom_ 0
#endif

#if defined(__TOPAZ__) || defined(TOPAZOS)
  #define topaz_ 1
#else
  #define topaz_ 0
#endif

#if defined(__TOPSY__) || defined(TOPSYOS)
  #define topsy_ 1
#else
  #define topsy_ 0
#endif

#if defined(__TRAMP__) || defined(TRAMPOS)
  #define tramp_ 1
#else
  #define tramp_ 0
#endif

#if defined(__TRITON__) || defined(TRITONOS)
  #define triton_ 1
#else
  #define triton_ 0
#endif

#if defined(__TRUSTED__) || defined(TRUSTEDOS)
  #define trusted_ 1
#else
  #define trusted_ 0
#endif

#if defined(__TUM__) || defined(TUMOS)
  #define tum_ 1
#else
  #define tum_ 0
#endif

#if defined(__TURTLE__) || defined(TURTLEOS)
  #define turtle_ 1
#else
  #define turtle_ 0
#endif

#if defined(__TWISTER__) || defined(TWISTEROS)
  #define twister_ 1
#else
  #define twister_ 0
#endif

#if defined(__TYPHOON__) || defined(TYPHOONOS)
  #define typhoon_ 1
#else
  #define typhoon_ 0
#endif

#if defined(__UBUNTU__) || defined(UBUNTU)
  #define ubuntu_ 1
#else
  #define ubuntu_ 0
#endif

#if defined(__DEBIAN__) || defined(DEBIAN)
  #define debian_ 1
#else
  #define debian_ 0
#endif

#if defined(__FEDORA__) || defined(FEDORA)
  #define fedora_ 1
#else
  #define fedora_ 0
#endif

#if defined(__ARCH__) || defined(ARCHLINUX)
  #define arch_ 1
#else
  #define arch_ 0
#endif

#if defined(__GENTOO__) || defined(GENTOO)
  #define gentoo_ 1
#else
  #define gentoo_ 0
#endif

#if defined(__SUSE__) || defined(SUSE)
  #define suse_ 1
#else
  #define suse_ 0
#endif

#if defined(__REDHAT__) || defined(REDHAT)
  #define redhat_ 1
#else
  #define redhat_ 0
#endif

#if defined(__CENTOS__) || defined(CENTOS)
  #define centos_ 1
#else
  #define centos_ 0
#endif

#if defined(__ROCKY__) || defined(ROCKY)
  #define rocky_ 1
#else
  #define rocky_ 0
#endif

#if defined(__ALMA__) || defined(ALMA)
  #define alma_ 1
#else
  #define alma_ 0
#endif

#if defined(__ORACLE__) || defined(ORACLELINUX)
  #define oracle_ 1
#else
  #define oracle_ 0
#endif

#if defined(__SCIENTIFIC__) || defined(SCIENTIFIC)
  #define scientific_ 1
#else
  #define scientific_ 0
#endif

#if defined(__CLEAR__) || defined(CLEARLINUX)
  #define clear_ 1
#else
  #define clear_ 0
#endif

#if defined(__KALI__) || defined(KALI)
  #define kali_ 1
#else
  #define kali_ 0
#endif

#if defined(__MINT__) || defined(LINUXMINT)
  #define mint_ 1
#else
  #define mint_ 0
#endif

#if defined(__POPOS__) || defined(POPOS)
  #define popos_ 1
#else
  #define popos_ 0
#endif

#if defined(__ELEMENTARY__) || defined(ELEMENTARY)
  #define elementary_ 1
#else
  #define elementary_ 0
#endif

#if defined(__ZORIN__) || defined(ZORIN)
  #define zorin_ 1
#else
  #define zorin_ 0
#endif

#if defined(__NIXOS__) || defined(NIXOS)
  #define nixos_ 1
#else
  #define nixos_ 0
#endif

#if defined(__GUIX__) || defined(GUIX)
  #define guix_ 1
#else
  #define guix_ 0
#endif

#if defined(__VOID__) || defined(VOIDLINUX)
  #define voids_ 1
#else
  #define voids_ 0
#endif

#if defined(__ALPINE__) || defined(ALPINE)
  #define alpine_ 1
#else
  #define alpine_ 0
#endif

#if defined(__BUSYBOX__) || defined(BUSYBOX)
  #define busybox_ 1
#else
  #define busybox_ 0
#endif

#if defined(__TOYBOX__) || defined(TOYBOX)
  #define toybox_ 1
#else
  #define toybox_ 0
#endif

#if defined(__MUSL__) || defined(__musl__)
  #define musl_ 1
#else
  #define musl_ 0
#endif

#if defined(__GLIBC__) || defined(__GLIBC)
  #define glibc_ 1
#else
  #define glibc_ 0
#endif

#if defined(__UCLIBC__) || defined(__uclibc__)
  #define uclibc_ 1
#else
  #define uclibc_ 0
#endif

#if defined(__DIETLIBC__) || defined(__dietlibc__)
  #define dietlibc_ 1
#else
  #define dietlibc_ 0
#endif

#if defined(__NEWLIB__) || defined(__NEWLIB)
  #define newlib_ 1
#else
  #define newlib_ 0
#endif

#if defined(__PICOLIBC__) || defined(__picolibc__)
  #define picolibc_ 1
#else
  #define picolibc_ 0
#endif

#if defined(__BIONIC__) || defined(__bionic__)
  #define bionic_ 1
#else
  #define bionic_ 0
#endif

#if defined(__COSMOPOLITAN__) || defined(COSMOPOLITAN)
  #define cosmopolitan_ 1
#else
  #define cosmopolitan_ 0
#endif

#if defined(__BWRAP__) || defined(BWRAP)
  #define bwrap_ 1
#else
  #define bwrap_ 0
#endif

#if defined(__FIREJAIL__) || defined(FIREJAIL)
  #define firejail_ 1
#else
  #define firejail_ 0
#endif

#if defined(__NSJAIL__) || defined(NSJAIL)
  #define nsjail_ 1
#else
  #define nsjail_ 0
#endif

#if defined(__GVISOR__) || defined(GVISOR)
  #define gvisor_ 1
#else
  #define gvisor_ 0
#endif

#if defined(__KATA__) || defined(KATA)
  #define kata_ 1
#else
  #define kata_ 0
#endif

#if defined(__FIRECRACKER__) || defined(FIRECRACKER)
  #define firecracker_ 1
#else
  #define firecracker_ 0
#endif

#if defined(__QEMU__) || defined(QEMU)
  #define qemu_ 1
#else
  #define qemu_ 0
#endif

#if defined(__KVM__) || defined(KVM)
  #define kvm_ 1
#else
  #define kvm_ 0
#endif

#if defined(__XEN__) || defined(XEN)
  #define xen_ 1
#else
  #define xen_ 0
#endif

#if defined(__HYPERV__) || defined(HYPERV)
  #define hyperv_ 1
#else
  #define hyperv_ 0
#endif

#if defined(__VMWARE__) || defined(VMWARE)
  #define vmware_ 1
#else
  #define vmware_ 0
#endif

#if defined(__VIRTUALBOX__) || defined(VIRTUALBOX)
  #define virtualbox_ 1
#else
  #define virtualbox_ 0
#endif

#if defined(__PARALLELS__) || defined(PARALLELS)
  #define parallels_ 1
#else
  #define parallels_ 0
#endif

#if defined(__BHYVE__) || defined(BHYVE)
  #define bhyve_ 1
#else
  #define bhyve_ 0
#endif

#if defined(__CHROOT__) || defined(CHROOT)
  #define chroot_ 1
#else
  #define chroot_ 0
#endif

#if defined(__OVERLAYFS__) || defined(OVERLAYFS)
  #define overlayfs_ 1
#else
  #define overlayfs_ 0
#endif

#if defined(__AUFS__) || defined(AUFS)
  #define aufs_ 1
#else
  #define aufs_ 0
#endif

#if defined(__FUSE__) || defined(FUSE)
  #define fuse_ 1
#else
  #define fuse_ 0
#endif

#if defined(__SELINUX__) || defined(SELINUX)
  #define selinux_ 1
#else
  #define selinux_ 0
#endif

#if defined(__APPARMOR__) || defined(APPARMOR)
  #define apparmor_ 1
#else
  #define apparmor_ 0
#endif

#if defined(__TOMOYO__) || defined(TOMOYO)
  #define tomoyo_ 1
#else
  #define tomoyo_ 0
#endif

#if defined(__SMACK__) || defined(SMACK)
  #define smack_ 1
#else
  #define smack_ 0
#endif

#if defined(__YAMA__) || defined(YAMA)
  #define yama_ 1
#else
  #define yama_ 0
#endif

#if defined(__LANDLOCK__) || defined(LANDLOCK)
  #define landlock_ 1
#else
  #define landlock_ 0
#endif

#if defined(__SECCOMP__) || defined(SECCOMP)
  #define seccomp_ 1
#else
  #define seccomp_ 0
#endif

#if defined(__PLEDGE__) || defined(PLEDGE)
  #define pledge_ 1
#else
  #define pledge_ 0
#endif

#if defined(__UNVEIL__) || defined(UNVEIL)
  #define unveil_ 1
#else
  #define unveil_ 0
#endif

#if defined(__CAPSICUM__) || defined(CAPSICUM)
  #define capsicum_ 1
#else
  #define capsicum_ 0
#endif

#if defined(__SANDBOX__) || defined(SANDBOX)
  #define sandbox_ 1
#else
  #define sandbox_ 0
#endif

#if defined(__LWIP__) || defined(LWIP)
  #define lwip_ 1
#else
  #define lwip_ 0
#endif

#if defined(__UIP__) || defined(UIP)
  #define uip_ 1
#else
  #define uip_ 0
#endif

#if defined(FREERTOS_PLUS_TCP) || defined(ipconfigUSE_TCP)
  #define freertos_tcp_ 1
#else
  #define freertos_tcp_ 0
#endif

#if defined(OPENTCP) || defined(__OPENTCP__)
  #define open_tcp_ 1
#else
  #define open_tcp_ 0
#endif

#if defined(PICOTCP) || defined(__PICOTCP__)
  #define picotcp_ 1
#else
  #define picotcp_ 0
#endif

#if defined(MBEDTLS) || defined(__MBEDTLS__)
  #define mbedtls_ 1
#else
  #define mbedtls_ 0
#endif

#if defined(OPENSSL) || defined(__OPENSSL__)
  #define openssl_ 1
#else
  #define openssl_ 0
#endif

#if defined(LIBRESSL) || defined(__LIBRESSL__)
  #define libressl_ 1
#else
  #define libressl_ 0
#endif

#if defined(BORINGSSL) || defined(__BORINGSSL__)
  #define boringssl_ 1
#else
  #define boringssl_ 0
#endif

#if defined(WOLFSSL) || defined(__WOLFSSL__)
  #define wolfssl_ 1
#else
  #define wolfssl_ 0
#endif

#if defined(GNUTLS) || defined(__GNUTLS__)
  #define gnutls_ 1
#else
  #define gnutls_ 0
#endif

#if defined(MATRIXSSL) || defined(__MATRIXSSL__)
  #define matrixssl_ 1
#else
  #define matrixssl_ 0
#endif

#if defined(CYASSL) || defined(__CYASSL__)
  #define cyassl_ 1
#else
  #define cyassl_ 0
#endif

#if defined(S2N) || defined(__S2N__)
  #define s2n_ 1
#else
  #define s2n_ 0
#endif

#if defined(PICOTLS) || defined(__PICOTLS__)
  #define picotls_ 1
#else
  #define picotls_ 0
#endif

#if defined(__STDC_LIB_EXT1__) || defined(__STDC_WANT_LIB_EXT1__)
  #define c_annex_k_ 1
#else
  #define c_annex_k_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
  #define c_annex_d_ 0
#else
  #define c_annex_d_ 0
#endif

#if defined(__STDC_IEC_559__)
  #define c_annex_f_ 1
#else
  #define c_annex_f_ 0
#endif

#if defined(__STDC_IEC_559_COMPLEX__)
  #define c_annex_g_ 1
#else
  #define c_annex_g_ 0
#endif

#if defined(__STDC_NO_THREADS__)
  #define c_annex_h_ 0
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_annex_h_ 1
#else
  #define c_annex_h_ 0
#endif

#if defined(__STDC_NO_ATOMICS__)
  #define c_annex_i_ 0
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_annex_i_ 1
#else
  #define c_annex_i_ 0
#endif

#define c_annex_j_ 1

#if defined(__STDC_ANALYZABLE__)
  #define c_annex_l_ 1
#else
  #define c_annex_l_ 0
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
  #define c_noreturn_ 1
#else
  #define c_noreturn_ 0
#endif

#if defined(__has_c_attribute) && __has_c_attribute(nodiscard)
  #define c_nodiscard_ 1
#else
  #define c_nodiscard_ 0
#endif

#if defined(__has_c_attribute) && __has_c_attribute(maybe_unused)
  #define c_maybe_unused_ 1
#else
  #define c_maybe_unused_ 0
#endif

#if defined(__has_c_attribute) && __has_c_attribute(deprecated)
  #define c_deprecated_ 1
#else
  #define c_deprecated_ 0
#endif

#if defined(__has_c_attribute) && __has_c_attribute(fallthrough)
  #define c_fallthrough_ 1
#else
  #define c_fallthrough_ 0
#endif

#if defined(__has_c_attribute) && __has_c_attribute(unsequenced)
  #define c_unsequenced_ 1
#else
  #define c_unsequenced_ 0
#endif

#if defined(__has_c_attribute) && __has_c_attribute(reproducible)
  #define c_reproducible_ 1
#else
  #define c_reproducible_ 0
#endif

#if defined(__cpp_lib_memory_resource) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_lib_memory_resource_ 1
#else
  #define cpp_lib_memory_resource_ 0
#endif

#if defined(__cpp_lib_polymorphic_allocator) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_lib_polymorphic_allocator_ 1
#else
  #define cpp_lib_polymorphic_allocator_ 0
#endif

#if defined(__cpp_lib_parallel_algorithm) || (defined(__cplusplus) && __cplusplus >= 201703L)
  #define cpp_lib_parallel_algorithm_ 1
#else
  #define cpp_lib_parallel_algorithm_ 0
#endif

#if defined(__CMAKE__) || defined(CMAKE) || defined(__cmake__)
  #define cmake_ 1
#else
  #define cmake_ 0
#endif

#if defined(MAKE) || defined(__MAKE__) || defined(MAKEFLAGS)
  #define make_ 1
#else
  #define make_ 0
#endif

#if defined(NINJA) || defined(__NINJA__) || defined(NINJA_STATUS)
  #define ninja_ 1
#else
  #define ninja_ 0
#endif

#if defined(MESON) || defined(__MESON__) || defined(MESON_BUILD_ROOT)
  #define meson_ 1
#else
  #define meson_ 0
#endif

#if defined(BAZEL) || defined(__BAZEL__) || defined(BAZEL_BUILD)
  #define bazel_ 1
#else
  #define bazel_ 0
#endif

#if defined(BUCK2) || defined(__BUCK2__)
  #define buck2_ 1
#else
  #define buck2_ 0
#endif

#if defined(SCONS) || defined(__SCONS__)
  #define scons_ 1
#else
  #define scons_ 0
#endif

#if defined(WAF) || defined(__WAF__)
  #define waf_ 1
#else
  #define waf_ 0
#endif

#if defined(PREMAKE) || defined(__PREMAKE__)
  #define premake_ 1
#else
  #define premake_ 0
#endif

#if defined(QMAKE) || defined(__QMAKE__) || defined(QMAKE_SPEC)
  #define qmake_ 1
#else
  #define qmake_ 0
#endif

#if defined(QBS) || defined(__QBS__)
  #define qbs_ 1
#else
  #define qbs_ 0
#endif

#if defined(AUTOTOOLS) || defined(__AUTOTOOLS__) || defined(ac_cv_)
  #define autotools_ 1
#else
  #define autotools_ 0
#endif

#if defined(GN) || defined(__GN__) || defined(GN_BUILD)
  #define gn_ 1
#else
  #define gn_ 0
#endif

#if defined(BLADE) || defined(__BLADE__)
  #define blade_ 1
#else
  #define blade_ 0
#endif

#if defined(PLEASE) || defined(__PLEASE__)
  #define please_ 1
#else
  #define please_ 0
#endif

#if defined(PANTS) || defined(__PANTS__)
  #define pants_ 1
#else
  #define pants_ 0
#endif

#if defined(MAVEN) || defined(__MAVEN__)
  #define maven_ 1
#else
  #define maven_ 0
#endif

#if defined(GRADLE) || defined(__GRADLE__)
  #define gradle_ 1
#else
  #define gradle_ 0
#endif

#if defined(MSBUILD) || defined(__MSBUILD__)
  #define msbuild_ 1
#else
  #define msbuild_ 0
#endif

#if defined(XCODE) || defined(__XCODE__) || defined(__APPLE_CC__)
  #define xcode_ 1
#else
  #define xcode_ 0
#endif

#if defined(NDK) || defined(__NDK__) || defined(__ANDROID_NDK__)
  #define ndk_ 1
#else
  #define ndk_ 0
#endif

#if defined(PLATFORMIO) || defined(__PLATFORMIO__) || defined(PLATFORMIO_BUILD)
  #define platformio_ 1
#else
  #define platformio_ 0
#endif

#undef i8_
#undef u8_
#undef i16_
#undef u16_
#undef i32_
#undef u32_
#undef i64_
#undef u64_
#undef i128_
#undef u128_
#undef i8_max_
#undef u8_max_
#undef i16_max_
#undef u16_max_
#undef i32_max_
#undef u32_max_
#undef i64_max_
#undef u64_max_
#undef i128_max_
#undef u128_max_

#if defined(__INT8_TYPE__)
  #define i8_ __INT8_TYPE__
  #define u8_ __UINT8_TYPE__
#elif defined(__SIZEOF_CHAR__) && __SIZEOF_CHAR__ == 1
  #define i8_ __int8
  #define u8_ __uint8
#elif defined(CHAR_BIT) && CHAR_BIT == 8
  #define i8_ __int8
  #define u8_ __uint8
#elif defined(_MSC_VER)
  #define i8_ __int8
  #define u8_ unsigned __int8
#else
  #define i8_ 0
  #define u8_ 0
#endif

#if defined(__INT8_MAX__)
  #define i8_max_ __INT8_MAX__
  #define u8_max_ __UINT8_MAX__
#elif defined(SCHAR_MAX)
  #define i8_max_ 127
  #define u8_max_ 255
#else
  #define i8_max_ 0
  #define u8_max_ 0
#endif

#if defined(__INT16_TYPE__)
  #define i16_ __INT16_TYPE__
  #define u16_ __UINT16_TYPE__
#elif defined(__SIZEOF_SHORT__) && __SIZEOF_SHORT__ == 2
  #define i16_ __int16
  #define u16_ __uint16
#elif defined(SHRT_MAX) && SHRT_MAX == 32767
  #define i16_ __int16
  #define u16_ __uint16
#elif defined(_MSC_VER)
  #define i16_ __int16
  #define u16_ unsigned __int16
#else
  #define i16_ 0
  #define u16_ 0
#endif

#if defined(__INT16_MAX__)
  #define i16_max_ __INT16_MAX__
  #define u16_max_ __UINT16_MAX__
#elif defined(SHRT_MAX)
  #define i16_max_ 32767
  #define u16_max_ 65535
#else
  #define i16_max_ 0
  #define u16_max_ 0
#endif

#if defined(__INT32_TYPE__)
  #define i32_ __INT32_TYPE__
  #define u32_ __UINT32_TYPE__
#elif defined(__SIZEOF_INT__) && __SIZEOF_INT__ == 4
  #define i32_ __int32
  #define u32_ __uint32
#elif defined(INT_MAX) && INT_MAX == 2147483647
  #define i32_ __int32
  #define u32_ __uint32
#elif defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 4
  #define i32_ __int32
  #define u32_ __uint32
#elif defined(_MSC_VER)
  #define i32_ __int32
  #define u32_ unsigned __int32
#else
  #define i32_ 0
  #define u32_ 0
#endif

#if defined(__INT32_MAX__)
  #define i32_max_ __INT32_MAX__
  #define u32_max_ __UINT32_MAX__
#elif defined(INT_MAX)
  #define i32_max_ 2147483647
  #define u32_max_ 4294967295U
#else
  #define i32_max_ 0
  #define u32_max_ 0
#endif

#if defined(__INT64_TYPE__)
  #define i64_ __INT64_TYPE__
  #define u64_ __UINT64_TYPE__
#elif defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 8
  #define i64_ __int64
  #define u64_ __uint64
#elif defined(__SIZEOF_LONG_LONG__) && __SIZEOF_LONG_LONG__ == 8
  #define i64_ __int64
  #define u64_ __uint64
#elif defined(LONG_MAX) && LONG_MAX == 9223372036854775807L
  #define i64_ __int64
  #define u64_ __uint64
#elif defined(LLONG_MAX)
  #define i64_ __int64
  #define u64_ __uint64
#elif defined(_MSC_VER)
  #define i64_ __int64
  #define u64_ unsigned __int64
#else
  #define i64_ 0
  #define u64_ 0
#endif

#if defined(__INT64_MAX__)
  #define i64_max_ __INT64_MAX__
  #define u64_max_ __UINT64_MAX__
#elif defined(LONG_MAX) && LONG_MAX == 9223372036854775807L
  #define i64_max_ 9223372036854775807L
  #define u64_max_ 18446744073709551615UL
#elif defined(LLONG_MAX)
  #define i64_max_ 9223372036854775807LL
  #define u64_max_ 18446744073709551615ULL
#elif defined(_MSC_VER)
  #define i64_max_ 9223372036854775807i64
  #define u64_max_ 18446744073709551615ui64
#else
  #define i64_max_ 0
  #define u64_max_ 0
#endif

#if defined(__INT128_TYPE__)
  #define i128_ __INT128_TYPE__
  #define u128_ __UINT128_TYPE__
#elif defined(__SIZEOF_INT128__) && __SIZEOF_INT128__ == 16
  #define i128_ __int128
  #define u128_ unsigned __int128
#elif defined(__SIZEOF_INT128)
  #define i128_ __int128
  #define u128_ unsigned __int128
#elif defined(_MSC_VER) && defined(_WIN64)
  #define i128_ __int128
  #define u128_ unsigned __int128
#else
  #define i128_ 0
  #define u128_ 0
#endif

#if defined(__INT128_MAX__)
  #define i128_max_ __INT128_MAX__
  #define u128_max_ __UINT128_MAX__
#elif defined(__SIZEOF_INT128__)
  #define i128_max_ 170141183460469231731687303715884105727LL
  #define u128_max_ 340282366920938463463374607431768211455ULL
#else
  #define i128_max_ 0
  #define u128_max_ 0
#endif

#ifdef __cplusplus
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

#undef malloc_
#undef calloc_
#undef realloc_
#undef free_

#define malloc_(size) malloc(size)
#define calloc_(nmemb, size) calloc(nmemb, size)
#define realloc_(ptr, size) realloc(ptr, size)
#define free_(ptr) free(ptr)

#endif