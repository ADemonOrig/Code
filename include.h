#ifndef INCLUDES_H
#define INCLUDES_H

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
#undef c_year_
#undef cpp_year_
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
    #define cpp_year_ 26
    #define cpp98_ 1
    #define cpp11_ 1
    #define cpp14_ 1
    #define cpp17_ 1
    #define cpp20_ 1
    #define cpp23_ 1
    #define cpp26_ 1
  #elif __cplusplus >= 202302L
    #define cpp_year_ 23
    #define cpp98_ 1
    #define cpp11_ 1
    #define cpp14_ 1
    #define cpp17_ 1
    #define cpp20_ 1
    #define cpp23_ 1
    #define cpp26_ 0
  #elif __cplusplus >= 202002L
    #define cpp_year_ 20
    #define cpp98_ 1
    #define cpp11_ 1
    #define cpp14_ 1
    #define cpp17_ 1
    #define cpp20_ 1
    #define cpp23_ 0
    #define cpp26_ 0
  #elif __cplusplus >= 201703L
    #define cpp_year_ 17
    #define cpp98_ 1
    #define cpp11_ 1
    #define cpp14_ 1
    #define cpp17_ 1
    #define cpp20_ 0
    #define cpp23_ 0
    #define cpp26_ 0
  #elif __cplusplus >= 201402L
    #define cpp_year_ 14
    #define cpp98_ 1
    #define cpp11_ 1
    #define cpp14_ 1
    #define cpp17_ 0
    #define cpp20_ 0
    #define cpp23_ 0
    #define cpp26_ 0
  #elif __cplusplus >= 201103L
    #define cpp_year_ 11
    #define cpp98_ 1
    #define cpp11_ 1
    #define cpp14_ 0
    #define cpp17_ 0
    #define cpp20_ 0
    #define cpp23_ 0
    #define cpp26_ 0
  #elif __cplusplus == 199711L
    #define cpp_year_ 98
    #define cpp98_ 1
    #define cpp11_ 0
    #define cpp14_ 0
    #define cpp17_ 0
    #define cpp20_ 0
    #define cpp23_ 0
    #define cpp26_ 0
  #else
    #define cpp98_ 0
    #define cpp11_ 0
    #define cpp14_ 0
    #define cpp17_ 0
    #define cpp20_ 0
    #define cpp23_ 0
    #define cpp26_ 0
  #endif
#else
  #define cpp_year_ 0
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
    #define c_year_ 23
    #define c23_ 1
    #define c17_ 1
    #define c11_ 1
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 201710L
    #define c_year_ 17
    #define c23_ 0
    #define c17_ 1
    #define c11_ 1
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 201112L
    #define c_year_ 11
    #define c23_ 0
    #define c17_ 0
    #define c11_ 1
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 199901L
    #define c_year_ 99
    #define c23_ 0
    #define c17_ 0
    #define c11_ 0
    #define c99_ 1
    #define c95_ 1
    #define c90_ 1
    #define c89_ 1
  #elif __STDC_VERSION__ >= 199409L
    #define c_year_ 95
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
    #define c_year_ 90
    #define c23_ 0
    #define c17_ 0
    #define c11_ 0
    #define c99_ 0
    #define c95_ 0
    #define c90_ 1
    #define c89_ 1
  #else
    #define c_year_ 0
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

#undef malloc_
#undef calloc_
#undef realloc_
#undef free_

#ifdef __cplusplus
  #include <cstdlib>
  #define malloc_(size) std::malloc(size)
  #define calloc_(nmemb, size) std::calloc(nmemb, size)
  #define realloc_(ptr, size) std::realloc(ptr, size)
  #define free_(ptr) std::free(ptr)
#else
  #include <stdlib.h>
  #define malloc_(size) malloc(size)
  #define calloc_(nmemb, size) calloc(nmemb, size)
  #define realloc_(ptr, size) realloc(ptr, size)
  #define free_(ptr) free(ptr)
#endif

#undef nullptr_
#define nullptr_ ((void*)0)

