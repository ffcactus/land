# additional include pathes necessary to compile the C++ programs
AM_CXXFLAGS = -I$(top_srcdir)/src @AM_CXXFLAGS@

###############################################################################
# THE PROGRAMS TO BUILD
###############################################################################

# the program to build (the names of the final binaries)
bin_PROGRAMS = main

# list of sources for the 'main' binary
main_SOURCES =	main.cpp

# the additional libraries needed to link main
main_LDADD = $(top_builddir)/src/mylib/libmylib.a $(AM_LDFLAGS)

###############################################################################
