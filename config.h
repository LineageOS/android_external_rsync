/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if link() can hard-link special files. */
#define CAN_HARDLINK_SPECIAL 1

/* Define to 1 if link() can hard-link symlinks. */
#define CAN_HARDLINK_SYMLINK 1

/* Define to 1 if chown modifies symlinks. */
/* #undef CHOWN_MODIFIES_SYMLINK */

/* Undefine if you do not want locale features. By default this is defined. */
#define CONFIG_LOCALE 1

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define to 1 if using external zlib */
/* #undef EXTERNAL_ZLIB */

/* Used to make "checker" understand that FD_ZERO() clears memory. */
/* #undef FORCE_FD_ZERO_MEMSET */

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#define GETPGRP_VOID 1

/* Define to 1 if you have the `aclsort' function. */
/* #undef HAVE_ACLSORT */

/* true if you have acl_get_perm_np */
/* #undef HAVE_ACL_GET_PERM_NP */

/* Define to 1 if you have the <acl/libacl.h> header file. */
/* #undef HAVE_ACL_LIBACL_H */

/* true if you have AIX ACLs */
/* #undef HAVE_AIX_ACLS */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the `attropen' function. */
/* #undef HAVE_ATTROPEN */

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Define to 1 if readdir() is broken */
/* #undef HAVE_BROKEN_READDIR */

/* Define to 1 if you have the <bsd/string.h> header file. */
/* #undef HAVE_BSD_STRING_H */

/* Define to 1 if vsprintf has a C99-compatible return value */
/* #undef HAVE_C99_VSNPRINTF */

/* Define to 1 if you have the `chflags' function. */
/* #undef HAVE_CHFLAGS */

/* Define to 1 if you have the `chmod' function. */
#define HAVE_CHMOD 1

/* Define to 1 if you have the `chown' function. */
#define HAVE_CHOWN 1

/* Define to 1 if you have the <compat.h> header file. */
/* #undef HAVE_COMPAT_H */

/* Define to 1 if you have the "connect" function */
#define HAVE_CONNECT 1

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define if posix_fallocate is efficient (Cygwin) */
/* #undef HAVE_EFFICIENT_POSIX_FALLOCATE */

/* Define to 1 if errno is declared in errno.h */
#define HAVE_ERRNO_DECL 1

/* Define to 1 if you have the `extattr_get_link' function. */
/* #undef HAVE_EXTATTR_GET_LINK */

/* Define to 1 if you have the fallocate function and it compiles and links
   without error */
#define HAVE_FALLOCATE 1

/* Define if FALLOC_FL_PUNCH_HOLE is available. */
#define HAVE_FALLOC_FL_PUNCH_HOLE 1

/* Define if FALLOC_FL_ZERO_RANGE is available. */
#define HAVE_FALLOC_FL_ZERO_RANGE 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* True if you have FreeBSD xattrs */
/* #undef HAVE_FREEBSD_XATTRS */

/* Define to 1 if you have the `fstat' function. */
#define HAVE_FSTAT 1

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the "getaddrinfo" function and required types. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getattrlist' function. */
/* #undef HAVE_GETATTRLIST */

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getegid' function. */
#define HAVE_GETEGID 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the `getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Define to 1 if you have the `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `getpass' function. */
/* #undef HAVE_GETPASS */

/* Define to 1 if you have the `getpgrp' function. */
#define HAVE_GETPGRP 1

/* Define to 1 if gettimeofday() takes a time-zone arg */
#define HAVE_GETTIMEOFDAY_TZ 1

/* Define to 1 if you have the `getxattr' function. */
#define HAVE_GETXATTR 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* true if you have HPUX ACLs */
/* #undef HAVE_HPUX_ACLS */

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the `iconv_open' function. */
#define HAVE_ICONV_OPEN 1

/* Define to 1 if the system has the type `id_t'. */
#define HAVE_ID_T 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the `innetgr' function. */
/* #undef HAVE_INNETGR */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* true if you have IRIX ACLs */
/* #undef HAVE_IRIX_ACLS */

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define to 1 if you have the `lchmod' function. */
/* #undef HAVE_LCHMOD */

/* Define to 1 if you have the `lchown' function. */
#define HAVE_LCHOWN 1

