# additional include pathes necessary to compile the C++ program
AM_CXXFLAGS = -I$(top_srcdir)/src @AM_CXXFLAGS@

# the program to build (the names of the final binaries)
bin_PROGRAMS = land

# the list of sources for the binary
land_SOURCES = main.c

# the additional libraries needed to link.
land_LDADD = $(top_builddir)/src/tils/libtils.a $(AM_LDFLAGS)
