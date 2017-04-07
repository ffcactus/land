# additional include pathes necessary to compile the library
AM_CXXFLAGS = -I$(top_srcdir)/src @AM_CXXFLAGS@

lib_LIBRARIES = libtils.a

# where to install the headers on the system.
libtils_adir = $(includedir)/tils

# the list of header files that belongs to the library (to be installed later)
libtils_a_HEADERS = lib.h

# the sources to add to the library and to add to the source distribution
libtils_a_SOURCES = $(libtils_a_HEADERS) lib.c