/* Define to 1 if you have the `acl' library (-lacl). */
/* #undef HAVE_LIBACL */

/* Define to 1 if you have the `attr' library (-lattr). */
/* #undef HAVE_LIBATTR */

/* Define to 1 if you have the <libcharset.h> header file. */
/* #undef HAVE_LIBCHARSET_H */

/* Define to 1 if you have the `inet' library (-linet). */
/* #undef HAVE_LIBINET */

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `nsl_s' library (-lnsl_s). */
/* #undef HAVE_LIBNSL_S */

/* Define to 1 if you have the `popt' library (-lpopt). */
/* #undef HAVE_LIBPOPT */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `sec' library (-lsec). */
/* #undef HAVE_LIBSEC */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_LIBZ */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the `linkat' function. */
#define HAVE_LINKAT 1

/* Define to 1 if you have the <linux/falloc.h> header file. */
#define HAVE_LINUX_FALLOC_H 1

/* True if you have Linux xattrs (or equivalent) */
#define HAVE_LINUX_XATTRS 1

/* Define to 1 if you have the `locale_charset' function. */
/* #undef HAVE_LOCALE_CHARSET */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE 1

/* Define to 1 if the type `long double' works and has more range or precision
   than `double'. */
#define HAVE_LONG_DOUBLE_WIDER 1

/* Define to 1 if you have the `lseek64' function. */
#define HAVE_LSEEK64 1

/* Define to 1 if you have the `lutimes' function. */
#define HAVE_LUTIMES 1

/* Define to 1 if you have the <lz4.h> header file. */
#define HAVE_LZ4_H 1

/* Define to 1 if you have the `mallinfo' function. */
#define HAVE_MALLINFO 1

/* Define to 1 if you have the `mallinfo2' function. */
/* #undef HAVE_MALLINFO2 */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <mcheck.h> header file. */
/* #undef HAVE_MCHECK_H */

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkfifo' function. */
#define HAVE_MKFIFO 1

/* Define to 1 if you have the `mknod' function. */
#define HAVE_MKNOD 1

/* Define to 1 if you have the `mkstemp64' function. */
#define HAVE_MKSTEMP64 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if the system has the type `mode_t'. */
#define HAVE_MODE_T 1

/* Define to 1 if you have the `mtrace' function. */
/* #undef HAVE_MTRACE */

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netgroup.h> header file. */
/* #undef HAVE_NETGROUP_H */

/* Define to 1 if you have the <netinet/in_systm.h> header file. */
#define HAVE_NETINET_IN_SYSTM_H 1

/* Define to 1 if you have the <netinet/ip.h> header file. */
#define HAVE_NETINET_IP_H 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if the system has the type `off_t'. */
#define HAVE_OFF_T 1

/* Define to 1 if you have the `open64' function. */
#define HAVE_OPEN64 1

/* Define to 1 if you have the <openssl/md4.h> header file. */
#define HAVE_OPENSSL_MD4_H 1

/* Define to 1 if you have the <openssl/md5.h> header file. */
#define HAVE_OPENSSL_MD5_H 1

/* true if you have Mac OS X ACLs */
/* #undef HAVE_OSX_ACLS */

/* True if you have Mac OS X xattrs */
/* #undef HAVE_OSX_XATTRS */

/* Define to 1 if the system has the type `pid_t'. */
#define HAVE_PID_T 1

/* Define to 1 if you have the <popt.h> header file. */
/* #undef HAVE_POPT_H */

/* Define to 1 if you have the <popt/popt.h> header file. */
/* #undef HAVE_POPT_POPT_H */

/* true if you have posix ACLs */
/* #undef HAVE_POSIX_ACLS */

