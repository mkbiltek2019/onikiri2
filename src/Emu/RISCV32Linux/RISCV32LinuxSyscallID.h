// 
// Copyright (c) 2005-2008 Kenichi Watanabe.
// Copyright (c) 2005-2008 Yasuhiro Watari.
// Copyright (c) 2005-2008 Hironori Ichibayashi.
// Copyright (c) 2008-2009 Kazuo Horio.
// Copyright (c) 2009-2015 Naruki Kurata.
// Copyright (c) 2005-2015 Masahiro Goshima.
// Copyright (c) 2005-2017 Ryota Shioya.
// 
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
// 
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
// 
// 1. The origin of this software must not be misrepresented; you must not
// claim that you wrote the original software. If you use this software
// in a product, an acknowledgment in the product documentation would be
// appreciated but is not required.
// 
// 2. Altered source versions must be plainly marked as such, and must not be
// misrepresented as being the original software.
// 
// 3. This notice may not be removed or altered from any source
// distribution.
// 
// 


#ifndef EMU_RISCV32LINUX_RISCV32_SYSCALLID_H
#define EMU_RISCV32LINUX_RISCV32_SYSCALLID_H

namespace Onikiri {
    namespace RISCV32Linux {

        // https://github.com/riscv/riscv-linux/blob/riscv-next/arch/riscv/include/uapi/asm/unistd.h
        // https://github.com/riscv/riscv-linux/blob/riscv-next/include/uapi/asm-generic/unistd.h
        namespace SyscallID {
            const int syscall_id_getcwd = 17;
            const int syscall_id_fcntl = 25;
            const int syscall_id_ioctl = 29;
            const int syscall_id_mkdirat = 34;
            const int syscall_id_unlinkat = 35;
            const int syscall_id_ftruncate = 46;
            const int syscall_id_faccessat = 48;
            const int syscall_id_openat = 56;
            const int syscall_id_close = 57;
            const int syscall_id_llseek = 62; // different from RV64
            const int syscall_id_read = 63;
            const int syscall_id_write = 64;
            const int syscall_id_writev = 66;
            const int syscall_id_readlinkat = 78;
            const int syscall_id_fstatat = 79;
            const int syscall_id_fstat = 80;
            const int syscall_id_exit = 93;
            const int syscall_id_exit_group = 94;
            const int syscall_id_clock_gettime = 113;
            const int syscall_id_sigaction = 134;
            const int syscall_id_times = 153;
            const int syscall_id_uname = 160;
            const int syscall_id_setrlimit = 163;
            const int syscall_id_getrusage = 165;
            const int syscall_id_gettimeofday = 169;
            const int syscall_id_getpid = 172;
            const int syscall_id_getuid = 174;
            const int syscall_id_geteuid = 175;
            const int syscall_id_getgid = 176;
            const int syscall_id_getegid = 177;
            const int syscall_id_sysinfo = 179;
            const int syscall_id_brk = 214;
            const int syscall_id_munmap = 215;
            const int syscall_id_mremap = 216;
            const int syscall_id_clone = 220;
            const int syscall_id_mmap = 222;
            const int syscall_id_prlimit = 261;

            const int syscall_id_open = 1024;
            const int syscall_id_unlink = 1026;
            const int syscall_id_stat = 1038;

            /*

            const int syscall_id_creat = 8;
            const int syscall_id_link = 9;

            const int syscall_id_chdir = 12;
            const int syscall_id_time = 13;

            const int syscall_id_chmod = 15;
            const int syscall_id_getpid = 20;

            const int syscall_id_setuid = 23;
            const int syscall_id_getuid = 24;

            const int syscall_id_utime = 30;
            const int syscall_id_access = 33;
            const int syscall_id_kill = 37;
            const int syscall_id_rename = 38;
            const int syscall_id_mkdir = 39;
            const int syscall_id_rmdir = 40;
            const int syscall_id_dup = 41;
            const int syscall_id_times = 43;
            const int syscall_id_setgid = 46;
            const int syscall_id_getgid = 47;
            const int syscall_id_geteuid = 49;
            const int syscall_id_getegid = 50;
            const int syscall_id_ioctl = 54;
            const int syscall_id_fcntl = 55;
            const int syscall_id_dup2 = 63;
            const int syscall_id_setreuid = 70;
            const int syscall_id_setregid = 71;
            const int syscall_id_setrlimit = 75;
            const int syscall_id_getrlimit = 76;
            const int syscall_id_getrusage = 77;
            const int syscall_id_readlink = 85;
            const int syscall_id_mmap = 90;
            const int syscall_id_munmap = 91;
            const int syscall_id_truncate = 92;
            const int syscall_id_ftruncate = 93;
            const int syscall_id_fchmod = 94;
            const int syscall_id_fchown = 95;
            const int syscall_id_lstat = 107;
            const int syscall_id_uname = 122;
            const int syscall_id_mprotect = 125;
            const int syscall_id_sigprocmask = 126;

            const int syscall_id_fchdir = 133;

            const int syscall_id__llseek = 140;

            const int syscall_id_readv = 145;
            const int syscall_id_writev = 146;

            const int syscall_id_mremap = 163;
            const int syscall_id_rt_sigaction = 173;
            const int syscall_id_rt_sigprocmask = 174;

            const int syscall_id_chown = 181;
            const int syscall_id_getcwd = 182;

            const int syscall_id_madvise = 205;
            const int syscall_id_gettid = 207;
            const int syscall_id_tkill = 208;
            const int syscall_id_tgkill = 250;
            */
        } // namespace SyscallID

        using namespace SyscallID;

    }   // namespace RISCV32Linux
} // namespace Onikiri

#endif
