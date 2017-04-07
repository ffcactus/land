#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([land], [1.0], [ffcactus@me.com])

# Checks for programs.
AC_PROG_CC

AC_PROG_RANLIB
AM_INIT_AUTOMAKE

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

# distribute additional compiler and linker flags
# --> set these variables instead of CXXFLAGS or LDFLAGS
AC_SUBST([AM_CXXFLAGS])
AC_SUBST([AM_LDFLAGS])
AC_SUBST([LIBS])

# files to generate via autotools (.am or .in source files)
AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([doc/Makefile])
AC_CONFIG_FILES([man/Makefile])
AC_CONFIG_FILES([script/Makefile])
AC_CONFIG_FILES([src/init/Makefile])
AC_CONFIG_FILES([src/lib/Makefile])


AC_OUTPUT