#undef sys_read_
#undef sys_write_
#undef sys_open_
#undef sys_close_
#undef sys_stat_
#undef sys_fstat_
#undef sys_lstat_
#undef sys_poll_
#undef sys_lseek_
#undef sys_mmap_
#undef sys_mprotect_
#undef sys_munmap_
#undef sys_brk_
#undef sys_rt_sigaction_
#undef sys_rt_sigprocmask_
#undef sys_rt_sigreturn_
#undef sys_ioctl_
#undef sys_pread64_
#undef sys_pwrite64_
#undef sys_readv_
#undef sys_writev_
#undef sys_access_
#undef sys_pipe_
#undef sys_select_
#undef sys_sched_yield_
#undef sys_mremap_
#undef sys_msync_
#undef sys_mincore_
#undef sys_madvise_
#undef sys_shmget_
#undef sys_shmat_
#undef sys_shmctl_
#undef sys_dup_
#undef sys_dup2_
#undef sys_pause_
#undef sys_nanosleep_
#undef sys_getitimer_
#undef sys_alarm_
#undef sys_setitimer_
#undef sys_getpid_
#undef sys_sendfile_
#undef sys_socket_
#undef sys_connect_
#undef sys_accept_
#undef sys_sendto_
#undef sys_recvfrom_
#undef sys_sendmsg_
#undef sys_recvmsg_
#undef sys_shutdown_
#undef sys_bind_
#undef sys_listen_
#undef sys_getsockname_
#undef sys_getpeername_
#undef sys_socketpair_
#undef sys_setsockopt_
#undef sys_getsockopt_
#undef sys_clone_
#undef sys_fork_
#undef sys_vfork_
#undef sys_execve_
#undef sys_exit_
#undef sys_wait4_
#undef sys_kill_
#undef sys_uname_
#undef sys_semget_
#undef sys_semop_
#undef sys_semctl_
#undef sys_shmdt_
#undef sys_msgget_
#undef sys_msgsnd_
#undef sys_msgrcv_
#undef sys_msgctl_
#undef sys_fcntl_
#undef sys_flock_
#undef sys_fsync_
#undef sys_fdatasync_
#undef sys_truncate_
#undef sys_ftruncate_
#undef sys_getdents_
#undef sys_getcwd_
#undef sys_chdir_
#undef sys_fchdir_
#undef sys_rename_
#undef sys_mkdir_
#undef sys_rmdir_
#undef sys_creat_
#undef sys_link_
#undef sys_unlink_
#undef sys_symlink_
#undef sys_readlink_
#undef sys_chmod_
#undef sys_fchmod_
#undef sys_chown_
#undef sys_fchown_
#undef sys_lchown_
#undef sys_umask_
#undef sys_gettimeofday_
#undef sys_getrlimit_
#undef sys_getrusage_
#undef sys_sysinfo_
#undef sys_times_
#undef sys_ptrace_
#undef sys_getuid_
#undef sys_syslog_
#undef sys_getgid_
#undef sys_setuid_
#undef sys_setgid_
#undef sys_geteuid_
#undef sys_getegid_
#undef sys_setpgid_
#undef sys_getppid_
#undef sys_getpgrp_
#undef sys_setsid_
#undef sys_setreuid_
#undef sys_setregid_
#undef sys_getgroups_
#undef sys_setgroups_
#undef sys_setresuid_
#undef sys_getresuid_
#undef sys_setresgid_
#undef sys_getresgid_
#undef sys_getpgid_
#undef sys_setfsuid_
#undef sys_setfsgid_
#undef sys_getsid_
#undef sys_capget_
#undef sys_capset_
#undef sys_rt_sigpending_
#undef sys_rt_sigtimedwait_
#undef sys_rt_sigqueueinfo_
#undef sys_rt_sigsuspend_
#undef sys_sigaltstack_
#undef sys_utime_
#undef sys_mknod_
#undef sys_uselib_
#undef sys_personality_
#undef sys_ustat_
#undef sys_statfs_
#undef sys_fstatfs_
#undef sys_sysfs_
#undef sys_getpriority_
#undef sys_setpriority_
#undef sys_sched_setparam_
#undef sys_sched_getparam_
#undef sys_sched_setscheduler_
#undef sys_sched_getscheduler_
#undef sys_sched_get_priority_max_
#undef sys_sched_get_priority_min_
#undef sys_sched_rr_get_interval_
#undef sys_mlock_
#undef sys_munlock_
#undef sys_mlockall_
#undef sys_munlockall_
#undef sys_vhangup_
#undef sys_modify_ldt_
#undef sys_pivot_root_
#undef sys__sysctl_
#undef sys_prctl_
#undef sys_arch_prctl_
#undef sys_adjtimex_
#undef sys_setrlimit_
#undef sys_chroot_
#undef sys_sync_
#undef sys_acct_
#undef sys_settimeofday_
#undef sys_mount_
#undef sys_umount2_
#undef sys_swapon_
#undef sys_swapoff_
#undef sys_reboot_
#undef sys_sethostname_
#undef sys_setdomainname_
#undef sys_iopl_
#undef sys_ioperm_
#undef sys_create_module_
#undef sys_init_module_
#undef sys_delete_module_
#undef sys_get_kernel_syms_
#undef sys_query_module_
#undef sys_quotactl_
#undef sys_nfsservctl_
#undef sys_getpmsg_
#undef sys_putpmsg_
#undef sys_afs_syscall_
#undef sys_tuxcall_
#undef sys_security_
#undef sys_gettid_
#undef sys_readahead_
#undef sys_setxattr_
#undef sys_lsetxattr_
#undef sys_fsetxattr_
#undef sys_getxattr_
#undef sys_lgetxattr_
#undef sys_fgetxattr_
#undef sys_listxattr_
#undef sys_llistxattr_
#undef sys_flistxattr_
#undef sys_removexattr_
#undef sys_lremovexattr_
#undef sys_fremovexattr_
#undef sys_tkill_
#undef sys_time_
#undef sys_futex_
#undef sys_sched_setaffinity_
#undef sys_sched_getaffinity_
#undef sys_set_thread_area_
#undef sys_io_setup_
#undef sys_io_destroy_
#undef sys_io_getevents_
#undef sys_io_submit_
#undef sys_io_cancel_
#undef sys_get_thread_area_
#undef sys_lookup_dcookie_
#undef sys_epoll_create_
#undef sys_epoll_ctl_old_
#undef sys_epoll_wait_old_
#undef sys_remap_file_pages_
#undef sys_getdents64_
#undef sys_set_tid_address_
#undef sys_restart_syscall_
#undef sys_semtimedop_
#undef sys_fadvise64_
#undef sys_timer_create_
#undef sys_timer_settime_
#undef sys_timer_gettime_
#undef sys_timer_getoverrun_
#undef sys_timer_delete_
#undef sys_clock_settime_
#undef sys_clock_gettime_
#undef sys_clock_getres_
#undef sys_clock_nanosleep_
#undef sys_exit_group_
#undef sys_epoll_wait_
#undef sys_epoll_ctl_
#undef sys_tgkill_
#undef sys_utimes_
#undef sys_vserver_
#undef sys_mbind_
#undef sys_set_mempolicy_
#undef sys_get_mempolicy_
#undef sys_mq_open_
#undef sys_mq_unlink_
#undef sys_mq_timedsend_
#undef sys_mq_timedreceive_
#undef sys_mq_notify_
#undef sys_mq_getsetattr_
#undef sys_kexec_load_
#undef sys_waitid_
#undef sys_add_key_
#undef sys_request_key_
#undef sys_keyctl_
#undef sys_ioprio_set_
#undef sys_ioprio_get_
#undef sys_inotify_init_
#undef sys_inotify_add_watch_
#undef sys_inotify_rm_watch_
#undef sys_migrate_pages_
#undef sys_openat_
#undef sys_mkdirat_
#undef sys_mknodat_
#undef sys_fchownat_
#undef sys_futimesat_
#undef sys_newfstatat_
#undef sys_unlinkat_
#undef sys_renameat_
#undef sys_linkat_
#undef sys_symlinkat_
#undef sys_readlinkat_
#undef sys_fchmodat_
#undef sys_faccessat_
#undef sys_pselect6_
#undef sys_ppoll_
#undef sys_unshare_
#undef sys_set_robust_list_
#undef sys_get_robust_list_
#undef sys_splice_
#undef sys_tee_
#undef sys_sync_file_range_
#undef sys_vmsplice_
#undef sys_move_pages_
#undef sys_utimensat_
#undef sys_epoll_pwait_
#undef sys_signalfd_
#undef sys_timerfd_create_
#undef sys_eventfd_
#undef sys_fallocate_
#undef sys_timerfd_settime_
#undef sys_timerfd_gettime_
#undef sys_accept4_
#undef sys_signalfd4_
#undef sys_eventfd2_
#undef sys_epoll_create1_
#undef sys_dup3_
#undef sys_pipe2_
#undef sys_inotify_init1_
#undef sys_preadv_
#undef sys_pwritev_
#undef sys_rt_tgsigqueueinfo_
#undef sys_perf_event_open_
#undef sys_recvmmsg_
#undef sys_fanotify_init_
#undef sys_fanotify_mark_
#undef sys_prlimit64_
#undef sys_name_to_handle_at_
#undef sys_open_by_handle_at_
#undef sys_clock_adjtime_
#undef sys_syncfs_
#undef sys_sendmmsg_
#undef sys_setns_
#undef sys_getns_
#undef sys_process_vm_readv_
#undef sys_process_vm_writev_
#undef sys_kcmp_
#undef sys_finit_module_
#undef sys_sched_setattr_
#undef sys_sched_getattr_
#undef sys_renameat2_
#undef sys_seccomp_
#undef sys_getrandom_
#undef sys_memfd_create_
#undef sys_kexec_file_load_
#undef sys_bpf_
#undef sys_execveat_
#undef sys_userfaultfd_
#undef sys_membarrier_
#undef sys_mlock2_
#undef sys_copy_file_range_
#undef sys_preadv2_
#undef sys_pwritev2_
#undef sys_pkey_mprotect_
#undef sys_pkey_alloc_
#undef sys_pkey_free_
#undef sys_statx_
#undef sys_io_pgetevents_
#undef sys_rseq_
#undef sys_pidfd_send_signal_
#undef sys_io_uring_setup_
#undef sys_io_uring_enter_
#undef sys_io_uring_register_
#undef sys_open_tree_
#undef sys_move_mount_
#undef sys_fsopen_
#undef sys_fsconfig_
#undef sys_fsmount_
#undef sys_fspick_
#undef sys_pidfd_open_
#undef sys_clone3_
#undef sys_close_range_
#undef sys_openat2_
#undef sys_pidfd_getfd_
#undef sys_faccessat2_
#undef sys_process_madvise_
#undef sys_epoll_pwait2_
#undef sys_mount_setattr_
#undef sys_quotactl_fd_
#undef sys_landlock_create_ruleset_
#undef sys_landlock_add_rule_
#undef sys_landlock_restrict_self_
#undef sys_memfd_secret_
#undef sys_process_mrelease_
#undef sys_futex_waitv_
#undef sys_set_mempolicy_home_node_
#undef sys_cachestat_
#undef sys_fchmodat2_
#undef sys_map_shadow_stack_
#undef sys_futex_wake_
#undef sys_futex_wait_
#undef sys_futex_requeue_
#undef sys_statmount_
#undef sys_listmount_
#undef sys_lsm_get_self_attr_
#undef sys_lsm_set_self_attr_
#undef sys_lsm_list_modules_
#undef eperm_
#undef enoent_
#undef esrch_
#undef eintr_
#undef eio_
#undef enxio_
#undef e2big_
#undef enoexec_
#undef ebadf_
#undef echild_
#undef eagain_
#undef enomem_
#undef eacces_
#undef efault_
#undef enotblk_
#undef ebusy_
#undef eexist_
#undef exdev_
#undef enodev_
#undef enotdir_
#undef eisdir_
#undef einval_
#undef enfile_
#undef emfile_
#undef enotty_
#undef etxtbsy_
#undef efbig_
#undef enospc_
#undef espipe_
#undef erofs_
#undef emlink_
#undef epipe_
#undef edom_
#undef erange_
#undef edeadlk_
#undef enametoolong_
#undef enolck_
#undef enosys_
#undef enotempty_
#undef eloop_
#undef ewouldblock_
#undef enomsg_
#undef eidrm_
#undef echrng_
#undef el2nsync_
#undef el3hlt_
#undef el3rst_
#undef elnrng_
#undef eunatch_
#undef enocsi_
#undef el2hlt_
#undef ebade_
#undef ebadr_
#undef exfull_
#undef enoano_
#undef ebadrqc_
#undef ebadslt_
#undef edeadlock_
#undef ebfont_
#undef enostr_
#undef enodata_
#undef etime_
#undef enosr_
#undef enonet_
#undef enopkg_
#undef eremote_
#undef enolink_
#undef eadv_
#undef esrmnt_
#undef ecomm_
#undef eproto_
#undef emultihop_
#undef edotdot_
#undef ebadmsg_
#undef eoverflow_
#undef enotuniq_
#undef ebadfd_
#undef eremchg_
#undef elibacc_
#undef elibbad_
#undef elibscn_
#undef elibmax_
#undef elibexec_
#undef eilseq_
#undef erestart_
#undef estrpipe_
#undef eusers_
#undef enotsock_
#undef edestaddrreq_
#undef emsgsize_
#undef eprototype_
#undef enoprotoopt_
#undef eprotonosupport_
#undef esocktnosupport_
#undef eopnotsupp_
#undef epfnosupport_
#undef eafnosupport_
#undef eaddrinuse_
#undef eaddrnotavail_
#undef enetdown_
#undef enetunreach_
#undef enetreset_
#undef econnaborted_
#undef econnreset_
#undef enobufs_
#undef eisconn_
#undef enotconn_
#undef eshutdown_
#undef etoomanyrefs_
#undef etimedout_
#undef econnrefused_
#undef ehostdown_
#undef ehostunreach_
#undef ealready_
#undef einprogress_
#undef estale_
#undef euclean_
#undef enotnam_
#undef enavail_
#undef eisnam_
#undef eremoteio_
#undef edquot_
#undef enomedium_
#undef emediumtype_
#undef ecanceled_
#undef enokey_
#undef ekeyexpired_
#undef ekeyrevoked_
#undef ekeyrejected_
#undef eownerdead_
#undef enotrecoverable_
#undef erfkill_
#undef ehwpoison_
#undef o_accmode_
#undef o_rdonly_
#undef o_wronly_
#undef o_rdwr_
#undef o_creat_
#undef o_excl_
#undef o_noctty_
#undef o_trunc_
#undef o_append_
#undef o_nonblock_
#undef o_dsync_
#undef o_sync_
#undef o_rsync_
#undef o_directory_
#undef o_nofollow_
#undef o_cloexec_
#undef o_async_
#undef o_direct_
#undef o_largefile_
#undef o_noatime_
#undef o_path_
#undef o_tmpfile_
#undef prot_none_
#undef prot_read_
#undef prot_write_
#undef prot_exec_
#undef prot_sem_
#undef prot_growsdown_
#undef prot_growsup_
#undef map_shared_
#undef map_private_
#undef map_shared_validate_
#undef map_fixed_
#undef map_anonymous_
#undef map_32bit_
#undef map_growsdown_
#undef map_denywrite_
#undef map_executable_
#undef map_locked_
#undef map_noreserve_
#undef map_populate_
#undef map_nonblock_
#undef map_stack_
#undef map_hugetlb_
#undef map_sync_
#undef map_fixed_noreplace_
#undef map_uninitialized_
#undef sig_dfl_
#undef sig_ign_
#undef sig_err_
#undef sig_block_
#undef sig_unblock_
#undef sig_setmask_
#undef sighup_
#undef sigint_
#undef sigquit_
#undef sigill_
#undef sigtrap_
#undef sigabrt_
#undef sigbus_
#undef sigfpe_
#undef sigkill_
#undef sigusr1_
#undef sigsegv_
#undef sigusr2_
#undef sigpipe_
#undef sigalrm_
#undef sigterm_
#undef sigstkflt_
#undef sigchld_
#undef sigcont_
#undef sigstop_
#undef sigtstp_
#undef sigttin_
#undef sigttou_
#undef sigurg_
#undef sigxcpu_
#undef sigxfsz_
#undef sigvtalrm_
#undef sigprof_
#undef sigwinch_
#undef sigio_
#undef sigpwr_
#undef sigsys_
#undef sa_nocldstop_
#undef sa_nocldwait_
#undef sa_siginfo_
#undef sa_restorer_
#undef sa_onstack_
#undef sa_restart_
#undef sa_nodefer_
#undef sa_resethand_
#undef clock_realtime_
#undef clock_monotonic_
#undef clock_process_cputime_id_
#undef clock_thread_cputime_id_
#undef clock_monotonic_raw_
#undef clock_realtime_coarse_
#undef clock_monotonic_coarse_
#undef clock_boottime_
#undef clock_realtime_alarm_
#undef clock_boottime_alarm_
#undef clock_tai_
#undef af_unspec_
#undef af_unix_
#undef af_local_
#undef af_inet_
#undef af_inet6_
#undef af_netlink_
#undef af_packet_
#undef sock_stream_
#undef sock_dgram_
#undef sock_raw_
#undef sock_rdm_
#undef sock_seqpacket_
#undef sock_nonblock_
#undef sock_cloexec_
#undef sol_socket_
#undef so_reuseaddr_
#undef so_keepalive_
#undef so_broadcast_
#undef so_linger_
#undef so_rcvbuf_
#undef so_sndbuf_
#undef so_error_
#undef so_type_
#undef so_dontroute_
#undef so_rcvlowat_
#undef so_rcvtimeo_
#undef so_sndlowat_
#undef so_sndtimeo_
#undef so_reuseport_
#undef ipproto_ip_
#undef ipproto_tcp_
#undef ipproto_udp_
#undef ipproto_raw_
#undef tcp_nodelay_
#undef tcp_maxseg_
#undef tcp_cork_
#undef tcp_keepidle_
#undef tcp_keepintvl_
#undef tcp_keepcnt_
#undef tcp_syncnt_
#undef tcp_linger2_
#undef tcp_defer_accept_
#undef tcp_window_clamp_
#undef tcp_info_
#undef tcp_quickack_
#undef tcp_congestion_
#undef tcp_md5sig_
#undef tcp_thin_linear_timeouts_
#undef tcp_thin_dupack_
#undef tcp_user_timeout_
#undef tcp_repair_
#undef tcp_repair_queue_
#undef tcp_queue_seq_
#undef tcp_repair_options_
#undef tcp_fastopen_
#undef tcp_timestamp_
#undef tcp_notsent_lowat_
#undef tcp_cc_info_
#undef tcp_save_syn_
#undef tcp_saved_syn_
#undef tcp_repair_window_
#undef tcp_fastopen_connect_
#undef tcp_ulp_
#undef tcp_md5sig_ext_
#undef tcp_fastopen_key_
#undef tcp_fastopen_no_cookie_
#undef tcp_zerocopy_receive_
#undef tcp_inq_
#undef tcp_tx_delay_
#undef epoll_ctl_add_
#undef epoll_ctl_del_
#undef epoll_ctl_mod_
#undef epollin_
#undef epollpri_
#undef epollout_
#undef epollerr_
#undef epollhup_
#undef epollrdnorm_
#undef epollrdband_
#undef epollwrnorm_
#undef epollwrband_
#undef epollmsg_
#undef epollrdhup_
#undef epollexclusive_
#undef epollwakeup_
#undef epolloneshot_
#undef epollet_
#undef f_dupfd_
#undef f_getfd_
#undef f_setfd_
#undef f_getfl_
#undef f_setfl_
#undef f_getlk_
#undef f_setlk_
#undef f_setlkw_
#undef f_setown_
#undef f_getown_
#undef f_setsig_
#undef f_getsig_
#undef f_setlease_
#undef f_getlease_
#undef f_notify_
#undef f_dupfd_cloexec_
#undef fd_cloexec_
#undef stdin_fileno_
#undef stdout_fileno_
#undef stderr_fileno_
#undef seek_set_
#undef seek_cur_
#undef seek_end_
#undef seek_data_
#undef seek_hole_
#undef at_fdcwd_
#undef at_symlink_nofollow_
#undef at_removedir_
#undef at_symlink_follow_
#undef at_no_automount_
#undef at_empty_path_
#undef at_recursive_
#undef at_statx_sync_as_stat_
#undef at_statx_force_sync_
#undef at_statx_dont_sync_
#undef madv_normal_
#undef madv_random_
#undef madv_sequential_
#undef madv_willneed_
#undef madv_dontneed_
#undef madv_free_
#undef madv_remove_
#undef madv_dontfork_
#undef madv_dofork_
#undef madv_mergeable_
#undef madv_unmergeable_
#undef madv_hugepage_
#undef madv_nohugepage_
#undef madv_dontdump_
#undef madv_dodump_
#undef madv_wipeonfork_
#undef madv_keeponfork_
#undef madv_cold_
#undef madv_pageout_
#undef madv_populate_read_
#undef madv_populate_write_
#undef madv_dontneed_locked_
#undef madv_collapse_
#undef ms_async_
#undef ms_invalidate_
#undef ms_sync_
#undef mlock_onfault_
#undef mcl_current_
#undef mcl_future_
#undef mcl_onfault_
#undef mmap_page_zero_
#undef dt_unknown_
#undef dt_fifo_
#undef dt_chr_
#undef dt_dir_
#undef dt_blk_
#undef dt_reg_
#undef dt_lnk_
#undef dt_sock_
#undef dt_wht_
#undef splice_f_move_
#undef splice_f_nonblock_
#undef splice_f_more_
#undef splice_f_gift_
#undef falloc_fl_keep_size_
#undef falloc_fl_punch_hole_
#undef falloc_fl_no_hide_stale_
#undef falloc_fl_collapse_range_
#undef falloc_fl_zero_range_
#undef falloc_fl_insert_range_
#undef falloc_fl_unshare_range_
#undef rwf_hipri_
#undef rwf_dsync_
#undef rwf_sync_
#undef rwf_nowait_
#undef rwf_append_
#undef fan_mark_add_
#undef fan_mark_remove_
#undef fan_mark_dont_follow_
#undef fan_mark_onlydir_
#undef fan_mark_mount_
#undef fan_mark_ignored_mask_
#undef fan_mark_ignored_surv_modify_
#undef fan_mark_flush_
#undef fan_mark_evictable_
#undef fan_mark_filesystem_
#undef fan_access_
#undef fan_modify_
#undef fan_close_write_
#undef fan_close_nowrite_
#undef fan_open_
#undef fan_open_exec_
#undef fan_q_overflow_
#undef fan_open_perm_
#undef fan_access_perm_
#undef fan_open_exec_perm_
#undef fan_ondir_
#undef fan_event_on_child_
#undef fan_close_
#undef clone_vm_
#undef clone_fs_
#undef clone_files_
#undef clone_sighand_
#undef clone_pidfd_
#undef clone_ptrace_
#undef clone_vfork_
#undef clone_parent_
#undef clone_thread_
#undef clone_newns_
#undef clone_sysvsem_
#undef clone_settls_
#undef clone_parent_settid_
#undef clone_child_cleartid_
#undef clone_detached_
#undef clone_untraced_
#undef clone_child_settid_
#undef clone_newcgroup_
#undef clone_newuts_
#undef clone_newipc_
#undef clone_newuser_
#undef clone_newpid_
#undef clone_newnet_
#undef clone_io_
#undef pr_set_pdeathsig_
#undef pr_get_pdeathsig_
#undef pr_get_dumpable_
#undef pr_set_dumpable_
#undef pr_get_unalign_
#undef pr_set_unalign_
#undef pr_get_keepcaps_
#undef pr_set_keepcaps_
#undef pr_get_fpemu_
#undef pr_set_fpemu_
#undef pr_get_fpexc_
#undef pr_set_fpexc_
#undef pr_get_timing_
#undef pr_set_timing_
#undef pr_set_name_
#undef pr_get_name_
#undef pr_get_seccomp_
#undef pr_set_seccomp_
#undef pr_capbset_read_
#undef pr_capbset_drop_
#undef pr_get_tsc_
#undef pr_set_tsc_
#undef pr_get_securebits_
#undef pr_set_securebits_
#undef pr_set_timerslack_
#undef pr_get_timerslack_
#undef pr_task_perf_events_disable_
#undef pr_task_perf_events_enable_
#undef pr_mce_kill_
#undef pr_mce_kill_get_
#undef pr_set_mm_
#undef pr_set_child_subreaper_
#undef pr_get_child_subreaper_
#undef pr_set_no_new_privs_
#undef pr_get_no_new_privs_
#undef pr_get_tid_address_
#undef pr_set_thp_disable_
#undef pr_get_thp_disable_
#undef pr_mpx_enable_management_
#undef pr_mpx_disable_management_
#undef pr_set_fp_mode_
#undef pr_get_fp_mode_
#undef pr_cap_ambient_
#undef pr_sve_set_vl_
#undef pr_sve_get_vl_
#undef pr_get_speculation_ctrl_
#undef pr_set_speculation_ctrl_
#undef pr_pac_reset_keys_
#undef pr_set_tagged_addr_ctrl_
#undef pr_get_tagged_addr_ctrl_
#undef pr_set_io_flusher_
#undef pr_get_io_flusher_
#undef pr_set_syscall_user_dispatch_
#undef pr_pac_set_enabled_keys_
#undef pr_pac_get_enabled_keys_
#undef pr_sched_core_
#undef pr_sme_set_vl_
#undef pr_sme_get_vl_
#undef seccomp_set_mode_strict_
#undef seccomp_set_mode_filter_
#undef seccomp_get_action_avail_
#undef seccomp_get_notif_sizes_
#undef seccomp_filter_flag_tsync_
#undef seccomp_filter_flag_log_
#undef seccomp_filter_flag_spec_allow_
#undef seccomp_filter_flag_new_listener_
#undef seccomp_filter_flag_tsync_esrch_
#undef seccomp_ret_kill_process_
#undef seccomp_ret_kill_thread_
#undef seccomp_ret_trap_
#undef seccomp_ret_errno_
#undef seccomp_ret_trace_
#undef seccomp_ret_log_
#undef seccomp_ret_allow_
#undef seccomp_ret_action_full_
#undef seccomp_ret_data_
#undef ptrace_traceme_
#undef ptrace_peektext_
#undef ptrace_peekdata_
#undef ptrace_peekuser_
#undef ptrace_poketext_
#undef ptrace_pokedata_
#undef ptrace_pokeuser_
#undef ptrace_cont_
#undef ptrace_kill_
#undef ptrace_singlestep_
#undef ptrace_getregs_
#undef ptrace_setregs_
#undef ptrace_getfpregs_
#undef ptrace_setfpregs_
#undef ptrace_attach_
#undef ptrace_detach_
#undef ptrace_getfpxregs_
#undef ptrace_setfpxregs_
#undef ptrace_syscall_
#undef ptrace_setoptions_
#undef ptrace_geteventmsg_
#undef ptrace_getsiginfo_
#undef ptrace_setsiginfo_
#undef ptrace_getregset_
#undef ptrace_setregset_
#undef ptrace_seize_
#undef ptrace_interrupt_
#undef ptrace_listen_
#undef ptrace_peeksiginfo_
#undef ptrace_getsigmask_
#undef ptrace_setsigmask_
#undef ptrace_seccomp_get_filter_
#undef ptrace_seccomp_get_metadata_
#undef ptrace_get_syscall_info_
#undef ptrace_get_rseq_configuration_
#undef ptrace_o_tracesysgood_
#undef ptrace_o_tracefork_
#undef ptrace_o_tracevfork_
#undef ptrace_o_traceclone_
#undef ptrace_o_traceexec_
#undef ptrace_o_tracevforkdone_
#undef ptrace_o_traceexit_
#undef ptrace_o_traceseccomp_
#undef ptrace_o_exitkill_
#undef ptrace_o_suspend_seccomp_
#undef ptrace_o_mask_
#undef stdin_
#undef stdout_
#undef stderr_

