AC_INIT([file_manip], [2021.18.6], [kamelghalgaoui7@gmail.com])

AC_PREREQ([2.69])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_SRCDIR([filecopy.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_LIBTOOL
# Checks for header files.
AC_CHECK_HEADERS([stdlib.h stdio.h pthread.h string.h])

# Check libs
ACX_PTHREAD
LIBS="$PTHREAD_LIBS $LIBS"
CFLAGS="$CFLAGS $PTHREAD_CFLAGS"
CC="$PTHREAD_CC"

# Checks for library functions.
AC_CONFIG_FILES([Makefile])

AC_OUTPUT

