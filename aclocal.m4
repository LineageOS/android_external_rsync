dnl AC_VALIDATE_CACHE_SYSTEM_TYPE[(cmd)]
dnl if the cache file is inconsistent with the current host,
dnl target and build system types, execute CMD or print a default
dnl error message.
AC_DEFUN(AC_VALIDATE_CACHE_SYSTEM_TYPE, [
    AC_REQUIRE([AC_CANONICAL_SYSTEM])
    AC_MSG_CHECKING([config.cache system type])
    if { test x"${ac_cv_host_system_type+set}" = x"set" &&
         test x"$ac_cv_host_system_type" != x"$host"; } ||
       { test x"${ac_cv_build_system_type+set}" = x"set" &&
         test x"$ac_cv_build_system_type" != x"$build"; } ||
       { test x"${ac_cv_target_system_type+set}" = x"set" &&
         test x"$ac_cv_target_system_type" != x"$target"; }; then
	AC_MSG_RESULT([different])
	ifelse($#, 1, [$1],
		[AC_MSG_ERROR(["you must remove config.cache and restart configure"])])
    else
	AC_MSG_RESULT([same])
    fi
    ac_cv_host_system_type="$host"
    ac_cv_build_system_type="$build"
    ac_cv_target_system_type="$target"
])

#serial 12

dnl By default, many hosts won't let programs access large files;
dnl one must use special compiler options to get large-file access to work.
dnl For more details about this brain damage please see:
dnl http://www.sas.com/standards/large.file/x_open.20Mar96.html

dnl Written by Paul Eggert <eggert@twinsun.com>.

dnl Internal subroutine of AC_SYS_LARGEFILE.
dnl AC_SYS_LARGEFILE_TEST_INCLUDES
AC_DEFUN(AC_SYS_LARGEFILE_TEST_INCLUDES,
  [[#include <sys/types.h>
    int a[(off_t) 9223372036854775807 == 9223372036854775807 ? 1 : -1];
  ]])

dnl Internal subroutine of AC_SYS_LARGEFILE.
dnl AC_SYS_LARGEFILE_MACRO_VALUE(C-MACRO, VALUE, CACHE-VAR, COMMENT, INCLUDES, FUNCTION-BODY)
AC_DEFUN([AC_SYS_LARGEFILE_MACRO_VALUE],
  [AC_CACHE_CHECK([for $1 value needed for large files], $3,
     [$3=no
      AC_TRY_COMPILE(AC_SYS_LARGEFILE_TEST_INCLUDES
$5
        ,
        [$6],
        ,
        [AC_TRY_COMPILE([#define $1 $2]
AC_SYS_LARGEFILE_TEST_INCLUDES
$5
           ,
           [$6],
           [$3=$2])])])
   if test "[$]$3" != no; then
     AC_DEFINE_UNQUOTED([$1], [$]$3, [$4])
   fi])

AC_DEFUN([AC_SYS_LARGEFILE],
  [AC_ARG_ENABLE(largefile,
     [  --disable-largefile     omit support for large files])
   if test "$enable_largefile" != no; then

     AC_CACHE_CHECK([for special C compiler options needed for large files],
       ac_cv_sys_largefile_CC,
       [ac_cv_sys_largefile_CC=no
        if test "$GCC" != yes; then
          # IRIX 6.2 and later do not support large files by default,
          # so use the C compiler's -n32 option if that helps.
          AC_TRY_COMPILE(AC_SYS_LARGEFILE_TEST_INCLUDES, , ,
            [ac_save_CC="$CC"
             CC="$CC -n32"
             AC_TRY_COMPILE(AC_SYS_LARGEFILE_TEST_INCLUDES, ,
               ac_cv_sys_largefile_CC=' -n32')
             CC="$ac_save_CC"])
        fi])
     if test "$ac_cv_sys_largefile_CC" != no; then
       CC="$CC$ac_cv_sys_largefile_CC"
     fi

     AC_SYS_LARGEFILE_MACRO_VALUE(_FILE_OFFSET_BITS, 64,
       ac_cv_sys_file_offset_bits,
       [Number of bits in a file offset, on hosts where this is settable.])
     AC_SYS_LARGEFILE_MACRO_VALUE(_LARGEFILE_SOURCE, 1,
       ac_cv_sys_largefile_source,
       [Define to make ftello visible on some hosts (e.g. HP-UX 10.20).],
       [#include <stdio.h>], [return !ftello;])
     AC_SYS_LARGEFILE_MACRO_VALUE(_LARGE_FILES, 1,
       ac_cv_sys_large_files,
       [Define for large files, on AIX-style hosts.])
     AC_SYS_LARGEFILE_MACRO_VALUE(_XOPEN_SOURCE, 500,
       ac_cv_sys_xopen_source,
       [Define to make ftello visible on some hosts (e.g. glibc 2.1.3).],
       [#include <stdio.h>], [return !ftello;])
   fi
  ])

dnl Check for socklen_t: historically on BSD it is an int, and in
dnl POSIX 1g it is a type of its own, but some platforms use different
dnl types for the argument to getsockopt, getpeername, etc.  So we
dnl have to test to find something that will work.

dnl This is no good, because passing the wrong pointer on C compilers is
dnl likely to only generate a warning, not an error.  We don't call this at
dnl the moment.

AC_DEFUN([TYPE_SOCKLEN_T],
[
   AC_MSG_CHECKING([for socklen_t])
   AC_CACHE_VAL([lftp_cv_socklen_t],
   [
      lftp_cv_socklen_t=no
      AC_TRY_COMPILE([
         #include <sys/types.h>
         #include <sys/socket.h>
      ],
      [
        socklen_t len;
        getpeername(0,0,&len);
      ],
      [
         lftp_cv_socklen_t=yes
      ])
   ])
   AC_MSG_RESULT($lftp_cv_socklen_t)
   if test $lftp_cv_socklen_t = no; then
      AC_MSG_CHECKING([for socklen_t equivalent])
      AC_CACHE_VAL([lftp_cv_socklen_t_equiv],
      [
         lftp_cv_socklen_t_equiv=int
         AC_LANG_SAVE
         for t in int size_t unsigned long "unsigned long"; do
            AC_TRY_COMPILE([
               #include <sys/types.h>
               #include <sys/socket.h>
            ],
            [
              $t len;
              getpeername(0,0,&len);
            ],
            [
               lftp_cv_socklen_t_equiv="$t"
               break
            ],
	    [
		AC_MSG_ERROR([Cannot find a type to use in place of socklen_t])
	    ])
         done
      ])
      AC_MSG_RESULT($lftp_cv_socklen_t_equiv)
      AC_DEFINE_UNQUOTED(socklen_t, $lftp_cv_socklen_t_equiv,
			[type to use in place of socklen_t if not defined])
   fi
])

