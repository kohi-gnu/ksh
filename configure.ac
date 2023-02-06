AC_PREREQ([2.71])
AC_INIT([Kōhī ksh], m4_esyscmd([build-aux/gen-version]),
    [https://github.com/kohi-gnu/ksh], [kohi-ksh])

AC_CONFIG_AUX_DIR([build-aux])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile])

AM_INIT_AUTOMAKE([foreign subdir-objects])

AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL

AC_CHECK_HEADERS([signal.h, vis.h])

AC_CHECK_DECLS([sys_siglist, sys_signame], [], [],
[#include <signal.h>
/* NetBSD declares sys_siglist in unistd.h. */
#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif])

AC_CHECK_FUNCS(sigabbrev_np sigdescr_np)
AC_CHECK_FUNCS(strlcpy strlcat strtonum asprintf)
AC_CHECK_FUNCS(setresgid setresuid)
AC_CHECK_FUNCS(stravis strunvis)

AC_ARG_ENABLE([vi], [],
    [case "${enableval}" in
        yes) enable_vi=true ;;
        *) enable_vi=false ;;
    esac], [enable_vi=true])
AM_CONDITIONAL([VI], [test x$enable_vi = xtrue])
AC_ARG_ENABLE([emacs], [],
    [case "${enableval}" in
        yes) enable_emacs=true ;;
        *) enable_emacs=false ;;
    esac], [enable_emacs=false])
AM_CONDITIONAL([EMACS], [test x$enable_emacs = xtrue])

AC_ARG_ENABLE([small], [],
    [case "${enableval}" in
        yes) enable_small=true ;;
        *) enable_small=false ;;
    esac], [enable_small=false])
AM_CONDITIONAL([SMALL], [test x$enable_small = xtrue])

if test "x$enable_small" = "xfalse"; then
	AC_CHECK_HEADERS([curses.h term.h], [], [AC_ERROR([curses is required])])
	AC_SEARCH_LIBS(setupterm, curses, [], [AC_ERROR([curse is required])])
fi

AC_OUTPUT