/* Define to 1 if you have the `posix_fallocate' function. */
#define HAVE_POSIX_FALLOCATE 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if remote shell is remsh, not rsh */
/* #undef HAVE_REMSH */

/* Define to 1 if mkstemp() is available and works right */
/* #undef HAVE_SECURE_MKSTEMP */

/* Define to 1 if you have the `setattrlist' function. */
/* #undef HAVE_SETATTRLIST */

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setmode' function. */
/* #undef HAVE_SETMODE */

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigprocmask' function. */
#define HAVE_SIGPROCMASK 1

/* Define to 1 if the system has the type `size_t'. */
#define HAVE_SIZE_T 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Do we have sockaddr_in6.sin6_scope_id? */
#define HAVE_SOCKADDR_IN6_SCOPE_ID 1

/* Do we have sockaddr_in.sin_len? */
/* #undef HAVE_SOCKADDR_IN_LEN */

/* Do we have sockaddr.sa_len? */
/* #undef HAVE_SOCKADDR_LEN */

/* Do we have sockaddr_un.sun_len? */
/* #undef HAVE_SOCKADDR_UN_LEN */

/* Define to 1 if you have the "socketpair" function */
#define HAVE_SOCKETPAIR 1

/* true if you have solaris ACLs */
/* #undef HAVE_SOLARIS_ACLS */

/* True if you have Solaris xattrs */
/* #undef HAVE_SOLARIS_XATTRS */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if the system has the type `struct addrinfo'. */
#define HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if the system has the type `struct stat64'. */
#define HAVE_STRUCT_STAT64 1

/* Define to 1 if `st_mtimensec' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_MTIMENSEC 1

/* Define to 1 if `st_mtimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIMESPEC_TV_NSEC */

/* Define to 1 if `st_mtim.tv_nsec' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_MTIM_TV_NSEC 1

/* Define to 1 if `st_rdev' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_RDEV 1

/* Define to 1 if you have the "struct utimbuf" type */
#define HAVE_STRUCT_UTIMBUF 1

/* Define to 1 if you have the <sys/acl.h> header file. */
/* #undef HAVE_SYS_ACL_H */

/* Define to 1 if you have the <sys/attr.h> header file. */
/* #undef HAVE_SYS_ATTR_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/extattr.h> header file. */
/* #undef HAVE_SYS_EXTATTR_H */

/* Define to 1 if you have the SYS_fallocate syscall number */
#define HAVE_SYS_FALLOCATE 1

/* Define to 1 if you have the <sys/fcntl.h> header file. */
#define HAVE_SYS_FCNTL_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mode.h> header file. */
/* #undef HAVE_SYS_MODE_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/unistd.h> header file. */
#define HAVE_SYS_UNISTD_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <sys/xattr.h> header file. */
#define HAVE_SYS_XATTR_H 1

/* Define to 1 if you have the `tcgetpgrp' function. */
#define HAVE_TCGETPGRP 1

/* true if you have Tru64 ACLs */
/* #undef HAVE_TRU64_ACLS */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* true if you have UnixWare ACLs */
/* #undef HAVE_UNIXWARE_ACLS */

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* Define to 1 if you have the `utimes' function. */
#define HAVE_UTIMES 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if `utime(file, NULL)' sets file's timestamp to the present. */
#define HAVE_UTIME_NULL 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `va_copy' function. */
/* #undef HAVE_VA_COPY */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `wait4' function. */
#define HAVE_WAIT4 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to 1 if you have the <xxhash.h> header file. */
#define HAVE_XXHASH_H 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the <zstd.h> header file. */
#define HAVE_ZSTD_H 1

/* Define to 1 if you have the `_acl' function. */
/* #undef HAVE__ACL */

/* Define to 1 if you have the `_facl' function. */
/* #undef HAVE__FACL */

/* Define to 1 if you have the `__acl' function. */
/* #undef HAVE___ACL */

/* Define to 1 if you have the `__facl' function. */
/* #undef HAVE___FACL */