#define sys_read_ 0
#define sys_write_ 1
#define sys_open_ 2
#define sys_close_ 3
#define sys_stat_ 4
#define sys_fstat_ 5
#define sys_lstat_ 6
#define sys_poll_ 7
#define sys_lseek_ 8
#define sys_mmap_ 9
#define sys_mprotect_ 10
#define sys_munmap_ 11
#define sys_brk_ 12
#define sys_rt_sigaction_ 13
#define sys_rt_sigprocmask_ 14
#define sys_rt_sigreturn_ 15
#define sys_ioctl_ 16
#define sys_pread64_ 17
#define sys_pwrite64_ 18
#define sys_readv_ 19
#define sys_writev_ 20
#define sys_access_ 21
#define sys_pipe_ 22
#define sys_select_ 23
#define sys_sched_yield_ 24
#define sys_mremap_ 25
#define sys_msync_ 26
#define sys_mincore_ 27
#define sys_madvise_ 28
#define sys_shmget_ 29
#define sys_shmat_ 30
#define sys_shmctl_ 31
#define sys_dup_ 32
#define sys_dup2_ 33
#define sys_pause_ 34
#define sys_nanosleep_ 35
#define sys_getitimer_ 36
#define sys_alarm_ 37
#define sys_setitimer_ 38
#define sys_getpid_ 39
#define sys_sendfile_ 40
#define sys_socket_ 41
#define sys_connect_ 42
#define sys_accept_ 43
#define sys_sendto_ 44
#define sys_recvfrom_ 45
#define sys_sendmsg_ 46
#define sys_recvmsg_ 47
#define sys_shutdown_ 48
#define sys_bind_ 49
#define sys_listen_ 50
#define sys_getsockname_ 51
#define sys_getpeername_ 52
#define sys_socketpair_ 53
#define sys_setsockopt_ 54
#define sys_getsockopt_ 55
#define sys_clone_ 56
#define sys_fork_ 57
#define sys_vfork_ 58
#define sys_execve_ 59
#define sys_exit_ 60
#define sys_wait4_ 61
#define sys_kill_ 62
#define sys_uname_ 63
#define sys_semget_ 64
#define sys_semop_ 65
#define sys_semctl_ 66
#define sys_shmdt_ 67
#define sys_msgget_ 68
#define sys_msgsnd_ 69
#define sys_msgrcv_ 70
#define sys_msgctl_ 71
#define sys_fcntl_ 72
#define sys_flock_ 73
#define sys_fsync_ 74
#define sys_fdatasync_ 75
#define sys_truncate_ 76
#define sys_ftruncate_ 77
#define sys_getdents_ 78
#define sys_getcwd_ 79
#define sys_chdir_ 80
#define sys_fchdir_ 81
#define sys_rename_ 82
#define sys_mkdir_ 83
#define sys_rmdir_ 84
#define sys_creat_ 85
#define sys_link_ 86
#define sys_unlink_ 87
#define sys_symlink_ 88
#define sys_readlink_ 89
#define sys_chmod_ 90
#define sys_fchmod_ 91
#define sys_chown_ 92
#define sys_fchown_ 93
#define sys_lchown_ 94
#define sys_umask_ 95
#define sys_gettimeofday_ 96
#define sys_getrlimit_ 97
#define sys_getrusage_ 98
#define sys_sysinfo_ 99
#define sys_times_ 100
#define sys_ptrace_ 101
#define sys_getuid_ 102
#define sys_syslog_ 103
#define sys_getgid_ 104
#define sys_setuid_ 105
#define sys_setgid_ 106
#define sys_geteuid_ 107
#define sys_getegid_ 108
#define sys_setpgid_ 109
#define sys_getppid_ 110
#define sys_getpgrp_ 111
#define sys_setsid_ 112
#define sys_setreuid_ 113
#define sys_setregid_ 114
#define sys_getgroups_ 115
#define sys_setgroups_ 116
#define sys_setresuid_ 117
#define sys_getresuid_ 118
#define sys_setresgid_ 119
#define sys_getresgid_ 120
#define sys_getpgid_ 121
#define sys_setfsuid_ 122
#define sys_setfsgid_ 123
#define sys_getsid_ 124
#define sys_capget_ 125
#define sys_capset_ 126
#define sys_rt_sigpending_ 127
#define sys_rt_sigtimedwait_ 128
#define sys_rt_sigqueueinfo_ 129
#define sys_rt_sigsuspend_ 130
#define sys_sigaltstack_ 131
#define sys_utime_ 132
#define sys_mknod_ 133
#define sys_uselib_ 134
#define sys_personality_ 135
#define sys_ustat_ 136
#define sys_statfs_ 137
#define sys_fstatfs_ 138
#define sys_sysfs_ 139
#define sys_getpriority_ 140
#define sys_setpriority_ 141
#define sys_sched_setparam_ 142
#define sys_sched_getparam_ 143
#define sys_sched_setscheduler_ 144
#define sys_sched_getscheduler_ 145
#define sys_sched_get_priority_max_ 146
#define sys_sched_get_priority_min_ 147
#define sys_sched_rr_get_interval_ 148
#define sys_mlock_ 149
#define sys_munlock_ 150
#define sys_mlockall_ 151
#define sys_munlockall_ 152
#define sys_vhangup_ 153
#define sys_modify_ldt_ 154
#define sys_pivot_root_ 155
#define sys__sysctl_ 156
#define sys_prctl_ 157
#define sys_arch_prctl_ 158
#define sys_adjtimex_ 159
#define sys_setrlimit_ 160
#define sys_chroot_ 161
#define sys_sync_ 162
#define sys_acct_ 163
#define sys_settimeofday_ 164
#define sys_mount_ 165
#define sys_umount2_ 166
#define sys_swapon_ 167
#define sys_swapoff_ 168
#define sys_reboot_ 169
#define sys_sethostname_ 170
#define sys_setdomainname_ 171
#define sys_iopl_ 172
#define sys_ioperm_ 173
#define sys_create_module_ 174
#define sys_init_module_ 175
#define sys_delete_module_ 176
#define sys_get_kernel_syms_ 177
#define sys_query_module_ 178
#define sys_quotactl_ 179
#define sys_nfsservctl_ 180
#define sys_getpmsg_ 181
#define sys_putpmsg_ 182
#define sys_afs_syscall_ 183
#define sys_tuxcall_ 184
#define sys_security_ 185
#define sys_gettid_ 186
#define sys_readahead_ 187
#define sys_setxattr_ 188
#define sys_lsetxattr_ 189
#define sys_fsetxattr_ 190
#define sys_getxattr_ 191
#define sys_lgetxattr_ 192
#define sys_fgetxattr_ 193
#define sys_listxattr_ 194
#define sys_llistxattr_ 195
#define sys_flistxattr_ 196
#define sys_removexattr_ 197
#define sys_lremovexattr_ 198
#define sys_fremovexattr_ 199
#define sys_tkill_ 200
#define sys_time_ 201
#define sys_futex_ 202
#define sys_sched_setaffinity_ 203
#define sys_sched_getaffinity_ 204
#define sys_set_thread_area_ 205
#define sys_io_setup_ 206
#define sys_io_destroy_ 207
#define sys_io_getevents_ 208
#define sys_io_submit_ 209
#define sys_io_cancel_ 210
#define sys_get_thread_area_ 211
#define sys_lookup_dcookie_ 212
#define sys_epoll_create_ 213
#define sys_epoll_ctl_old_ 214
#define sys_epoll_wait_old_ 215
#define sys_remap_file_pages_ 216
#define sys_getdents64_ 217
#define sys_set_tid_address_ 218
#define sys_restart_syscall_ 219
#define sys_semtimedop_ 220
#define sys_fadvise64_ 221
#define sys_timer_create_ 222
#define sys_timer_settime_ 223
#define sys_timer_gettime_ 224
#define sys_timer_getoverrun_ 225
#define sys_timer_delete_ 226
#define sys_clock_settime_ 227
#define sys_clock_gettime_ 228
#define sys_clock_getres_ 229
#define sys_clock_nanosleep_ 230
#define sys_exit_group_ 231
#define sys_epoll_wait_ 232
#define sys_epoll_ctl_ 233
#define sys_tgkill_ 234
#define sys_utimes_ 235
#define sys_vserver_ 236
#define sys_mbind_ 237
#define sys_set_mempolicy_ 238
#define sys_get_mempolicy_ 239
#define sys_mq_open_ 240
#define sys_mq_unlink_ 241
#define sys_mq_timedsend_ 242
#define sys_mq_timedreceive_ 243
#define sys_mq_notify_ 244
#define sys_mq_getsetattr_ 245
#define sys_kexec_load_ 246
#define sys_waitid_ 247
#define sys_add_key_ 248
#define sys_request_key_ 249
#define sys_keyctl_ 250
#define sys_ioprio_set_ 251
#define sys_ioprio_get_ 252
#define sys_inotify_init_ 253
#define sys_inotify_add_watch_ 254
#define sys_inotify_rm_watch_ 255
#define sys_migrate_pages_ 256
#define sys_openat_ 257
#define sys_mkdirat_ 258
#define sys_mknodat_ 259
#define sys_fchownat_ 260
#define sys_futimesat_ 261
#define sys_newfstatat_ 262
#define sys_unlinkat_ 263
#define sys_renameat_ 264
#define sys_linkat_ 265
#define sys_symlinkat_ 266
#define sys_readlinkat_ 267
#define sys_fchmodat_ 268
#define sys_faccessat_ 269
#define sys_pselect6_ 270
#define sys_ppoll_ 271
#define sys_unshare_ 272
#define sys_set_robust_list_ 273
#define sys_get_robust_list_ 274
#define sys_splice_ 275
#define sys_tee_ 276
#define sys_sync_file_range_ 277
#define sys_vmsplice_ 278
#define sys_move_pages_ 279
#define sys_utimensat_ 280
#define sys_epoll_pwait_ 281
#define sys_signalfd_ 282
#define sys_timerfd_create_ 283
#define sys_eventfd_ 284
#define sys_fallocate_ 285
#define sys_timerfd_settime_ 286
#define sys_timerfd_gettime_ 287
#define sys_accept4_ 288
#define sys_signalfd4_ 289
#define sys_eventfd2_ 290
#define sys_epoll_create1_ 291
#define sys_dup3_ 292
#define sys_pipe2_ 293
#define sys_inotify_init1_ 294
#define sys_preadv_ 295
#define sys_pwritev_ 296
#define sys_rt_tgsigqueueinfo_ 297
#define sys_perf_event_open_ 298
#define sys_recvmmsg_ 299
#define sys_fanotify_init_ 300
#define sys_fanotify_mark_ 301
#define sys_prlimit64_ 302
#define sys_name_to_handle_at_ 303
#define sys_open_by_handle_at_ 304
#define sys_clock_adjtime_ 305
#define sys_syncfs_ 306
#define sys_sendmmsg_ 307
#define sys_setns_ 308
#define sys_getns_ 309
#define sys_process_vm_readv_ 310
#define sys_process_vm_writev_ 311
#define sys_kcmp_ 312
#define sys_finit_module_ 313
#define sys_sched_setattr_ 314
#define sys_sched_getattr_ 315
#define sys_renameat2_ 316
#define sys_seccomp_ 317
#define sys_getrandom_ 318
#define sys_memfd_create_ 319
#define sys_kexec_file_load_ 320
#define sys_bpf_ 321
#define sys_execveat_ 322
#define sys_userfaultfd_ 323
#define sys_membarrier_ 324
#define sys_mlock2_ 325
#define sys_copy_file_range_ 326
#define sys_preadv2_ 327
#define sys_pwritev2_ 328
#define sys_pkey_mprotect_ 329
#define sys_pkey_alloc_ 330
#define sys_pkey_free_ 331
#define sys_statx_ 332
#define sys_io_pgetevents_ 333
#define sys_rseq_ 334
#define sys_pidfd_send_signal_ 424
#define sys_io_uring_setup_ 425
#define sys_io_uring_enter_ 426
#define sys_io_uring_register_ 427
#define sys_open_tree_ 428
#define sys_move_mount_ 429
#define sys_fsopen_ 430
#define sys_fsconfig_ 431
#define sys_fsmount_ 432
#define sys_fspick_ 433
#define sys_pidfd_open_ 434
#define sys_clone3_ 435
#define sys_close_range_ 436
#define sys_openat2_ 437
#define sys_pidfd_getfd_ 438
#define sys_faccessat2_ 439
#define sys_process_madvise_ 440
#define sys_epoll_pwait2_ 441
#define sys_mount_setattr_ 442
#define sys_quotactl_fd_ 443
#define sys_landlock_create_ruleset_ 444
#define sys_landlock_add_rule_ 445
#define sys_landlock_restrict_self_ 446
#define sys_memfd_secret_ 447
#define sys_process_mrelease_ 448
#define sys_futex_waitv_ 449
#define sys_set_mempolicy_home_node_ 450
#define sys_cachestat_ 451
#define sys_fchmodat2_ 452
#define sys_map_shadow_stack_ 453
#define sys_futex_wake_ 454
#define sys_futex_wait_ 455
#define sys_futex_requeue_ 456
#define sys_statmount_ 457
#define sys_listmount_ 458
#define sys_lsm_get_self_attr_ 459
#define sys_lsm_set_self_attr_ 460
#define sys_lsm_list_modules_ 461
#define eperm_ 1
#define enoent_ 2
#define esrch_ 3
#define eintr_ 4
#define eio_ 5
#define enxio_ 6
#define e2big_ 7
#define enoexec_ 8
#define ebadf_ 9
#define echild_ 10
#define eagain_ 11
#define enomem_ 12
#define eacces_ 13
#define efault_ 14
#define enotblk_ 15
#define ebusy_ 16
#define eexist_ 17
#define exdev_ 18
#define enodev_ 19
#define enotdir_ 20
#define eisdir_ 21
#define einval_ 22
#define enfile_ 23
#define emfile_ 24
#define enotty_ 25
#define etxtbsy_ 26
#define efbig_ 27
#define enospc_ 28
#define espipe_ 29
#define erofs_ 30
#define emlink_ 31
#define epipe_ 32
#define edom_ 33
#define erange_ 34
#define edeadlk_ 35
#define enametoolong_ 36
#define enolck_ 37
#define enosys_ 38
#define enotempty_ 39
#define eloop_ 40
#define ewouldblock_ 11
#define enomsg_ 42
#define eidrm_ 43
#define echrng_ 44
#define el2nsync_ 45
#define el3hlt_ 46
#define el3rst_ 47
#define elnrng_ 48
#define eunatch_ 49
#define enocsi_ 50
#define el2hlt_ 51
#define ebade_ 52
#define ebadr_ 53
#define exfull_ 54
#define enoano_ 55
#define ebadrqc_ 56
#define ebadslt_ 57
#define edeadlock_ 35
#define ebfont_ 59
#define enostr_ 60
#define enodata_ 61
#define etime_ 62
#define enosr_ 63
#define enonet_ 64
#define enopkg_ 65
#define eremote_ 66
#define enolink_ 67
#define eadv_ 68
#define esrmnt_ 69
#define ecomm_ 70
#define eproto_ 71
#define emultihop_ 72
#define edotdot_ 73
#define ebadmsg_ 74
#define eoverflow_ 75
#define enotuniq_ 76
#define ebadfd_ 77
#define eremchg_ 78
#define elibacc_ 79
#define elibbad_ 80
#define elibscn_ 81
#define elibmax_ 82
#define elibexec_ 83
#define eilseq_ 84
#define erestart_ 85
#define estrpipe_ 86
#define eusers_ 87
#define enotsock_ 88
#define edestaddrreq_ 89
#define emsgsize_ 90
#define eprototype_ 91
#define enoprotoopt_ 92
#define eprotonosupport_ 93
#define esocktnosupport_ 94
#define eopnotsupp_ 95
#define epfnosupport_ 96
#define eafnosupport_ 97
#define eaddrinuse_ 98
#define eaddrnotavail_ 99
#define enetdown_ 100
#define enetunreach_ 101
#define enetreset_ 102
#define econnaborted_ 103
#define econnreset_ 104
#define enobufs_ 105
#define eisconn_ 106
#define enotconn_ 107
#define eshutdown_ 108
#define etoomanyrefs_ 109
#define etimedout_ 110
#define econnrefused_ 111
#define ehostdown_ 112
#define ehostunreach_ 113
#define ealready_ 114
#define einprogress_ 115
#define estale_ 116
#define euclean_ 117
#define enotnam_ 118
#define enavail_ 119
#define eisnam_ 120
#define eremoteio_ 121
#define edquot_ 122
#define enomedium_ 123
#define emediumtype_ 124
#define ecanceled_ 125
#define enokey_ 126
#define ekeyexpired_ 127
#define ekeyrevoked_ 128
#define ekeyrejected_ 129
#define eownerdead_ 130
#define enotrecoverable_ 131
#define erfkill_ 132
#define ehwpoison_ 133
#define o_accmode_ 3
#define o_rdonly_ 0
#define o_wronly_ 1
#define o_rdwr_ 2
#define o_creat_ 64
#define o_excl_ 128
#define o_noctty_ 256
#define o_trunc_ 512
#define o_append_ 1024
#define o_nonblock_ 2048
#define o_dsync_ 4096
#define o_sync_ 1052672
#define o_rsync_ 1052672
#define o_directory_ 65536
#define o_nofollow_ 131072
#define o_cloexec_ 524288
#define o_async_ 8192
#define o_direct_ 16384
#define o_largefile_ 32768
#define o_noatime_ 262144
#define o_path_ 2097152
#define o_tmpfile_ 4259840
#define prot_none_ 0
#define prot_read_ 1
#define prot_write_ 2
#define prot_exec_ 4
#define prot_sem_ 8
#define prot_growsdown_ 16777216
#define prot_growsup_ 33554432
#define map_shared_ 1
#define map_private_ 2
#define map_shared_validate_ 3
#define map_fixed_ 16
#define map_anonymous_ 32
#define map_32bit_ 64
#define map_growsdown_ 256
#define map_denywrite_ 2048
#define map_executable_ 4096
#define map_locked_ 8192
#define map_noreserve_ 16384
#define map_populate_ 32768
#define map_nonblock_ 65536
#define map_stack_ 131072
#define map_hugetlb_ 262144
#define map_sync_ 524288
#define map_fixed_noreplace_ 1048576
#define map_uninitialized_ 67108864
#define sig_dfl_ 0
#define sig_ign_ 1
#define sig_err_ (-1)
#define sig_block_ 0
#define sig_unblock_ 1
#define sig_setmask_ 2
#define sighup_ 1
#define sigint_ 2
#define sigquit_ 3
#define sigill_ 4
#define sigtrap_ 5
#define sigabrt_ 6
#define sigbus_ 7
#define sigfpe_ 8
#define sigkill_ 9
#define sigusr1_ 10
#define sigsegv_ 11
#define sigusr2_ 12
#define sigpipe_ 13
#define sigalrm_ 14
#define sigterm_ 15
#define sigstkflt_ 16
#define sigchld_ 17
#define sigcont_ 18
#define sigstop_ 19
#define sigtstp_ 20
#define sigttin_ 21
#define sigttou_ 22
#define sigurg_ 23
#define sigxcpu_ 24
#define sigxfsz_ 25
#define sigvtalrm_ 26
#define sigprof_ 27
#define sigwinch_ 28
#define sigio_ 29
#define sigpwr_ 30
#define sigsys_ 31
#define sa_nocldstop_ 1
#define sa_nocldwait_ 2
#define sa_siginfo_ 4
#define sa_restorer_ 67108864
#define sa_onstack_ 134217728
#define sa_restart_ 268435456
#define sa_nodefer_ 1073741824
#define sa_resethand_ 2147483648
#define clock_realtime_ 0
#define clock_monotonic_ 1
#define clock_process_cputime_id_ 2
#define clock_thread_cputime_id_ 3
#define clock_monotonic_raw_ 4
#define clock_realtime_coarse_ 5
#define clock_monotonic_coarse_ 6
#define clock_boottime_ 7
#define clock_realtime_alarm_ 8
#define clock_boottime_alarm_ 9
#define clock_tai_ 11
#define af_unspec_ 0
#define af_unix_ 1
#define af_local_ 1
#define af_inet_ 2
#define af_inet6_ 10
#define af_netlink_ 16
#define af_packet_ 17
#define sock_stream_ 1
#define sock_dgram_ 2
#define sock_raw_ 3
#define sock_rdm_ 4
#define sock_seqpacket_ 5
#define sock_nonblock_ 2048
#define sock_cloexec_ 524288
#define sol_socket_ 1
#define so_reuseaddr_ 2
#define so_keepalive_ 9
#define so_broadcast_ 6
#define so_linger_ 13
#define so_rcvbuf_ 8
#define so_sndbuf_ 7
#define so_error_ 4
#define so_type_ 3
#define so_dontroute_ 5
#define so_rcvlowat_ 18
#define so_rcvtimeo_ 20
#define so_sndlowat_ 19
#define so_sndtimeo_ 21
#define so_reuseport_ 15
#define ipproto_ip_ 0
#define ipproto_tcp_ 6
#define ipproto_udp_ 17
#define ipproto_raw_ 255
#define tcp_nodelay_ 1
#define tcp_maxseg_ 2
#define tcp_cork_ 3
#define tcp_keepidle_ 4
#define tcp_keepintvl_ 5
#define tcp_keepcnt_ 6
#define tcp_syncnt_ 7
#define tcp_linger2_ 8
#define tcp_defer_accept_ 9
#define tcp_window_clamp_ 10
#define tcp_info_ 11
#define tcp_quickack_ 12
#define tcp_congestion_ 13
#define tcp_md5sig_ 14
#define tcp_thin_linear_timeouts_ 16
#define tcp_thin_dupack_ 17
#define tcp_user_timeout_ 18
#define tcp_repair_ 19
#define tcp_repair_queue_ 20
#define tcp_queue_seq_ 21
#define tcp_repair_options_ 22
#define tcp_fastopen_ 23
#define tcp_timestamp_ 24
#define tcp_notsent_lowat_ 25
#define tcp_cc_info_ 26
#define tcp_save_syn_ 27
#define tcp_saved_syn_ 28
#define tcp_repair_window_ 29
#define tcp_fastopen_connect_ 30
#define tcp_ulp_ 31
#define tcp_md5sig_ext_ 32
#define tcp_fastopen_key_ 33
#define tcp_fastopen_no_cookie_ 34
#define tcp_zerocopy_receive_ 35
#define tcp_inq_ 36
#define tcp_tx_delay_ 37
#define epoll_ctl_add_ 1
#define epoll_ctl_del_ 2
#define epoll_ctl_mod_ 3
#define epollin_ 1
#define epollpri_ 2
#define epollout_ 4
#define epollerr_ 8
#define epollhup_ 16
#define epollrdnorm_ 64
#define epollrdband_ 128
#define epollwrnorm_ 256
#define epollwrband_ 512
#define epollmsg_ 1024
#define epollrdhup_ 8192
#define epollexclusive_ 268435456
#define epollwakeup_ 536870912
#define epolloneshot_ 1073741824
#define epollet_ 2147483648
#define f_dupfd_ 0
#define f_getfd_ 1
#define f_setfd_ 2
#define f_getfl_ 3
#define f_setfl_ 4
#define f_getlk_ 5
#define f_setlk_ 6
#define f_setlkw_ 7
#define f_setown_ 8
#define f_getown_ 9
#define f_setsig_ 10
#define f_getsig_ 11
#define f_setlease_ 1024
#define f_getlease_ 1025
#define f_notify_ 1026
#define f_dupfd_cloexec_ 1030
#define fd_cloexec_ 1
#define stdin_fileno_ 0
#define stdout_fileno_ 1
#define stderr_fileno_ 2
#define seek_set_ 0
#define seek_cur_ 1
#define seek_end_ 2
#define seek_data_ 3
#define seek_hole_ 4
#define at_fdcwd_ (-100)
#define at_symlink_nofollow_ 256
#define at_removedir_ 512
#define at_symlink_follow_ 1024
#define at_no_automount_ 2048
#define at_empty_path_ 4096
#define at_recursive_ 32768
#define at_statx_sync_as_stat_ 0
#define at_statx_force_sync_ 8192
#define at_statx_dont_sync_ 16384
#define madv_normal_ 0
#define madv_random_ 1
#define madv_sequential_ 2
#define madv_willneed_ 3
#define madv_dontneed_ 4
#define madv_free_ 8
#define madv_remove_ 9
#define madv_dontfork_ 10
#define madv_dofork_ 11
#define madv_mergeable_ 12
#define madv_unmergeable_ 13
#define madv_hugepage_ 14
#define madv_nohugepage_ 15
#define madv_dontdump_ 16
#define madv_dodump_ 17
#define madv_wipeonfork_ 18
#define madv_keeponfork_ 19
#define madv_cold_ 20
#define madv_pageout_ 21
#define madv_populate_read_ 22
#define madv_populate_write_ 23
#define madv_dontneed_locked_ 24
#define madv_collapse_ 25
#define ms_async_ 1
#define ms_invalidate_ 2
#define ms_sync_ 4
#define mlock_onfault_ 1
#define mcl_current_ 1
#define mcl_future_ 2
#define mcl_onfault_ 4
#define mmap_page_zero_ 0
#define dt_unknown_ 0
#define dt_fifo_ 1
#define dt_chr_ 2
#define dt_dir_ 4
#define dt_blk_ 6
#define dt_reg_ 8
#define dt_lnk_ 10
#define dt_sock_ 12
#define dt_wht_ 14
#define splice_f_move_ 1
#define splice_f_nonblock_ 2
#define splice_f_more_ 4
#define splice_f_gift_ 8
#define falloc_fl_keep_size_ 1
#define falloc_fl_punch_hole_ 2
#define falloc_fl_no_hide_stale_ 4
#define falloc_fl_collapse_range_ 8
#define falloc_fl_zero_range_ 16
#define falloc_fl_insert_range_ 32
#define falloc_fl_unshare_range_ 64
#define rwf_hipri_ 1
#define rwf_dsync_ 2
#define rwf_sync_ 4
#define rwf_nowait_ 8
#define rwf_append_ 16
#define fan_mark_add_ 1
#define fan_mark_remove_ 2
#define fan_mark_dont_follow_ 4
#define fan_mark_onlydir_ 8
#define fan_mark_mount_ 16
#define fan_mark_ignored_mask_ 32
#define fan_mark_ignored_surv_modify_ 64
#define fan_mark_flush_ 128
#define fan_mark_evictable_ 256
#define fan_mark_filesystem_ 512
#define fan_access_ 1
#define fan_modify_ 2
#define fan_close_write_ 8
#define fan_close_nowrite_ 16
#define fan_open_ 32
#define fan_open_exec_ 4096
#define fan_q_overflow_ 16384
#define fan_open_perm_ 256
#define fan_access_perm_ 512
#define fan_open_exec_perm_ 65536
#define fan_ondir_ 1073741824
#define fan_event_on_child_ 134217728
#define fan_close_ 24
#define clone_vm_ 256
#define clone_fs_ 512
#define clone_files_ 1024
#define clone_sighand_ 2048
#define clone_pidfd_ 4096
#define clone_ptrace_ 8192
#define clone_vfork_ 16384
#define clone_parent_ 32768
#define clone_thread_ 65536
#define clone_newns_ 131072
#define clone_sysvsem_ 262144
#define clone_settls_ 524288
#define clone_parent_settid_ 1048576
#define clone_child_cleartid_ 2097152
#define clone_detached_ 4194304
#define clone_untraced_ 8388608
#define clone_child_settid_ 16777216
#define clone_newcgroup_ 33554432
#define clone_newuts_ 67108864
#define clone_newipc_ 134217728
#define clone_newuser_ 268435456
#define clone_newpid_ 536870912
#define clone_newnet_ 1073741824
#define clone_io_ 2147483648
#define pr_set_pdeathsig_ 1
#define pr_get_pdeathsig_ 2
#define pr_get_dumpable_ 3
#define pr_set_dumpable_ 4
#define pr_get_unalign_ 5
#define pr_set_unalign_ 6
#define pr_get_keepcaps_ 7
#define pr_set_keepcaps_ 8
#define pr_get_fpemu_ 9
#define pr_set_fpemu_ 10
#define pr_get_fpexc_ 11
#define pr_set_fpexc_ 12
#define pr_get_timing_ 13
#define pr_set_timing_ 14
#define pr_set_name_ 15
#define pr_get_name_ 16
#define pr_get_seccomp_ 21
#define pr_set_seccomp_ 22
#define pr_capbset_read_ 23
#define pr_capbset_drop_ 24
#define pr_get_tsc_ 25
#define pr_set_tsc_ 26
#define pr_get_securebits_ 27
#define pr_set_securebits_ 28
#define pr_set_timerslack_ 29
#define pr_get_timerslack_ 30
#define pr_task_perf_events_disable_ 31
#define pr_task_perf_events_enable_ 32
#define pr_mce_kill_ 33
#define pr_mce_kill_get_ 34
#define pr_set_mm_ 35
#define pr_set_child_subreaper_ 36
#define pr_get_child_subreaper_ 37
#define pr_set_no_new_privs_ 38
#define pr_get_no_new_privs_ 39
#define pr_get_tid_address_ 40
#define pr_set_thp_disable_ 41
#define pr_get_thp_disable_ 42
#define pr_mpx_enable_management_ 43
#define pr_mpx_disable_management_ 44
#define pr_set_fp_mode_ 45
#define pr_get_fp_mode_ 46
#define pr_cap_ambient_ 47
#define pr_sve_set_vl_ 50
#define pr_sve_get_vl_ 51
#define pr_get_speculation_ctrl_ 52
#define pr_set_speculation_ctrl_ 53
#define pr_pac_reset_keys_ 54
#define pr_set_tagged_addr_ctrl_ 55
#define pr_get_tagged_addr_ctrl_ 56
#define pr_set_io_flusher_ 57
#define pr_get_io_flusher_ 58
#define pr_set_syscall_user_dispatch_ 59
#define pr_pac_set_enabled_keys_ 60
#define pr_pac_get_enabled_keys_ 61
#define pr_sched_core_ 62
#define pr_sme_set_vl_ 63
#define pr_sme_get_vl_ 64
#define seccomp_set_mode_strict_ 0
#define seccomp_set_mode_filter_ 1
#define seccomp_get_action_avail_ 2
#define seccomp_get_notif_sizes_ 3
#define seccomp_filter_flag_tsync_ 1
#define seccomp_filter_flag_log_ 2
#define seccomp_filter_flag_spec_allow_ 4
#define seccomp_filter_flag_new_listener_ 8
#define seccomp_filter_flag_tsync_esrch_ 16
#define seccomp_ret_kill_process_ 2147483648
#define seccomp_ret_kill_thread_ 0
#define seccomp_ret_trap_ 196608
#define seccomp_ret_errno_ 327680
#define seccomp_ret_trace_ 2146435072
#define seccomp_ret_log_ 2147221504
#define seccomp_ret_allow_ 2147418112
#define seccomp_ret_action_full_ 4294901760
#define seccomp_ret_data_ 65535
#define ptrace_traceme_ 0
#define ptrace_peektext_ 1
#define ptrace_peekdata_ 2
#define ptrace_peekuser_ 3
#define ptrace_poketext_ 4
#define ptrace_pokedata_ 5
#define ptrace_pokeuser_ 6
#define ptrace_cont_ 7
#define ptrace_kill_ 8
#define ptrace_singlestep_ 9
#define ptrace_getregs_ 12
#define ptrace_setregs_ 13
#define ptrace_getfpregs_ 14
#define ptrace_setfpregs_ 15
#define ptrace_attach_ 16
#define ptrace_detach_ 17
#define ptrace_getfpxregs_ 18
#define ptrace_setfpxregs_ 19
#define ptrace_syscall_ 24
#define ptrace_setoptions_ 16896
#define ptrace_geteventmsg_ 16897
#define ptrace_getsiginfo_ 16898
#define ptrace_setsiginfo_ 16899
#define ptrace_getregset_ 16900
#define ptrace_setregset_ 16901
#define ptrace_seize_ 16902
#define ptrace_interrupt_ 16903
#define ptrace_listen_ 16904
#define ptrace_peeksiginfo_ 16905
#define ptrace_getsigmask_ 16906
#define ptrace_setsigmask_ 16907
#define ptrace_seccomp_get_filter_ 16908
#define ptrace_seccomp_get_metadata_ 16909
#define ptrace_get_syscall_info_ 16910
#define ptrace_get_rseq_configuration_ 16911
#define ptrace_o_tracesysgood_ 1
#define ptrace_o_tracefork_ 2
#define ptrace_o_tracevfork_ 4
#define ptrace_o_traceclone_ 8
#define ptrace_o_traceexec_ 16
#define ptrace_o_tracevforkdone_ 32
#define ptrace_o_traceexit_ 64
#define ptrace_o_traceseccomp_ 128
#define ptrace_o_exitkill_ 1048576
#define ptrace_o_suspend_seccomp_ 2097152
#define ptrace_o_mask_ 3145983
#define stdin_ 0
#define stdout_ 1
#define stderr_ 2

#endif
