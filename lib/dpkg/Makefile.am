## Process this file with automake to produce Makefile.in

SUBDIRS = . t

localedir = $(datadir)/locale
pkgconfdir = $(sysconfdir)/@PACKAGE@
AM_CPPFLAGS = \
	-DLOCALEDIR=\"$(localedir)\" \
	-DCONFIGDIR=\"$(pkgconfdir)\" \
	-DADMINDIR=\"$(admindir)\" \
	-DDEFAULT_TEXT_DOMAIN=\"@PACKAGE@\" \
	-idirafter $(top_srcdir)/lib/compat \
	-I$(top_builddir) \
	-I$(top_srcdir)/lib


EXTRA_DIST = \
	libdpkg.map \
	libdpkg.pc.in

pkgconfigdir = $(devlibdir)/pkgconfig
pkgconfig_DATA = libdpkg.pc

devlib_LTLIBRARIES = libdpkg.la

libdpkg_la_LDFLAGS =
if HAVE_LINKER_VERSION_SCRIPT
libdpkg_la_LDFLAGS += \
	-Wl,--version-script=$(srcdir)/libdpkg.map
endif
libdpkg_la_LDFLAGS += $(MD_LIBS)
libdpkg_la_LIBADD = \
	../compat/libcompat.la
if BUILD_SHARED
libdpkg_la_LIBADD += \
	$(LIBINTL) \
	$(Z_LIBS) \
	$(LZMA_LIBS) \
	$(BZ2_LIBS)
endif
EXTRA_libdpkg_la_DEPENDENCIES = \
	libdpkg.map
libdpkg_la_SOURCES = \
	dlist.h \
	ar.c \
	arch.c \
	atomic-file.c \
	buffer.c \
	c-ctype.c \
	cleanup.c \
	color.c \
	command.c \
	compress.c \
	dbdir.c \
	dbmodify.c \
	db-ctrl-access.c \
	db-ctrl-format.c \
	db-ctrl-upgrade.c \
	db-fsys-digest.c \
	db-fsys-divert.c \
	db-fsys-files.c \
	db-fsys-override.c \
	deb-version.c \
	debug.c \
	depcon.c \
	dir.c \
	dump.c \
	ehandle.c \
	error.c \
	fdio.c \
	file.c \
	fields.c \
	fsys-dir.c\
	fsys-iter.c \
	fsys-hash.c \
	glob.c \
	i18n.c i18n.h \
	log.c \
	mlib.c \
	namevalue.c \
	nfmalloc.c \
	options.c \
	options-parsers.c \
	pager.c \
	parse.c \
	parsehelp.c \
	path.c \
	path-remove.c \
	perf.h \
	pkg.c \
	pkg-array.c \
	pkg-files.c \
	pkg-format.c \
	pkg-hash.c \
	pkg-list.c \
	pkg-namevalue.c \
	pkg-queue.c \
	pkg-show.c \
	pkg-spec.c \
	progname.c \
	program.c \
	progress.c \
	report.c \
	string.c \
	strhash.c \
	strwide.c \
	subproc.c \
	tarfn.c \
	test.h \
	treewalk.c \
	trigname.c \
	trignote.c \
	triglib.c \
	trigdeferred.c \
	utils.c \
	varbuf.c \
	version.c \
	haiku_link.c

pkginclude_HEADERS = \
	ar.h \
	arch.h \
	atomic-file.h \
	buffer.h \
	c-ctype.h \
	color.h \
	command.h \
	compress.h \
	db-ctrl.h \
	db-fsys.h \
	deb-version.h \
	debug.h \
	dir.h \
	dpkg.h \
	dpkg-db.h \
	ehandle.h \
	error.h \
	fdio.h \
	file.h \
	fsys.h \
	glob.h \
	macros.h \
	namevalue.h \
	options.h \
	pager.h \
	parsedump.h \
	path.h \
	pkg.h \
	pkg-array.h \
	pkg-files.h \
	pkg-format.h \
	pkg-list.h \
	pkg-queue.h \
	pkg-show.h \
	pkg-spec.h \
	progname.h \
	program.h \
	progress.h \
	report.h \
	string.h \
	subproc.h \
	tarfn.h \
	treewalk.h \
	trigdeferred.h \
	triglib.h \
	varbuf.h \
	version.h \
	haiku_link.h