/* Define to 1 if you have the `__va_copy' function. */
/* #undef HAVE___VA_COPY */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Define if you want the --iconv option. Specifying a value will set the
   default iconv setting (a NULL means no --iconv processing by default). */
#define ICONV_OPTION NULL

/* true if you have IPv6 */
#define INET6 1

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
#define MAJOR_IN_SYSMACROS 1

/* Define to 1 if makedev() takes 3 args */
/* #undef MAKEDEV_TAKES_3_ARGS */

/* Define to 1 if mknod() can create FIFOs. */
#define MKNOD_CREATES_FIFOS 1

/* Define to 1 if mknod() can create sockets. */
/* #undef MKNOD_CREATES_SOCKETS */

/* unprivileged group for unprivileged user */
#define NOBODY_GROUP "nogroup"

/* unprivileged user--e.g. nobody */
#define NOBODY_USER "nobody"

/* True if device files do not support xattrs */
/* #undef NO_DEVICE_XATTRS */

/* True if special files do not support xattrs */
/* #undef NO_SPECIAL_XATTRS */

/* True if symlinks do not support user xattrs */
#define NO_SYMLINK_USER_XATTRS 1

/* True if symlinks do not support xattrs */
/* #undef NO_SYMLINK_XATTRS */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://rsync.samba.org/bug-tracking.html"

/* Define to the full name of this package. */
#define PACKAGE_NAME "rsync"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "rsync  "

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rsync"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION " "

/* location of configuration file for rsync server */
#define RSYNCD_SYSCONF "/etc/rsyncd.conf"

/* location of rsync on remote machine */
#define RSYNC_PATH "rsync"

/* default -e command */
#define RSYNC_RSH "ssh"

/* Define to 1 if --secluded-args should be the default */
/* #undef RSYNC_USE_SECLUDED_ARGS */

/* Define to 1 if sockets need to be shutdown */
/* #undef SHUTDOWN_ALL_SOCKETS */

/* Define to 1 if "signed char" is a valid type */
#define SIGNED_CHAR_OK 1

/* The size of `char*', as computed by sizeof. */
#define SIZEOF_CHARP 8

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `int16_t', as computed by sizeof. */
#define SIZEOF_INT16_T 2

/* The size of `int32_t', as computed by sizeof. */
#define SIZEOF_INT32_T 4

/* The size of `int64_t', as computed by sizeof. */
#define SIZEOF_INT64_T 8

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off64_t', as computed by sizeof. */
#define SIZEOF_OFF64_T 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* The size of `uint16_t', as computed by sizeof. */
#define SIZEOF_UINT16_T 2

/* The size of `uint32_t', as computed by sizeof. */
#define SIZEOF_UINT32_T 4

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 to add support for ACLs */
/* #undef SUPPORT_ACLS */

/* Undefine if you do not want LZ4 compression. By default this is defined. */
#define SUPPORT_LZ4 1

/* Define to 1 to add support for extended attributes */
#define SUPPORT_XATTRS 1

/* Undefine if you do not want xxhash checksums. By default this is defined.
   */
#define SUPPORT_XXHASH 1

/* Undefine if you do not want zstd compression. By default this is defined.
   */
#define SUPPORT_ZSTD 1

/* Define to 1 if you want rsync to make use of iconv_open() */
/* #undef USE_ICONV_OPEN */

/* Define to 1 to enable MD5 ASM optimizations */
/* #undef USE_MD5_ASM */

/* Undefine if you do not want to use openssl crypto library. By default this
   is defined. */
#define USE_OPENSSL 1

/* Define to 1 to enable rolling-checksum ASM optimizations (requires
   --enable-roll-simd) */
/* #undef USE_ROLL_ASM */

/* Define to 1 to enable rolling-checksum SIMD optimizations */
/* #undef USE_ROLL_SIMD */

/* String to pass to iconv() for the UTF-8 charset. */
#define UTF8_CHARSET "UTF-8"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define _GNU_SOURCE so that we get all necessary prototypes */
#define _GNU_SOURCE 1

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
