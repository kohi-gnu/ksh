/*
 * BSD 3-Clause License
 *
 * Copyright (c) 2023, d0p1
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include <signal.h>

#include "sh.h"

#if !HAVE_DECL_SYS_SIGLIST && !defined(HAVE_SIGDESCR_NP)

const char *
siglist(int sig)
{
	switch (sig)
	{
#ifdef SIGHUP
		case SIGHUP:
			return "Hangup";
#endif /* SIGHUP */
#ifdef SIGINT
		case SIGINT:
			return "Interrupt";
#endif /* SIGINT */
#ifdef SIGQUIT
		case SIGQUIT:
			return "Quit";
#endif /* SIGQUIT */
#ifdef SIGILL
		case SIGILL:
			return "Illegal instruction";
#endif /* SIGILL */
#ifdef SIGTRAP
		case SIGTRAP:
			return "Trap";
#endif /* SIGTRAP */
#ifdef SIGABRT
		case SIGABRT:
			return "Aborted";
#endif /* SIGABRT */
#ifdef SIGBUS
		case SIGBUS:
			return "Bus error";
#endif /* SIGBUS */
#ifdef SIGFPE
		case SIGFPE:
			return "Arithmetic exception";
#endif /* SIGFPE */
#ifdef SIGKILL
		case SIGKILL:
			return "Killed";
#endif /* SIGKILL */
#ifdef SIGSEGV
		case SIGSEGV:
			return "Segmentation fault";
#endif /* SIGSEGV */
#ifdef SIGPIPE
		case SIGPIPE:
			return "Broken pipe";
#endif /* SIGPIPE */
#ifdef SIGALRM
		case SIGALRM:
			return "Alarm clock";
#endif /* SIGALRM */
#ifdef SIGTERM
		case SIGTERM:
			return "Terminated";
#endif /* SIGTERM */
#ifdef SIGUSR1
		case SIGUSR1:
			return "User signal 1";
#endif /* SIGUSR1 */
#ifdef SIGUSR2
		case SIGUSR2:
			return "User signal 2";
#endif /* SIGUSR2 */
#ifdef SIGSTKFLT
		case SIGSTKFLT:
			return "Stack fault";
#endif /* SIGSTKFLT */
#ifdef SIGCHLD
		case SIGCHLD:
			return "Child status changed";
#endif /* SIGCHLD */
#ifdef SIGCONT
		case SIGCONT:
			return "Continued";
#endif /* SIGCONT */
#ifdef SIGSTOP
		case SIGSTOP:
			return "Stopped (signal)";
#endif /* SIGSTOP */
#ifdef SIGTSTP
		case SIGTSTP:
			return "Stopped (user)";
#endif /* SIGTSTP */
#ifdef SIGTTIN
		case SIGTTIN:
			return "Stopped (tty input)";
#endif /* SIGTTIN */
#ifdef SIGTTOU
		case SIGTTOU:
			return "Stopped (tty output)";
#endif /* SIGTTOU */
#ifdef SIGURG
		case SIGURG:
			return "Urgent data is available at a socket";
#endif /* SIGURG */
#ifdef SIGXCPU
		case SIGXCPU:
			return "CPU time limit exceeded";
#endif /* SIGXCPU */
#ifdef SIGXFSZ
		case SIGXFSZ:
			return "File size limit exceeded";
#endif /* SIGXFSZ */
#ifdef SIGVTALRM
		case SIGVTALRM:
			return "Virtual timer expired";
#endif /* SIGVTALRM */
#ifdef SIGPROF
		case SIGPROF:
			return "Profiling timer expired";
#endif /* SIGPROF */
#ifdef SIGWINCH
		case SIGWINCH:
			return "Window size changed";
#endif /* SIGWINCH */
#ifdef SIGIO
		case SIGIO:
			return "I/O possible";
#endif /* SIGIO */
#ifdef SIGPWR
		case SIGPWR:
			return "Power fail/restart";
#endif /* SIGPWR */
#ifdef SIGSYS
		case SIGSYS:
			return "Bad system call";
#endif /* SIGSYS */
		default:
			return "UNKNOWN";
	}
}

#endif
