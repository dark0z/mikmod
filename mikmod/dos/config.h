/* config.h.in.  Generated manually for DOS/DJGPP.  */

/* Define if your libmikmod has MikMod_free (not found in <= 3.2.0-beta2). */
#undef HAVE_MIKMOD_FREE

/* djgpp-v2.04 does provides [v]snprintf functions! */
/* Define to 1 if you have the `snprintf' function. */
/* #define HAVE_SNPRINTF 1 */
/* Define to 1 if you have the `vsnprintf' function. */
/* #define HAVE_VSNPRINTF 1 */

/* Define if you don't have vprintf but do have _doprnt.  */
#define HAVE_DOPRNT	1

/* Define if your system has a working fnmatch function.  */
#define HAVE_FNMATCH	1

/* Define if you have <sys/wait.h> that is POSIX.1 compatible.  */
#define HAVE_SYS_WAIT_H	1

/* Define if you have the vprintf function.  */
#define HAVE_VPRINTF	1

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE	void

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME	1

/* Define if your system has random(3) and srandom(3) */
#define HAVE_SRANDOM	1

/* Define if your system has strerror(3) */
#define HAVE_STRERROR 1

/* Define if you have the usleep function.  */
#define HAVE_USLEEP	1

/* Define if your system has the prototype for usleep(3). */
#define HAVE_USLEEP_PROTO

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H	1

/* Define if you have the <fnmatch.h> header file.  */
#define HAVE_FNMATCH_H	1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H	1

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H	1

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H		1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H		1

/* Define if TIOCGWINSZ requires sys/ioctl.h */
#define GWINSZ_IN_SYS_IOCTL
