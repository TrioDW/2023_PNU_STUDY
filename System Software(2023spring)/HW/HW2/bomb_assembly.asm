
bomb:     file format elf64-x86-64


Disassembly of section .init:

0000000000000e60 <_init>:
 e60:	48 83 ec 08          	sub    $0x8,%rsp
 e64:	48 8b 05 7d 31 20 00 	mov    0x20317d(%rip),%rax        # 203fe8 <__gmon_start__>
 e6b:	48 85 c0             	test   %rax,%rax
 e6e:	74 02                	je     e72 <_init+0x12>
 e70:	ff d0                	callq  *%rax
 e72:	48 83 c4 08          	add    $0x8,%rsp
 e76:	c3                   	retq   

Disassembly of section .plt:

0000000000000e80 <.plt>:
     e80:	ff 35 6a 30 20 00    	pushq  0x20306a(%rip)        # 203ef0 <_GLOBAL_OFFSET_TABLE_+0x8>
     e86:	ff 25 6c 30 20 00    	jmpq   *0x20306c(%rip)        # 203ef8 <_GLOBAL_OFFSET_TABLE_+0x10>
     e8c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000000e90 <getenv@plt>:
     e90:	ff 25 6a 30 20 00    	jmpq   *0x20306a(%rip)        # 203f00 <getenv@GLIBC_2.2.5>
     e96:	68 00 00 00 00       	pushq  $0x0
     e9b:	e9 e0 ff ff ff       	jmpq   e80 <.plt>

0000000000000ea0 <strcasecmp@plt>:
     ea0:	ff 25 62 30 20 00    	jmpq   *0x203062(%rip)        # 203f08 <strcasecmp@GLIBC_2.2.5>
     ea6:	68 01 00 00 00       	pushq  $0x1
     eab:	e9 d0 ff ff ff       	jmpq   e80 <.plt>

0000000000000eb0 <__errno_location@plt>:
     eb0:	ff 25 5a 30 20 00    	jmpq   *0x20305a(%rip)        # 203f10 <__errno_location@GLIBC_2.2.5>
     eb6:	68 02 00 00 00       	pushq  $0x2
     ebb:	e9 c0 ff ff ff       	jmpq   e80 <.plt>

0000000000000ec0 <strcpy@plt>:
     ec0:	ff 25 52 30 20 00    	jmpq   *0x203052(%rip)        # 203f18 <strcpy@GLIBC_2.2.5>
     ec6:	68 03 00 00 00       	pushq  $0x3
     ecb:	e9 b0 ff ff ff       	jmpq   e80 <.plt>

0000000000000ed0 <puts@plt>:
     ed0:	ff 25 4a 30 20 00    	jmpq   *0x20304a(%rip)        # 203f20 <puts@GLIBC_2.2.5>
     ed6:	68 04 00 00 00       	pushq  $0x4
     edb:	e9 a0 ff ff ff       	jmpq   e80 <.plt>

0000000000000ee0 <write@plt>:
     ee0:	ff 25 42 30 20 00    	jmpq   *0x203042(%rip)        # 203f28 <write@GLIBC_2.2.5>
     ee6:	68 05 00 00 00       	pushq  $0x5
     eeb:	e9 90 ff ff ff       	jmpq   e80 <.plt>

0000000000000ef0 <__stack_chk_fail@plt>:
     ef0:	ff 25 3a 30 20 00    	jmpq   *0x20303a(%rip)        # 203f30 <__stack_chk_fail@GLIBC_2.4>
     ef6:	68 06 00 00 00       	pushq  $0x6
     efb:	e9 80 ff ff ff       	jmpq   e80 <.plt>

0000000000000f00 <alarm@plt>:
     f00:	ff 25 32 30 20 00    	jmpq   *0x203032(%rip)        # 203f38 <alarm@GLIBC_2.2.5>
     f06:	68 07 00 00 00       	pushq  $0x7
     f0b:	e9 70 ff ff ff       	jmpq   e80 <.plt>

0000000000000f10 <close@plt>:
     f10:	ff 25 2a 30 20 00    	jmpq   *0x20302a(%rip)        # 203f40 <close@GLIBC_2.2.5>
     f16:	68 08 00 00 00       	pushq  $0x8
     f1b:	e9 60 ff ff ff       	jmpq   e80 <.plt>

0000000000000f20 <read@plt>:
     f20:	ff 25 22 30 20 00    	jmpq   *0x203022(%rip)        # 203f48 <read@GLIBC_2.2.5>
     f26:	68 09 00 00 00       	pushq  $0x9
     f2b:	e9 50 ff ff ff       	jmpq   e80 <.plt>

0000000000000f30 <fgets@plt>:
     f30:	ff 25 1a 30 20 00    	jmpq   *0x20301a(%rip)        # 203f50 <fgets@GLIBC_2.2.5>
     f36:	68 0a 00 00 00       	pushq  $0xa
     f3b:	e9 40 ff ff ff       	jmpq   e80 <.plt>

0000000000000f40 <signal@plt>:
     f40:	ff 25 12 30 20 00    	jmpq   *0x203012(%rip)        # 203f58 <signal@GLIBC_2.2.5>
     f46:	68 0b 00 00 00       	pushq  $0xb
     f4b:	e9 30 ff ff ff       	jmpq   e80 <.plt>

0000000000000f50 <gethostbyname@plt>:
     f50:	ff 25 0a 30 20 00    	jmpq   *0x20300a(%rip)        # 203f60 <gethostbyname@GLIBC_2.2.5>
     f56:	68 0c 00 00 00       	pushq  $0xc
     f5b:	e9 20 ff ff ff       	jmpq   e80 <.plt>

0000000000000f60 <__memmove_chk@plt>:
     f60:	ff 25 02 30 20 00    	jmpq   *0x203002(%rip)        # 203f68 <__memmove_chk@GLIBC_2.3.4>
     f66:	68 0d 00 00 00       	pushq  $0xd
     f6b:	e9 10 ff ff ff       	jmpq   e80 <.plt>

0000000000000f70 <strtol@plt>:
     f70:	ff 25 fa 2f 20 00    	jmpq   *0x202ffa(%rip)        # 203f70 <strtol@GLIBC_2.2.5>
     f76:	68 0e 00 00 00       	pushq  $0xe
     f7b:	e9 00 ff ff ff       	jmpq   e80 <.plt>

0000000000000f80 <fflush@plt>:
     f80:	ff 25 f2 2f 20 00    	jmpq   *0x202ff2(%rip)        # 203f78 <fflush@GLIBC_2.2.5>
     f86:	68 0f 00 00 00       	pushq  $0xf
     f8b:	e9 f0 fe ff ff       	jmpq   e80 <.plt>

0000000000000f90 <__isoc99_sscanf@plt>:
     f90:	ff 25 ea 2f 20 00    	jmpq   *0x202fea(%rip)        # 203f80 <__isoc99_sscanf@GLIBC_2.7>
     f96:	68 10 00 00 00       	pushq  $0x10
     f9b:	e9 e0 fe ff ff       	jmpq   e80 <.plt>

0000000000000fa0 <__printf_chk@plt>:
     fa0:	ff 25 e2 2f 20 00    	jmpq   *0x202fe2(%rip)        # 203f88 <__printf_chk@GLIBC_2.3.4>
     fa6:	68 11 00 00 00       	pushq  $0x11
     fab:	e9 d0 fe ff ff       	jmpq   e80 <.plt>

0000000000000fb0 <fopen@plt>:
     fb0:	ff 25 da 2f 20 00    	jmpq   *0x202fda(%rip)        # 203f90 <fopen@GLIBC_2.2.5>
     fb6:	68 12 00 00 00       	pushq  $0x12
     fbb:	e9 c0 fe ff ff       	jmpq   e80 <.plt>

0000000000000fc0 <gethostname@plt>:
     fc0:	ff 25 d2 2f 20 00    	jmpq   *0x202fd2(%rip)        # 203f98 <gethostname@GLIBC_2.2.5>
     fc6:	68 13 00 00 00       	pushq  $0x13
     fcb:	e9 b0 fe ff ff       	jmpq   e80 <.plt>

0000000000000fd0 <exit@plt>:
     fd0:	ff 25 ca 2f 20 00    	jmpq   *0x202fca(%rip)        # 203fa0 <exit@GLIBC_2.2.5>
     fd6:	68 14 00 00 00       	pushq  $0x14
     fdb:	e9 a0 fe ff ff       	jmpq   e80 <.plt>

0000000000000fe0 <connect@plt>:
     fe0:	ff 25 c2 2f 20 00    	jmpq   *0x202fc2(%rip)        # 203fa8 <connect@GLIBC_2.2.5>
     fe6:	68 15 00 00 00       	pushq  $0x15
     feb:	e9 90 fe ff ff       	jmpq   e80 <.plt>

0000000000000ff0 <__fprintf_chk@plt>:
     ff0:	ff 25 ba 2f 20 00    	jmpq   *0x202fba(%rip)        # 203fb0 <__fprintf_chk@GLIBC_2.3.4>
     ff6:	68 16 00 00 00       	pushq  $0x16
     ffb:	e9 80 fe ff ff       	jmpq   e80 <.plt>

0000000000001000 <sleep@plt>:
    1000:	ff 25 b2 2f 20 00    	jmpq   *0x202fb2(%rip)        # 203fb8 <sleep@GLIBC_2.2.5>
    1006:	68 17 00 00 00       	pushq  $0x17
    100b:	e9 70 fe ff ff       	jmpq   e80 <.plt>

0000000000001010 <__ctype_b_loc@plt>:
    1010:	ff 25 aa 2f 20 00    	jmpq   *0x202faa(%rip)        # 203fc0 <__ctype_b_loc@GLIBC_2.3>
    1016:	68 18 00 00 00       	pushq  $0x18
    101b:	e9 60 fe ff ff       	jmpq   e80 <.plt>

0000000000001020 <__sprintf_chk@plt>:
    1020:	ff 25 a2 2f 20 00    	jmpq   *0x202fa2(%rip)        # 203fc8 <__sprintf_chk@GLIBC_2.3.4>
    1026:	68 19 00 00 00       	pushq  $0x19
    102b:	e9 50 fe ff ff       	jmpq   e80 <.plt>

0000000000001030 <socket@plt>:
    1030:	ff 25 9a 2f 20 00    	jmpq   *0x202f9a(%rip)        # 203fd0 <socket@GLIBC_2.2.5>
    1036:	68 1a 00 00 00       	pushq  $0x1a
    103b:	e9 40 fe ff ff       	jmpq   e80 <.plt>

Disassembly of section .plt.got:

0000000000001040 <__cxa_finalize@plt>:
    1040:	ff 25 b2 2f 20 00    	jmpq   *0x202fb2(%rip)        # 203ff8 <__cxa_finalize@GLIBC_2.2.5>
    1046:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000001050 <_start>:
    1050:	31 ed                	xor    %ebp,%ebp
    1052:	49 89 d1             	mov    %rdx,%r9
    1055:	5e                   	pop    %rsi
    1056:	48 89 e2             	mov    %rsp,%rdx
    1059:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    105d:	50                   	push   %rax
    105e:	54                   	push   %rsp
    105f:	4c 8d 05 aa 19 00 00 	lea    0x19aa(%rip),%r8        # 2a10 <__libc_csu_fini>
    1066:	48 8d 0d 33 19 00 00 	lea    0x1933(%rip),%rcx        # 29a0 <__libc_csu_init>
    106d:	48 8d 3d e6 00 00 00 	lea    0xe6(%rip),%rdi        # 115a <main>
    1074:	ff 15 66 2f 20 00    	callq  *0x202f66(%rip)        # 203fe0 <__libc_start_main@GLIBC_2.2.5>
    107a:	f4                   	hlt    
    107b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001080 <deregister_tm_clones>:
    1080:	48 8d 3d f9 35 20 00 	lea    0x2035f9(%rip),%rdi        # 204680 <stdout@@GLIBC_2.2.5>
    1087:	55                   	push   %rbp
    1088:	48 8d 05 f1 35 20 00 	lea    0x2035f1(%rip),%rax        # 204680 <stdout@@GLIBC_2.2.5>
    108f:	48 39 f8             	cmp    %rdi,%rax
    1092:	48 89 e5             	mov    %rsp,%rbp
    1095:	74 19                	je     10b0 <deregister_tm_clones+0x30>
    1097:	48 8b 05 3a 2f 20 00 	mov    0x202f3a(%rip),%rax        # 203fd8 <_ITM_deregisterTMCloneTable>
    109e:	48 85 c0             	test   %rax,%rax
    10a1:	74 0d                	je     10b0 <deregister_tm_clones+0x30>
    10a3:	5d                   	pop    %rbp
    10a4:	ff e0                	jmpq   *%rax
    10a6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    10ad:	00 00 00 
    10b0:	5d                   	pop    %rbp
    10b1:	c3                   	retq   
    10b2:	0f 1f 40 00          	nopl   0x0(%rax)
    10b6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    10bd:	00 00 00 

00000000000010c0 <register_tm_clones>:
    10c0:	48 8d 3d b9 35 20 00 	lea    0x2035b9(%rip),%rdi        # 204680 <stdout@@GLIBC_2.2.5>
    10c7:	48 8d 35 b2 35 20 00 	lea    0x2035b2(%rip),%rsi        # 204680 <stdout@@GLIBC_2.2.5>
    10ce:	55                   	push   %rbp
    10cf:	48 29 fe             	sub    %rdi,%rsi
    10d2:	48 89 e5             	mov    %rsp,%rbp
    10d5:	48 c1 fe 03          	sar    $0x3,%rsi
    10d9:	48 89 f0             	mov    %rsi,%rax
    10dc:	48 c1 e8 3f          	shr    $0x3f,%rax
    10e0:	48 01 c6             	add    %rax,%rsi
    10e3:	48 d1 fe             	sar    %rsi
    10e6:	74 18                	je     1100 <register_tm_clones+0x40>
    10e8:	48 8b 05 01 2f 20 00 	mov    0x202f01(%rip),%rax        # 203ff0 <_ITM_registerTMCloneTable>
    10ef:	48 85 c0             	test   %rax,%rax
    10f2:	74 0c                	je     1100 <register_tm_clones+0x40>
    10f4:	5d                   	pop    %rbp
    10f5:	ff e0                	jmpq   *%rax
    10f7:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
    10fe:	00 00 
    1100:	5d                   	pop    %rbp
    1101:	c3                   	retq   
    1102:	0f 1f 40 00          	nopl   0x0(%rax)
    1106:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    110d:	00 00 00 

0000000000001110 <__do_global_dtors_aux>:
    1110:	80 3d 91 35 20 00 00 	cmpb   $0x0,0x203591(%rip)        # 2046a8 <completed.7697>
    1117:	75 2f                	jne    1148 <__do_global_dtors_aux+0x38>
    1119:	48 83 3d d7 2e 20 00 	cmpq   $0x0,0x202ed7(%rip)        # 203ff8 <__cxa_finalize@GLIBC_2.2.5>
    1120:	00 
    1121:	55                   	push   %rbp
    1122:	48 89 e5             	mov    %rsp,%rbp
    1125:	74 0c                	je     1133 <__do_global_dtors_aux+0x23>
    1127:	48 8b 3d da 2e 20 00 	mov    0x202eda(%rip),%rdi        # 204008 <__dso_handle>
    112e:	e8 0d ff ff ff       	callq  1040 <__cxa_finalize@plt>
    1133:	e8 48 ff ff ff       	callq  1080 <deregister_tm_clones>
    1138:	c6 05 69 35 20 00 01 	movb   $0x1,0x203569(%rip)        # 2046a8 <completed.7697>
    113f:	5d                   	pop    %rbp
    1140:	c3                   	retq   
    1141:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1148:	f3 c3                	repz retq 
    114a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000001150 <frame_dummy>:
    1150:	55                   	push   %rbp
    1151:	48 89 e5             	mov    %rsp,%rbp
    1154:	5d                   	pop    %rbp
    1155:	e9 66 ff ff ff       	jmpq   10c0 <register_tm_clones>

000000000000115a <main>:
    115a:	53                   	push   %rbx
    115b:	83 ff 01             	cmp    $0x1,%edi
    115e:	0f 84 f8 00 00 00    	je     125c <main+0x102>
    1164:	48 89 f3             	mov    %rsi,%rbx
    1167:	83 ff 02             	cmp    $0x2,%edi
    116a:	0f 85 21 01 00 00    	jne    1291 <main+0x137>
    1170:	48 8b 7e 08          	mov    0x8(%rsi),%rdi
    1174:	48 8d 35 e5 1e 00 00 	lea    0x1ee5(%rip),%rsi        # 3060 <array.3418+0x460>
    117b:	e8 30 fe ff ff       	callq  fb0 <fopen@plt>
    1180:	48 89 05 29 35 20 00 	mov    %rax,0x203529(%rip)        # 2046b0 <infile>
    1187:	48 85 c0             	test   %rax,%rax
    118a:	0f 84 df 00 00 00    	je     126f <main+0x115>
    1190:	e8 13 07 00 00       	callq  18a8 <initialize_bomb>
    1195:	48 8d 3d 0c 19 00 00 	lea    0x190c(%rip),%rdi        # 2aa8 <_IO_stdin_used+0x88>
    119c:	e8 2f fd ff ff       	callq  ed0 <puts@plt>
    11a1:	48 8d 3d 40 19 00 00 	lea    0x1940(%rip),%rdi        # 2ae8 <_IO_stdin_used+0xc8>
    11a8:	e8 23 fd ff ff       	callq  ed0 <puts@plt>
    11ad:	e8 10 0a 00 00       	callq  1bc2 <read_line>
    11b2:	48 89 c7             	mov    %rax,%rdi
    11b5:	e8 fa 00 00 00       	callq  12b4 <phase_1>
    11ba:	e8 47 0b 00 00       	callq  1d06 <phase_defused>
    11bf:	48 8d 3d 52 19 00 00 	lea    0x1952(%rip),%rdi        # 2b18 <_IO_stdin_used+0xf8>
    11c6:	e8 05 fd ff ff       	callq  ed0 <puts@plt>
    11cb:	e8 f2 09 00 00       	callq  1bc2 <read_line>
    11d0:	48 89 c7             	mov    %rax,%rdi
    11d3:	e8 fc 00 00 00       	callq  12d4 <phase_2>
    11d8:	e8 29 0b 00 00       	callq  1d06 <phase_defused>
    11dd:	48 8d 3d 77 18 00 00 	lea    0x1877(%rip),%rdi        # 2a5b <_IO_stdin_used+0x3b>
    11e4:	e8 e7 fc ff ff       	callq  ed0 <puts@plt>
    11e9:	e8 d4 09 00 00       	callq  1bc2 <read_line>
    11ee:	48 89 c7             	mov    %rax,%rdi
    11f1:	e8 47 01 00 00       	callq  133d <phase_3>
    11f6:	e8 0b 0b 00 00       	callq  1d06 <phase_defused>
    11fb:	48 8d 3d 77 18 00 00 	lea    0x1877(%rip),%rdi        # 2a79 <_IO_stdin_used+0x59>
    1202:	e8 c9 fc ff ff       	callq  ed0 <puts@plt>
    1207:	e8 b6 09 00 00       	callq  1bc2 <read_line>
    120c:	48 89 c7             	mov    %rax,%rdi
    120f:	e8 cd 02 00 00       	callq  14e1 <phase_4>
    1214:	e8 ed 0a 00 00       	callq  1d06 <phase_defused>
    1219:	48 8d 3d 28 19 00 00 	lea    0x1928(%rip),%rdi        # 2b48 <_IO_stdin_used+0x128>
    1220:	e8 ab fc ff ff       	callq  ed0 <puts@plt>
    1225:	e8 98 09 00 00       	callq  1bc2 <read_line>
    122a:	48 89 c7             	mov    %rax,%rdi
    122d:	e8 24 03 00 00       	callq  1556 <phase_5>
    1232:	e8 cf 0a 00 00       	callq  1d06 <phase_defused>
    1237:	48 8d 3d 4a 18 00 00 	lea    0x184a(%rip),%rdi        # 2a88 <_IO_stdin_used+0x68>
    123e:	e8 8d fc ff ff       	callq  ed0 <puts@plt>
    1243:	e8 7a 09 00 00       	callq  1bc2 <read_line>
    1248:	48 89 c7             	mov    %rax,%rdi
    124b:	e8 99 03 00 00       	callq  15e9 <phase_6>
    1250:	e8 b1 0a 00 00       	callq  1d06 <phase_defused>
    1255:	b8 00 00 00 00       	mov    $0x0,%eax
    125a:	5b                   	pop    %rbx
    125b:	c3                   	retq   
    125c:	48 8b 05 2d 34 20 00 	mov    0x20342d(%rip),%rax        # 204690 <stdin@@GLIBC_2.2.5>
    1263:	48 89 05 46 34 20 00 	mov    %rax,0x203446(%rip)        # 2046b0 <infile>
    126a:	e9 21 ff ff ff       	jmpq   1190 <main+0x36>
    126f:	48 8b 4b 08          	mov    0x8(%rbx),%rcx
    1273:	48 8b 13             	mov    (%rbx),%rdx
    1276:	48 8d 35 a7 17 00 00 	lea    0x17a7(%rip),%rsi        # 2a24 <_IO_stdin_used+0x4>
    127d:	bf 01 00 00 00       	mov    $0x1,%edi
    1282:	e8 19 fd ff ff       	callq  fa0 <__printf_chk@plt>
    1287:	bf 08 00 00 00       	mov    $0x8,%edi
    128c:	e8 3f fd ff ff       	callq  fd0 <exit@plt>
    1291:	48 8b 16             	mov    (%rsi),%rdx
    1294:	48 8d 35 a6 17 00 00 	lea    0x17a6(%rip),%rsi        # 2a41 <_IO_stdin_used+0x21>
    129b:	bf 01 00 00 00       	mov    $0x1,%edi
    12a0:	b8 00 00 00 00       	mov    $0x0,%eax
    12a5:	e8 f6 fc ff ff       	callq  fa0 <__printf_chk@plt>
    12aa:	bf 08 00 00 00       	mov    $0x8,%edi
    12af:	e8 1c fd ff ff       	callq  fd0 <exit@plt>

00000000000012b4 <phase_1>:
    12b4:	48 83 ec 08          	sub    $0x8,%rsp
    12b8:	48 8d 35 b1 18 00 00 	lea    0x18b1(%rip),%rsi        # 2b70 <_IO_stdin_used+0x150>
    12bf:	e8 7d 05 00 00       	callq  1841 <strings_not_equal>
    12c4:	85 c0                	test   %eax,%eax
    12c6:	75 05                	jne    12cd <phase_1+0x19>
    12c8:	48 83 c4 08          	add    $0x8,%rsp
    12cc:	c3                   	retq   
    12cd:	e8 73 08 00 00       	callq  1b45 <explode_bomb>
    12d2:	eb f4                	jmp    12c8 <phase_1+0x14>

00000000000012d4 <phase_2>:
    12d4:	55                   	push   %rbp
    12d5:	53                   	push   %rbx
    12d6:	48 83 ec 28          	sub    $0x28,%rsp
    12da:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    12e1:	00 00 
    12e3:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    12e8:	31 c0                	xor    %eax,%eax
    12ea:	48 89 e6             	mov    %rsp,%rsi
    12ed:	e8 8f 08 00 00       	callq  1b81 <read_six_numbers>
    12f2:	83 3c 24 01          	cmpl   $0x1,(%rsp)
    12f6:	75 09                	jne    1301 <phase_2+0x2d>
    12f8:	48 89 e3             	mov    %rsp,%rbx
    12fb:	48 8d 6b 14          	lea    0x14(%rbx),%rbp
    12ff:	eb 10                	jmp    1311 <phase_2+0x3d>
    1301:	e8 3f 08 00 00       	callq  1b45 <explode_bomb>
    1306:	eb f0                	jmp    12f8 <phase_2+0x24>
    1308:	48 83 c3 04          	add    $0x4,%rbx
    130c:	48 39 eb             	cmp    %rbp,%rbx
    130f:	74 10                	je     1321 <phase_2+0x4d>
    1311:	8b 03                	mov    (%rbx),%eax
    1313:	01 c0                	add    %eax,%eax
    1315:	39 43 04             	cmp    %eax,0x4(%rbx)
    1318:	74 ee                	je     1308 <phase_2+0x34>
    131a:	e8 26 08 00 00       	callq  1b45 <explode_bomb>
    131f:	eb e7                	jmp    1308 <phase_2+0x34>
    1321:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    1326:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    132d:	00 00 
    132f:	75 07                	jne    1338 <phase_2+0x64>
    1331:	48 83 c4 28          	add    $0x28,%rsp
    1335:	5b                   	pop    %rbx
    1336:	5d                   	pop    %rbp
    1337:	c3                   	retq   
    1338:	e8 b3 fb ff ff       	callq  ef0 <__stack_chk_fail@plt>

000000000000133d <phase_3>:
    133d:	48 83 ec 28          	sub    $0x28,%rsp
    1341:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1348:	00 00 
    134a:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    134f:	31 c0                	xor    %eax,%eax
    1351:	48 8d 4c 24 0f       	lea    0xf(%rsp),%rcx
    1356:	48 8d 54 24 10       	lea    0x10(%rsp),%rdx
    135b:	4c 8d 44 24 14       	lea    0x14(%rsp),%r8
    1360:	48 8d 35 5f 18 00 00 	lea    0x185f(%rip),%rsi        # 2bc6 <_IO_stdin_used+0x1a6>
    1367:	e8 24 fc ff ff       	callq  f90 <__isoc99_sscanf@plt>
    136c:	83 f8 02             	cmp    $0x2,%eax
    136f:	7e 1f                	jle    1390 <phase_3+0x53>
    1371:	83 7c 24 10 07       	cmpl   $0x7,0x10(%rsp)
    1376:	0f 87 02 01 00 00    	ja     147e <phase_3+0x141>
    137c:	8b 44 24 10          	mov    0x10(%rsp),%eax
    1380:	48 8d 15 59 18 00 00 	lea    0x1859(%rip),%rdx        # 2be0 <_IO_stdin_used+0x1c0>
    1387:	48 63 04 82          	movslq (%rdx,%rax,4),%rax
    138b:	48 01 d0             	add    %rdx,%rax
    138e:	ff e0                	jmpq   *%rax
    1390:	e8 b0 07 00 00       	callq  1b45 <explode_bomb>
    1395:	eb da                	jmp    1371 <phase_3+0x34>
    1397:	b8 63 00 00 00       	mov    $0x63,%eax
    139c:	81 7c 24 14 97 02 00 	cmpl   $0x297,0x14(%rsp)
    13a3:	00 
    13a4:	0f 84 de 00 00 00    	je     1488 <phase_3+0x14b>
    13aa:	e8 96 07 00 00       	callq  1b45 <explode_bomb>
    13af:	b8 63 00 00 00       	mov    $0x63,%eax
    13b4:	e9 cf 00 00 00       	jmpq   1488 <phase_3+0x14b>
    13b9:	b8 73 00 00 00       	mov    $0x73,%eax
    13be:	81 7c 24 14 2c 01 00 	cmpl   $0x12c,0x14(%rsp)
    13c5:	00 
    13c6:	0f 84 bc 00 00 00    	je     1488 <phase_3+0x14b>
    13cc:	e8 74 07 00 00       	callq  1b45 <explode_bomb>
    13d1:	b8 73 00 00 00       	mov    $0x73,%eax
    13d6:	e9 ad 00 00 00       	jmpq   1488 <phase_3+0x14b>
    13db:	b8 74 00 00 00       	mov    $0x74,%eax
    13e0:	81 7c 24 14 68 02 00 	cmpl   $0x268,0x14(%rsp)
    13e7:	00 
    13e8:	0f 84 9a 00 00 00    	je     1488 <phase_3+0x14b>
    13ee:	e8 52 07 00 00       	callq  1b45 <explode_bomb>
    13f3:	b8 74 00 00 00       	mov    $0x74,%eax
    13f8:	e9 8b 00 00 00       	jmpq   1488 <phase_3+0x14b>
    13fd:	b8 78 00 00 00       	mov    $0x78,%eax
    1402:	81 7c 24 14 9a 01 00 	cmpl   $0x19a,0x14(%rsp)
    1409:	00 
    140a:	74 7c                	je     1488 <phase_3+0x14b>
    140c:	e8 34 07 00 00       	callq  1b45 <explode_bomb>
    1411:	b8 78 00 00 00       	mov    $0x78,%eax
    1416:	eb 70                	jmp    1488 <phase_3+0x14b>
    1418:	b8 71 00 00 00       	mov    $0x71,%eax
    141d:	81 7c 24 14 3e 02 00 	cmpl   $0x23e,0x14(%rsp)
    1424:	00 
    1425:	74 61                	je     1488 <phase_3+0x14b>
    1427:	e8 19 07 00 00       	callq  1b45 <explode_bomb>
    142c:	b8 71 00 00 00       	mov    $0x71,%eax
    1431:	eb 55                	jmp    1488 <phase_3+0x14b>
    1433:	b8 74 00 00 00       	mov    $0x74,%eax
    1438:	83 7c 24 14 72       	cmpl   $0x72,0x14(%rsp)
    143d:	74 49                	je     1488 <phase_3+0x14b>
    143f:	e8 01 07 00 00       	callq  1b45 <explode_bomb>
    1444:	b8 74 00 00 00       	mov    $0x74,%eax
    1449:	eb 3d                	jmp    1488 <phase_3+0x14b>
    144b:	b8 77 00 00 00       	mov    $0x77,%eax
    1450:	83 7c 24 14 54       	cmpl   $0x54,0x14(%rsp)
    1455:	74 31                	je     1488 <phase_3+0x14b>
    1457:	e8 e9 06 00 00       	callq  1b45 <explode_bomb>
    145c:	b8 77 00 00 00       	mov    $0x77,%eax
    1461:	eb 25                	jmp    1488 <phase_3+0x14b>
    1463:	b8 70 00 00 00       	mov    $0x70,%eax
    1468:	81 7c 24 14 96 02 00 	cmpl   $0x296,0x14(%rsp)
    146f:	00 
    1470:	74 16                	je     1488 <phase_3+0x14b>
    1472:	e8 ce 06 00 00       	callq  1b45 <explode_bomb>
    1477:	b8 70 00 00 00       	mov    $0x70,%eax
    147c:	eb 0a                	jmp    1488 <phase_3+0x14b>
    147e:	e8 c2 06 00 00       	callq  1b45 <explode_bomb>
    1483:	b8 65 00 00 00       	mov    $0x65,%eax
    1488:	38 44 24 0f          	cmp    %al,0xf(%rsp)
    148c:	74 05                	je     1493 <phase_3+0x156>
    148e:	e8 b2 06 00 00       	callq  1b45 <explode_bomb>
    1493:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    1498:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    149f:	00 00 
    14a1:	75 05                	jne    14a8 <phase_3+0x16b>
    14a3:	48 83 c4 28          	add    $0x28,%rsp
    14a7:	c3                   	retq   
    14a8:	e8 43 fa ff ff       	callq  ef0 <__stack_chk_fail@plt>

00000000000014ad <func4>:
    14ad:	53                   	push   %rbx
    14ae:	89 d0                	mov    %edx,%eax
    14b0:	29 f0                	sub    %esi,%eax
    14b2:	89 c3                	mov    %eax,%ebx
    14b4:	c1 eb 1f             	shr    $0x1f,%ebx
    14b7:	01 c3                	add    %eax,%ebx
    14b9:	d1 fb                	sar    %ebx
    14bb:	01 f3                	add    %esi,%ebx
    14bd:	39 fb                	cmp    %edi,%ebx
    14bf:	7f 08                	jg     14c9 <func4+0x1c>
    14c1:	39 fb                	cmp    %edi,%ebx
    14c3:	7c 10                	jl     14d5 <func4+0x28>
    14c5:	89 d8                	mov    %ebx,%eax
    14c7:	5b                   	pop    %rbx
    14c8:	c3                   	retq   
    14c9:	8d 53 ff             	lea    -0x1(%rbx),%edx
    14cc:	e8 dc ff ff ff       	callq  14ad <func4>
    14d1:	01 c3                	add    %eax,%ebx
    14d3:	eb f0                	jmp    14c5 <func4+0x18>
    14d5:	8d 73 01             	lea    0x1(%rbx),%esi
    14d8:	e8 d0 ff ff ff       	callq  14ad <func4>
    14dd:	01 c3                	add    %eax,%ebx
    14df:	eb e4                	jmp    14c5 <func4+0x18>

00000000000014e1 <phase_4>:
    14e1:	48 83 ec 18          	sub    $0x18,%rsp
    14e5:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    14ec:	00 00 
    14ee:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    14f3:	31 c0                	xor    %eax,%eax
    14f5:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
    14fa:	48 89 e2             	mov    %rsp,%rdx
    14fd:	48 8d 35 89 19 00 00 	lea    0x1989(%rip),%rsi        # 2e8d <array.3418+0x28d>
    1504:	e8 87 fa ff ff       	callq  f90 <__isoc99_sscanf@plt>
    1509:	83 f8 02             	cmp    $0x2,%eax
    150c:	75 06                	jne    1514 <phase_4+0x33>
    150e:	83 3c 24 0e          	cmpl   $0xe,(%rsp)
    1512:	76 05                	jbe    1519 <phase_4+0x38>
    1514:	e8 2c 06 00 00       	callq  1b45 <explode_bomb>
    1519:	ba 0e 00 00 00       	mov    $0xe,%edx
    151e:	be 00 00 00 00       	mov    $0x0,%esi
    1523:	8b 3c 24             	mov    (%rsp),%edi
    1526:	e8 82 ff ff ff       	callq  14ad <func4>
    152b:	83 f8 0a             	cmp    $0xa,%eax
    152e:	75 07                	jne    1537 <phase_4+0x56>
    1530:	83 7c 24 04 0a       	cmpl   $0xa,0x4(%rsp)
    1535:	74 05                	je     153c <phase_4+0x5b>
    1537:	e8 09 06 00 00       	callq  1b45 <explode_bomb>
    153c:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    1541:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    1548:	00 00 
    154a:	75 05                	jne    1551 <phase_4+0x70>
    154c:	48 83 c4 18          	add    $0x18,%rsp
    1550:	c3                   	retq   
    1551:	e8 9a f9 ff ff       	callq  ef0 <__stack_chk_fail@plt>

0000000000001556 <phase_5>:
    1556:	48 83 ec 18          	sub    $0x18,%rsp
    155a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1561:	00 00 
    1563:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    1568:	31 c0                	xor    %eax,%eax
    156a:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
    156f:	48 89 e2             	mov    %rsp,%rdx
    1572:	48 8d 35 14 19 00 00 	lea    0x1914(%rip),%rsi        # 2e8d <array.3418+0x28d>
    1579:	e8 12 fa ff ff       	callq  f90 <__isoc99_sscanf@plt>
    157e:	83 f8 01             	cmp    $0x1,%eax
    1581:	7e 5a                	jle    15dd <phase_5+0x87>
    1583:	8b 04 24             	mov    (%rsp),%eax
    1586:	83 e0 0f             	and    $0xf,%eax
    1589:	89 04 24             	mov    %eax,(%rsp)
    158c:	83 f8 0f             	cmp    $0xf,%eax
    158f:	74 32                	je     15c3 <phase_5+0x6d>
    1591:	b9 00 00 00 00       	mov    $0x0,%ecx
    1596:	ba 00 00 00 00       	mov    $0x0,%edx
    159b:	48 8d 35 5e 16 00 00 	lea    0x165e(%rip),%rsi        # 2c00 <array.3418>
    15a2:	83 c2 01             	add    $0x1,%edx
    15a5:	48 98                	cltq   
    15a7:	8b 04 86             	mov    (%rsi,%rax,4),%eax
    15aa:	01 c1                	add    %eax,%ecx
    15ac:	83 f8 0f             	cmp    $0xf,%eax
    15af:	75 f1                	jne    15a2 <phase_5+0x4c>
    15b1:	c7 04 24 0f 00 00 00 	movl   $0xf,(%rsp)
    15b8:	83 fa 0f             	cmp    $0xf,%edx
    15bb:	75 06                	jne    15c3 <phase_5+0x6d>
    15bd:	39 4c 24 04          	cmp    %ecx,0x4(%rsp)
    15c1:	74 05                	je     15c8 <phase_5+0x72>
    15c3:	e8 7d 05 00 00       	callq  1b45 <explode_bomb>
    15c8:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    15cd:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    15d4:	00 00 
    15d6:	75 0c                	jne    15e4 <phase_5+0x8e>
    15d8:	48 83 c4 18          	add    $0x18,%rsp
    15dc:	c3                   	retq   
    15dd:	e8 63 05 00 00       	callq  1b45 <explode_bomb>
    15e2:	eb 9f                	jmp    1583 <phase_5+0x2d>
    15e4:	e8 07 f9 ff ff       	callq  ef0 <__stack_chk_fail@plt>

00000000000015e9 <phase_6>:
    15e9:	41 55                	push   %r13
    15eb:	41 54                	push   %r12
    15ed:	55                   	push   %rbp
    15ee:	53                   	push   %rbx
    15ef:	48 83 ec 68          	sub    $0x68,%rsp
    15f3:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    15fa:	00 00 
    15fc:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    1601:	31 c0                	xor    %eax,%eax
    1603:	49 89 e4             	mov    %rsp,%r12
    1606:	4c 89 e6             	mov    %r12,%rsi
    1609:	e8 73 05 00 00       	callq  1b81 <read_six_numbers>
    160e:	41 bd 00 00 00 00    	mov    $0x0,%r13d
    1614:	eb 25                	jmp    163b <phase_6+0x52>
    1616:	e8 2a 05 00 00       	callq  1b45 <explode_bomb>
    161b:	eb 2d                	jmp    164a <phase_6+0x61>
    161d:	83 c3 01             	add    $0x1,%ebx
    1620:	83 fb 05             	cmp    $0x5,%ebx
    1623:	7f 12                	jg     1637 <phase_6+0x4e>
    1625:	48 63 c3             	movslq %ebx,%rax
    1628:	8b 04 84             	mov    (%rsp,%rax,4),%eax
    162b:	39 45 00             	cmp    %eax,0x0(%rbp)
    162e:	75 ed                	jne    161d <phase_6+0x34>
    1630:	e8 10 05 00 00       	callq  1b45 <explode_bomb>
    1635:	eb e6                	jmp    161d <phase_6+0x34>
    1637:	49 83 c4 04          	add    $0x4,%r12
    163b:	4c 89 e5             	mov    %r12,%rbp
    163e:	41 8b 04 24          	mov    (%r12),%eax
    1642:	83 e8 01             	sub    $0x1,%eax
    1645:	83 f8 05             	cmp    $0x5,%eax
    1648:	77 cc                	ja     1616 <phase_6+0x2d>
    164a:	41 83 c5 01          	add    $0x1,%r13d
    164e:	41 83 fd 06          	cmp    $0x6,%r13d
    1652:	74 35                	je     1689 <phase_6+0xa0>
    1654:	44 89 eb             	mov    %r13d,%ebx
    1657:	eb cc                	jmp    1625 <phase_6+0x3c>
    1659:	48 8b 52 08          	mov    0x8(%rdx),%rdx
    165d:	83 c0 01             	add    $0x1,%eax
    1660:	39 c8                	cmp    %ecx,%eax
    1662:	75 f5                	jne    1659 <phase_6+0x70>
    1664:	48 89 54 f4 20       	mov    %rdx,0x20(%rsp,%rsi,8)
    1669:	48 83 c6 01          	add    $0x1,%rsi
    166d:	48 83 fe 06          	cmp    $0x6,%rsi
    1671:	74 1d                	je     1690 <phase_6+0xa7>
    1673:	8b 0c b4             	mov    (%rsp,%rsi,4),%ecx
    1676:	b8 01 00 00 00       	mov    $0x1,%eax
    167b:	48 8d 15 ae 2b 20 00 	lea    0x202bae(%rip),%rdx        # 204230 <node1>
    1682:	83 f9 01             	cmp    $0x1,%ecx
    1685:	7f d2                	jg     1659 <phase_6+0x70>
    1687:	eb db                	jmp    1664 <phase_6+0x7b>
    1689:	be 00 00 00 00       	mov    $0x0,%esi
    168e:	eb e3                	jmp    1673 <phase_6+0x8a>
    1690:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
    1695:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    169a:	48 89 43 08          	mov    %rax,0x8(%rbx)
    169e:	48 8b 54 24 30       	mov    0x30(%rsp),%rdx
    16a3:	48 89 50 08          	mov    %rdx,0x8(%rax)
    16a7:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    16ac:	48 89 42 08          	mov    %rax,0x8(%rdx)
    16b0:	48 8b 54 24 40       	mov    0x40(%rsp),%rdx
    16b5:	48 89 50 08          	mov    %rdx,0x8(%rax)
    16b9:	48 8b 44 24 48       	mov    0x48(%rsp),%rax
    16be:	48 89 42 08          	mov    %rax,0x8(%rdx)
    16c2:	48 c7 40 08 00 00 00 	movq   $0x0,0x8(%rax)
    16c9:	00 
    16ca:	bd 05 00 00 00       	mov    $0x5,%ebp
    16cf:	eb 09                	jmp    16da <phase_6+0xf1>
    16d1:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    16d5:	83 ed 01             	sub    $0x1,%ebp
    16d8:	74 11                	je     16eb <phase_6+0x102>
    16da:	48 8b 43 08          	mov    0x8(%rbx),%rax
    16de:	8b 00                	mov    (%rax),%eax
    16e0:	39 03                	cmp    %eax,(%rbx)
    16e2:	7e ed                	jle    16d1 <phase_6+0xe8>
    16e4:	e8 5c 04 00 00       	callq  1b45 <explode_bomb>
    16e9:	eb e6                	jmp    16d1 <phase_6+0xe8>
    16eb:	48 8b 44 24 58       	mov    0x58(%rsp),%rax
    16f0:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    16f7:	00 00 
    16f9:	75 0b                	jne    1706 <phase_6+0x11d>
    16fb:	48 83 c4 68          	add    $0x68,%rsp
    16ff:	5b                   	pop    %rbx
    1700:	5d                   	pop    %rbp
    1701:	41 5c                	pop    %r12
    1703:	41 5d                	pop    %r13
    1705:	c3                   	retq   
    1706:	e8 e5 f7 ff ff       	callq  ef0 <__stack_chk_fail@plt>

000000000000170b <fun7>:
    170b:	48 85 ff             	test   %rdi,%rdi
    170e:	74 34                	je     1744 <fun7+0x39>
    1710:	48 83 ec 08          	sub    $0x8,%rsp
    1714:	8b 17                	mov    (%rdi),%edx
    1716:	39 f2                	cmp    %esi,%edx
    1718:	7f 0e                	jg     1728 <fun7+0x1d>
    171a:	b8 00 00 00 00       	mov    $0x0,%eax
    171f:	39 f2                	cmp    %esi,%edx
    1721:	75 12                	jne    1735 <fun7+0x2a>
    1723:	48 83 c4 08          	add    $0x8,%rsp
    1727:	c3                   	retq   
    1728:	48 8b 7f 08          	mov    0x8(%rdi),%rdi
    172c:	e8 da ff ff ff       	callq  170b <fun7>
    1731:	01 c0                	add    %eax,%eax
    1733:	eb ee                	jmp    1723 <fun7+0x18>
    1735:	48 8b 7f 10          	mov    0x10(%rdi),%rdi
    1739:	e8 cd ff ff ff       	callq  170b <fun7>
    173e:	8d 44 00 01          	lea    0x1(%rax,%rax,1),%eax
    1742:	eb df                	jmp    1723 <fun7+0x18>
    1744:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    1749:	c3                   	retq   

000000000000174a <secret_phase>:
    174a:	53                   	push   %rbx
    174b:	e8 72 04 00 00       	callq  1bc2 <read_line>
    1750:	ba 0a 00 00 00       	mov    $0xa,%edx
    1755:	be 00 00 00 00       	mov    $0x0,%esi
    175a:	48 89 c7             	mov    %rax,%rdi
    175d:	e8 0e f8 ff ff       	callq  f70 <strtol@plt>
    1762:	48 89 c3             	mov    %rax,%rbx
    1765:	8d 40 ff             	lea    -0x1(%rax),%eax
    1768:	3d e8 03 00 00       	cmp    $0x3e8,%eax
    176d:	77 2b                	ja     179a <secret_phase+0x50>
    176f:	89 de                	mov    %ebx,%esi
    1771:	48 8d 3d d8 29 20 00 	lea    0x2029d8(%rip),%rdi        # 204150 <n1>
    1778:	e8 8e ff ff ff       	callq  170b <fun7>
    177d:	83 f8 01             	cmp    $0x1,%eax
    1780:	74 05                	je     1787 <secret_phase+0x3d>
    1782:	e8 be 03 00 00       	callq  1b45 <explode_bomb>
    1787:	48 8d 3d 12 14 00 00 	lea    0x1412(%rip),%rdi        # 2ba0 <_IO_stdin_used+0x180>
    178e:	e8 3d f7 ff ff       	callq  ed0 <puts@plt>
    1793:	e8 6e 05 00 00       	callq  1d06 <phase_defused>
    1798:	5b                   	pop    %rbx
    1799:	c3                   	retq   
    179a:	e8 a6 03 00 00       	callq  1b45 <explode_bomb>
    179f:	eb ce                	jmp    176f <secret_phase+0x25>

00000000000017a1 <sig_handler>:
    17a1:	48 83 ec 08          	sub    $0x8,%rsp
    17a5:	48 8d 3d 94 14 00 00 	lea    0x1494(%rip),%rdi        # 2c40 <array.3418+0x40>
    17ac:	e8 1f f7 ff ff       	callq  ed0 <puts@plt>
    17b1:	bf 03 00 00 00       	mov    $0x3,%edi
    17b6:	e8 45 f8 ff ff       	callq  1000 <sleep@plt>
    17bb:	48 8d 35 47 16 00 00 	lea    0x1647(%rip),%rsi        # 2e09 <array.3418+0x209>
    17c2:	bf 01 00 00 00       	mov    $0x1,%edi
    17c7:	b8 00 00 00 00       	mov    $0x0,%eax
    17cc:	e8 cf f7 ff ff       	callq  fa0 <__printf_chk@plt>
    17d1:	48 8b 3d a8 2e 20 00 	mov    0x202ea8(%rip),%rdi        # 204680 <stdout@@GLIBC_2.2.5>
    17d8:	e8 a3 f7 ff ff       	callq  f80 <fflush@plt>
    17dd:	bf 01 00 00 00       	mov    $0x1,%edi
    17e2:	e8 19 f8 ff ff       	callq  1000 <sleep@plt>
    17e7:	48 8d 3d 23 16 00 00 	lea    0x1623(%rip),%rdi        # 2e11 <array.3418+0x211>
    17ee:	e8 dd f6 ff ff       	callq  ed0 <puts@plt>
    17f3:	bf 10 00 00 00       	mov    $0x10,%edi
    17f8:	e8 d3 f7 ff ff       	callq  fd0 <exit@plt>

00000000000017fd <invalid_phase>:
    17fd:	48 83 ec 08          	sub    $0x8,%rsp
    1801:	48 89 fa             	mov    %rdi,%rdx
    1804:	48 8d 35 0e 16 00 00 	lea    0x160e(%rip),%rsi        # 2e19 <array.3418+0x219>
    180b:	bf 01 00 00 00       	mov    $0x1,%edi
    1810:	b8 00 00 00 00       	mov    $0x0,%eax
    1815:	e8 86 f7 ff ff       	callq  fa0 <__printf_chk@plt>
    181a:	bf 08 00 00 00       	mov    $0x8,%edi
    181f:	e8 ac f7 ff ff       	callq  fd0 <exit@plt>

0000000000001824 <string_length>:
    1824:	80 3f 00             	cmpb   $0x0,(%rdi)
    1827:	74 12                	je     183b <string_length+0x17>
    1829:	48 89 fa             	mov    %rdi,%rdx
    182c:	48 83 c2 01          	add    $0x1,%rdx
    1830:	89 d0                	mov    %edx,%eax
    1832:	29 f8                	sub    %edi,%eax
    1834:	80 3a 00             	cmpb   $0x0,(%rdx)
    1837:	75 f3                	jne    182c <string_length+0x8>
    1839:	f3 c3                	repz retq 
    183b:	b8 00 00 00 00       	mov    $0x0,%eax
    1840:	c3                   	retq   

0000000000001841 <strings_not_equal>:
    1841:	41 54                	push   %r12
    1843:	55                   	push   %rbp
    1844:	53                   	push   %rbx
    1845:	48 89 fb             	mov    %rdi,%rbx
    1848:	48 89 f5             	mov    %rsi,%rbp
    184b:	e8 d4 ff ff ff       	callq  1824 <string_length>
    1850:	41 89 c4             	mov    %eax,%r12d
    1853:	48 89 ef             	mov    %rbp,%rdi
    1856:	e8 c9 ff ff ff       	callq  1824 <string_length>
    185b:	ba 01 00 00 00       	mov    $0x1,%edx
    1860:	41 39 c4             	cmp    %eax,%r12d
    1863:	74 07                	je     186c <strings_not_equal+0x2b>
    1865:	89 d0                	mov    %edx,%eax
    1867:	5b                   	pop    %rbx
    1868:	5d                   	pop    %rbp
    1869:	41 5c                	pop    %r12
    186b:	c3                   	retq   
    186c:	0f b6 03             	movzbl (%rbx),%eax
    186f:	84 c0                	test   %al,%al
    1871:	74 27                	je     189a <strings_not_equal+0x59>
    1873:	3a 45 00             	cmp    0x0(%rbp),%al
    1876:	75 29                	jne    18a1 <strings_not_equal+0x60>
    1878:	48 83 c3 01          	add    $0x1,%rbx
    187c:	48 83 c5 01          	add    $0x1,%rbp
    1880:	0f b6 03             	movzbl (%rbx),%eax
    1883:	84 c0                	test   %al,%al
    1885:	74 0c                	je     1893 <strings_not_equal+0x52>
    1887:	38 45 00             	cmp    %al,0x0(%rbp)
    188a:	74 ec                	je     1878 <strings_not_equal+0x37>
    188c:	ba 01 00 00 00       	mov    $0x1,%edx
    1891:	eb d2                	jmp    1865 <strings_not_equal+0x24>
    1893:	ba 00 00 00 00       	mov    $0x0,%edx
    1898:	eb cb                	jmp    1865 <strings_not_equal+0x24>
    189a:	ba 00 00 00 00       	mov    $0x0,%edx
    189f:	eb c4                	jmp    1865 <strings_not_equal+0x24>
    18a1:	ba 01 00 00 00       	mov    $0x1,%edx
    18a6:	eb bd                	jmp    1865 <strings_not_equal+0x24>

00000000000018a8 <initialize_bomb>:
    18a8:	55                   	push   %rbp
    18a9:	53                   	push   %rbx
    18aa:	48 81 ec 58 20 00 00 	sub    $0x2058,%rsp
    18b1:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    18b8:	00 00 
    18ba:	48 89 84 24 48 20 00 	mov    %rax,0x2048(%rsp)
    18c1:	00 
    18c2:	31 c0                	xor    %eax,%eax
    18c4:	48 8d 35 d6 fe ff ff 	lea    -0x12a(%rip),%rsi        # 17a1 <sig_handler>
    18cb:	bf 02 00 00 00       	mov    $0x2,%edi
    18d0:	e8 6b f6 ff ff       	callq  f40 <signal@plt>
    18d5:	48 89 e7             	mov    %rsp,%rdi
    18d8:	be 40 00 00 00       	mov    $0x40,%esi
    18dd:	e8 de f6 ff ff       	callq  fc0 <gethostname@plt>
    18e2:	85 c0                	test   %eax,%eax
    18e4:	75 45                	jne    192b <initialize_bomb+0x83>
    18e6:	48 8b 3d 93 29 20 00 	mov    0x202993(%rip),%rdi        # 204280 <host_table>
    18ed:	48 8d 1d 94 29 20 00 	lea    0x202994(%rip),%rbx        # 204288 <host_table+0x8>
    18f4:	48 89 e5             	mov    %rsp,%rbp
    18f7:	48 85 ff             	test   %rdi,%rdi
    18fa:	74 19                	je     1915 <initialize_bomb+0x6d>
    18fc:	48 89 ee             	mov    %rbp,%rsi
    18ff:	e8 9c f5 ff ff       	callq  ea0 <strcasecmp@plt>
    1904:	85 c0                	test   %eax,%eax
    1906:	74 5e                	je     1966 <initialize_bomb+0xbe>
    1908:	48 83 c3 08          	add    $0x8,%rbx
    190c:	48 8b 7b f8          	mov    -0x8(%rbx),%rdi
    1910:	48 85 ff             	test   %rdi,%rdi
    1913:	75 e7                	jne    18fc <initialize_bomb+0x54>
    1915:	48 8d 3d 94 13 00 00 	lea    0x1394(%rip),%rdi        # 2cb0 <array.3418+0xb0>
    191c:	e8 af f5 ff ff       	callq  ed0 <puts@plt>
    1921:	bf 08 00 00 00       	mov    $0x8,%edi
    1926:	e8 a5 f6 ff ff       	callq  fd0 <exit@plt>
    192b:	48 8d 3d 46 13 00 00 	lea    0x1346(%rip),%rdi        # 2c78 <array.3418+0x78>
    1932:	e8 99 f5 ff ff       	callq  ed0 <puts@plt>
    1937:	bf 08 00 00 00       	mov    $0x8,%edi
    193c:	e8 8f f6 ff ff       	callq  fd0 <exit@plt>
    1941:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
    1946:	48 8d 35 dd 14 00 00 	lea    0x14dd(%rip),%rsi        # 2e2a <array.3418+0x22a>
    194d:	bf 01 00 00 00       	mov    $0x1,%edi
    1952:	b8 00 00 00 00       	mov    $0x0,%eax
    1957:	e8 44 f6 ff ff       	callq  fa0 <__printf_chk@plt>
    195c:	bf 08 00 00 00       	mov    $0x8,%edi
    1961:	e8 6a f6 ff ff       	callq  fd0 <exit@plt>
    1966:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
    196b:	e8 b2 0d 00 00       	callq  2722 <init_driver>
    1970:	85 c0                	test   %eax,%eax
    1972:	78 cd                	js     1941 <initialize_bomb+0x99>
    1974:	48 8b 84 24 48 20 00 	mov    0x2048(%rsp),%rax
    197b:	00 
    197c:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    1983:	00 00 
    1985:	75 0a                	jne    1991 <initialize_bomb+0xe9>
    1987:	48 81 c4 58 20 00 00 	add    $0x2058,%rsp
    198e:	5b                   	pop    %rbx
    198f:	5d                   	pop    %rbp
    1990:	c3                   	retq   
    1991:	e8 5a f5 ff ff       	callq  ef0 <__stack_chk_fail@plt>

0000000000001996 <initialize_bomb_solve>:
    1996:	f3 c3                	repz retq 

0000000000001998 <blank_line>:
    1998:	55                   	push   %rbp
    1999:	53                   	push   %rbx
    199a:	48 83 ec 08          	sub    $0x8,%rsp
    199e:	48 89 fd             	mov    %rdi,%rbp
    19a1:	0f b6 5d 00          	movzbl 0x0(%rbp),%ebx
    19a5:	84 db                	test   %bl,%bl
    19a7:	74 1e                	je     19c7 <blank_line+0x2f>
    19a9:	e8 62 f6 ff ff       	callq  1010 <__ctype_b_loc@plt>
    19ae:	48 83 c5 01          	add    $0x1,%rbp
    19b2:	48 0f be db          	movsbq %bl,%rbx
    19b6:	48 8b 00             	mov    (%rax),%rax
    19b9:	f6 44 58 01 20       	testb  $0x20,0x1(%rax,%rbx,2)
    19be:	75 e1                	jne    19a1 <blank_line+0x9>
    19c0:	b8 00 00 00 00       	mov    $0x0,%eax
    19c5:	eb 05                	jmp    19cc <blank_line+0x34>
    19c7:	b8 01 00 00 00       	mov    $0x1,%eax
    19cc:	48 83 c4 08          	add    $0x8,%rsp
    19d0:	5b                   	pop    %rbx
    19d1:	5d                   	pop    %rbp
    19d2:	c3                   	retq   

00000000000019d3 <skip>:
    19d3:	55                   	push   %rbp
    19d4:	53                   	push   %rbx
    19d5:	48 83 ec 08          	sub    $0x8,%rsp
    19d9:	48 8d 2d e0 2c 20 00 	lea    0x202ce0(%rip),%rbp        # 2046c0 <input_strings>
    19e0:	48 63 05 c5 2c 20 00 	movslq 0x202cc5(%rip),%rax        # 2046ac <num_input_strings>
    19e7:	48 8d 3c 80          	lea    (%rax,%rax,4),%rdi
    19eb:	48 c1 e7 04          	shl    $0x4,%rdi
    19ef:	48 01 ef             	add    %rbp,%rdi
    19f2:	48 8b 15 b7 2c 20 00 	mov    0x202cb7(%rip),%rdx        # 2046b0 <infile>
    19f9:	be 50 00 00 00       	mov    $0x50,%esi
    19fe:	e8 2d f5 ff ff       	callq  f30 <fgets@plt>
    1a03:	48 89 c3             	mov    %rax,%rbx
    1a06:	48 85 c0             	test   %rax,%rax
    1a09:	74 0c                	je     1a17 <skip+0x44>
    1a0b:	48 89 c7             	mov    %rax,%rdi
    1a0e:	e8 85 ff ff ff       	callq  1998 <blank_line>
    1a13:	85 c0                	test   %eax,%eax
    1a15:	75 c9                	jne    19e0 <skip+0xd>
    1a17:	48 89 d8             	mov    %rbx,%rax
    1a1a:	48 83 c4 08          	add    $0x8,%rsp
    1a1e:	5b                   	pop    %rbx
    1a1f:	5d                   	pop    %rbp
    1a20:	c3                   	retq   

0000000000001a21 <send_msg>:
    1a21:	53                   	push   %rbx
    1a22:	48 81 ec 10 40 00 00 	sub    $0x4010,%rsp
    1a29:	41 89 f8             	mov    %edi,%r8d
    1a2c:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1a33:	00 00 
    1a35:	48 89 84 24 08 40 00 	mov    %rax,0x4008(%rsp)
    1a3c:	00 
    1a3d:	31 c0                	xor    %eax,%eax
    1a3f:	8b 35 67 2c 20 00    	mov    0x202c67(%rip),%esi        # 2046ac <num_input_strings>
    1a45:	8d 46 ff             	lea    -0x1(%rsi),%eax
    1a48:	48 98                	cltq   
    1a4a:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
    1a4e:	48 c1 e2 04          	shl    $0x4,%rdx
    1a52:	48 8d 05 67 2c 20 00 	lea    0x202c67(%rip),%rax        # 2046c0 <input_strings>
    1a59:	48 01 c2             	add    %rax,%rdx
    1a5c:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    1a63:	b8 00 00 00 00       	mov    $0x0,%eax
    1a68:	48 89 d7             	mov    %rdx,%rdi
    1a6b:	f2 ae                	repnz scas %es:(%rdi),%al
    1a6d:	48 89 c8             	mov    %rcx,%rax
    1a70:	48 f7 d0             	not    %rax
    1a73:	48 83 c0 63          	add    $0x63,%rax
    1a77:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
    1a7d:	0f 87 86 00 00 00    	ja     1b09 <send_msg+0xe8>
    1a83:	45 85 c0             	test   %r8d,%r8d
    1a86:	4c 8d 0d b7 13 00 00 	lea    0x13b7(%rip),%r9        # 2e44 <array.3418+0x244>
    1a8d:	48 8d 05 b8 13 00 00 	lea    0x13b8(%rip),%rax        # 2e4c <array.3418+0x24c>
    1a94:	4c 0f 44 c8          	cmove  %rax,%r9
    1a98:	48 89 e3             	mov    %rsp,%rbx
    1a9b:	52                   	push   %rdx
    1a9c:	56                   	push   %rsi
    1a9d:	44 8b 05 a0 26 20 00 	mov    0x2026a0(%rip),%r8d        # 204144 <bomb_id>
    1aa4:	48 8d 0d aa 13 00 00 	lea    0x13aa(%rip),%rcx        # 2e55 <array.3418+0x255>
    1aab:	ba 00 20 00 00       	mov    $0x2000,%edx
    1ab0:	be 01 00 00 00       	mov    $0x1,%esi
    1ab5:	48 89 df             	mov    %rbx,%rdi
    1ab8:	b8 00 00 00 00       	mov    $0x0,%eax
    1abd:	e8 5e f5 ff ff       	callq  1020 <__sprintf_chk@plt>
    1ac2:	4c 8d 84 24 10 20 00 	lea    0x2010(%rsp),%r8
    1ac9:	00 
    1aca:	b9 00 00 00 00       	mov    $0x0,%ecx
    1acf:	48 89 da             	mov    %rbx,%rdx
    1ad2:	48 8d 35 47 26 20 00 	lea    0x202647(%rip),%rsi        # 204120 <user_password>
    1ad9:	48 8d 3d 58 26 20 00 	lea    0x202658(%rip),%rdi        # 204138 <userid>
    1ae0:	e8 46 0e 00 00       	callq  292b <driver_post>
    1ae5:	48 83 c4 10          	add    $0x10,%rsp
    1ae9:	85 c0                	test   %eax,%eax
    1aeb:	78 3c                	js     1b29 <send_msg+0x108>
    1aed:	48 8b 84 24 08 40 00 	mov    0x4008(%rsp),%rax
    1af4:	00 
    1af5:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    1afc:	00 00 
    1afe:	75 40                	jne    1b40 <send_msg+0x11f>
    1b00:	48 81 c4 10 40 00 00 	add    $0x4010,%rsp
    1b07:	5b                   	pop    %rbx
    1b08:	c3                   	retq   
    1b09:	48 8d 35 d8 11 00 00 	lea    0x11d8(%rip),%rsi        # 2ce8 <array.3418+0xe8>
    1b10:	bf 01 00 00 00       	mov    $0x1,%edi
    1b15:	b8 00 00 00 00       	mov    $0x0,%eax
    1b1a:	e8 81 f4 ff ff       	callq  fa0 <__printf_chk@plt>
    1b1f:	bf 08 00 00 00       	mov    $0x8,%edi
    1b24:	e8 a7 f4 ff ff       	callq  fd0 <exit@plt>
    1b29:	48 8d bc 24 00 20 00 	lea    0x2000(%rsp),%rdi
    1b30:	00 
    1b31:	e8 9a f3 ff ff       	callq  ed0 <puts@plt>
    1b36:	bf 00 00 00 00       	mov    $0x0,%edi
    1b3b:	e8 90 f4 ff ff       	callq  fd0 <exit@plt>
    1b40:	e8 ab f3 ff ff       	callq  ef0 <__stack_chk_fail@plt>

0000000000001b45 <explode_bomb>:
    1b45:	48 83 ec 08          	sub    $0x8,%rsp
    1b49:	48 8d 3d 11 13 00 00 	lea    0x1311(%rip),%rdi        # 2e61 <array.3418+0x261>
    1b50:	e8 7b f3 ff ff       	callq  ed0 <puts@plt>
    1b55:	48 8d 3d 0e 13 00 00 	lea    0x130e(%rip),%rdi        # 2e6a <array.3418+0x26a>
    1b5c:	e8 6f f3 ff ff       	callq  ed0 <puts@plt>
    1b61:	bf 00 00 00 00       	mov    $0x0,%edi
    1b66:	e8 b6 fe ff ff       	callq  1a21 <send_msg>
    1b6b:	48 8d 3d 9e 11 00 00 	lea    0x119e(%rip),%rdi        # 2d10 <array.3418+0x110>
    1b72:	e8 59 f3 ff ff       	callq  ed0 <puts@plt>
    1b77:	bf 08 00 00 00       	mov    $0x8,%edi
    1b7c:	e8 4f f4 ff ff       	callq  fd0 <exit@plt>

0000000000001b81 <read_six_numbers>:
    1b81:	48 83 ec 08          	sub    $0x8,%rsp
    1b85:	48 89 f2             	mov    %rsi,%rdx
    1b88:	48 8d 4e 04          	lea    0x4(%rsi),%rcx
    1b8c:	48 8d 46 14          	lea    0x14(%rsi),%rax
    1b90:	50                   	push   %rax
    1b91:	48 8d 46 10          	lea    0x10(%rsi),%rax
    1b95:	50                   	push   %rax
    1b96:	4c 8d 4e 0c          	lea    0xc(%rsi),%r9
    1b9a:	4c 8d 46 08          	lea    0x8(%rsi),%r8
    1b9e:	48 8d 35 dc 12 00 00 	lea    0x12dc(%rip),%rsi        # 2e81 <array.3418+0x281>
    1ba5:	b8 00 00 00 00       	mov    $0x0,%eax
    1baa:	e8 e1 f3 ff ff       	callq  f90 <__isoc99_sscanf@plt>
    1baf:	48 83 c4 10          	add    $0x10,%rsp
    1bb3:	83 f8 05             	cmp    $0x5,%eax
    1bb6:	7e 05                	jle    1bbd <read_six_numbers+0x3c>
    1bb8:	48 83 c4 08          	add    $0x8,%rsp
    1bbc:	c3                   	retq   
    1bbd:	e8 83 ff ff ff       	callq  1b45 <explode_bomb>

0000000000001bc2 <read_line>:
    1bc2:	48 83 ec 08          	sub    $0x8,%rsp
    1bc6:	b8 00 00 00 00       	mov    $0x0,%eax
    1bcb:	e8 03 fe ff ff       	callq  19d3 <skip>
    1bd0:	48 85 c0             	test   %rax,%rax
    1bd3:	74 6f                	je     1c44 <read_line+0x82>
    1bd5:	8b 35 d1 2a 20 00    	mov    0x202ad1(%rip),%esi        # 2046ac <num_input_strings>
    1bdb:	48 63 c6             	movslq %esi,%rax
    1bde:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
    1be2:	48 c1 e2 04          	shl    $0x4,%rdx
    1be6:	48 8d 05 d3 2a 20 00 	lea    0x202ad3(%rip),%rax        # 2046c0 <input_strings>
    1bed:	48 01 c2             	add    %rax,%rdx
    1bf0:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    1bf7:	b8 00 00 00 00       	mov    $0x0,%eax
    1bfc:	48 89 d7             	mov    %rdx,%rdi
    1bff:	f2 ae                	repnz scas %es:(%rdi),%al
    1c01:	48 f7 d1             	not    %rcx
    1c04:	48 83 e9 01          	sub    $0x1,%rcx
    1c08:	83 f9 4e             	cmp    $0x4e,%ecx
    1c0b:	0f 8f ab 00 00 00    	jg     1cbc <read_line+0xfa>
    1c11:	83 e9 01             	sub    $0x1,%ecx
    1c14:	48 63 c9             	movslq %ecx,%rcx
    1c17:	48 63 c6             	movslq %esi,%rax
    1c1a:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    1c1e:	48 c1 e0 04          	shl    $0x4,%rax
    1c22:	48 89 c7             	mov    %rax,%rdi
    1c25:	48 8d 05 94 2a 20 00 	lea    0x202a94(%rip),%rax        # 2046c0 <input_strings>
    1c2c:	48 01 f8             	add    %rdi,%rax
    1c2f:	c6 04 08 00          	movb   $0x0,(%rax,%rcx,1)
    1c33:	83 c6 01             	add    $0x1,%esi
    1c36:	89 35 70 2a 20 00    	mov    %esi,0x202a70(%rip)        # 2046ac <num_input_strings>
    1c3c:	48 89 d0             	mov    %rdx,%rax
    1c3f:	48 83 c4 08          	add    $0x8,%rsp
    1c43:	c3                   	retq   
    1c44:	48 8b 05 45 2a 20 00 	mov    0x202a45(%rip),%rax        # 204690 <stdin@@GLIBC_2.2.5>
    1c4b:	48 39 05 5e 2a 20 00 	cmp    %rax,0x202a5e(%rip)        # 2046b0 <infile>
    1c52:	74 1b                	je     1c6f <read_line+0xad>
    1c54:	48 8d 3d 56 12 00 00 	lea    0x1256(%rip),%rdi        # 2eb1 <array.3418+0x2b1>
    1c5b:	e8 30 f2 ff ff       	callq  e90 <getenv@plt>
    1c60:	48 85 c0             	test   %rax,%rax
    1c63:	74 20                	je     1c85 <read_line+0xc3>
    1c65:	bf 00 00 00 00       	mov    $0x0,%edi
    1c6a:	e8 61 f3 ff ff       	callq  fd0 <exit@plt>
    1c6f:	48 8d 3d 1d 12 00 00 	lea    0x121d(%rip),%rdi        # 2e93 <array.3418+0x293>
    1c76:	e8 55 f2 ff ff       	callq  ed0 <puts@plt>
    1c7b:	bf 08 00 00 00       	mov    $0x8,%edi
    1c80:	e8 4b f3 ff ff       	callq  fd0 <exit@plt>
    1c85:	48 8b 05 04 2a 20 00 	mov    0x202a04(%rip),%rax        # 204690 <stdin@@GLIBC_2.2.5>
    1c8c:	48 89 05 1d 2a 20 00 	mov    %rax,0x202a1d(%rip)        # 2046b0 <infile>
    1c93:	b8 00 00 00 00       	mov    $0x0,%eax
    1c98:	e8 36 fd ff ff       	callq  19d3 <skip>
    1c9d:	48 85 c0             	test   %rax,%rax
    1ca0:	0f 85 2f ff ff ff    	jne    1bd5 <read_line+0x13>
    1ca6:	48 8d 3d e6 11 00 00 	lea    0x11e6(%rip),%rdi        # 2e93 <array.3418+0x293>
    1cad:	e8 1e f2 ff ff       	callq  ed0 <puts@plt>
    1cb2:	bf 00 00 00 00       	mov    $0x0,%edi
    1cb7:	e8 14 f3 ff ff       	callq  fd0 <exit@plt>
    1cbc:	48 8d 3d f9 11 00 00 	lea    0x11f9(%rip),%rdi        # 2ebc <array.3418+0x2bc>
    1cc3:	e8 08 f2 ff ff       	callq  ed0 <puts@plt>
    1cc8:	8b 05 de 29 20 00    	mov    0x2029de(%rip),%eax        # 2046ac <num_input_strings>
    1cce:	8d 50 01             	lea    0x1(%rax),%edx
    1cd1:	89 15 d5 29 20 00    	mov    %edx,0x2029d5(%rip)        # 2046ac <num_input_strings>
    1cd7:	48 98                	cltq   
    1cd9:	48 6b c0 50          	imul   $0x50,%rax,%rax
    1cdd:	48 8d 15 dc 29 20 00 	lea    0x2029dc(%rip),%rdx        # 2046c0 <input_strings>
    1ce4:	48 be 2a 2a 2a 74 72 	movabs $0x636e7572742a2a2a,%rsi
    1ceb:	75 6e 63 
    1cee:	48 bf 61 74 65 64 2a 	movabs $0x2a2a2a64657461,%rdi
    1cf5:	2a 2a 00 
    1cf8:	48 89 34 02          	mov    %rsi,(%rdx,%rax,1)
    1cfc:	48 89 7c 02 08       	mov    %rdi,0x8(%rdx,%rax,1)
    1d01:	e8 3f fe ff ff       	callq  1b45 <explode_bomb>

0000000000001d06 <phase_defused>:
    1d06:	48 83 ec 78          	sub    $0x78,%rsp
    1d0a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1d11:	00 00 
    1d13:	48 89 44 24 68       	mov    %rax,0x68(%rsp)
    1d18:	31 c0                	xor    %eax,%eax
    1d1a:	bf 01 00 00 00       	mov    $0x1,%edi
    1d1f:	e8 fd fc ff ff       	callq  1a21 <send_msg>
    1d24:	83 3d 81 29 20 00 06 	cmpl   $0x6,0x202981(%rip)        # 2046ac <num_input_strings>
    1d2b:	74 19                	je     1d46 <phase_defused+0x40>
    1d2d:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
    1d32:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
    1d39:	00 00 
    1d3b:	0f 85 84 00 00 00    	jne    1dc5 <phase_defused+0xbf>
    1d41:	48 83 c4 78          	add    $0x78,%rsp
    1d45:	c3                   	retq   
    1d46:	48 8d 4c 24 0c       	lea    0xc(%rsp),%rcx
    1d4b:	48 8d 54 24 08       	lea    0x8(%rsp),%rdx
    1d50:	4c 8d 44 24 10       	lea    0x10(%rsp),%r8
    1d55:	48 8d 35 7b 11 00 00 	lea    0x117b(%rip),%rsi        # 2ed7 <array.3418+0x2d7>
    1d5c:	48 8d 3d 4d 2a 20 00 	lea    0x202a4d(%rip),%rdi        # 2047b0 <input_strings+0xf0>
    1d63:	b8 00 00 00 00       	mov    $0x0,%eax
    1d68:	e8 23 f2 ff ff       	callq  f90 <__isoc99_sscanf@plt>
    1d6d:	83 f8 03             	cmp    $0x3,%eax
    1d70:	74 1a                	je     1d8c <phase_defused+0x86>
    1d72:	48 8d 3d 1f 10 00 00 	lea    0x101f(%rip),%rdi        # 2d98 <array.3418+0x198>
    1d79:	e8 52 f1 ff ff       	callq  ed0 <puts@plt>
    1d7e:	48 8d 3d 43 10 00 00 	lea    0x1043(%rip),%rdi        # 2dc8 <array.3418+0x1c8>
    1d85:	e8 46 f1 ff ff       	callq  ed0 <puts@plt>
    1d8a:	eb a1                	jmp    1d2d <phase_defused+0x27>
    1d8c:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
    1d91:	48 8d 35 48 11 00 00 	lea    0x1148(%rip),%rsi        # 2ee0 <array.3418+0x2e0>
    1d98:	e8 a4 fa ff ff       	callq  1841 <strings_not_equal>
    1d9d:	85 c0                	test   %eax,%eax
    1d9f:	75 d1                	jne    1d72 <phase_defused+0x6c>
    1da1:	48 8d 3d 90 0f 00 00 	lea    0xf90(%rip),%rdi        # 2d38 <array.3418+0x138>
    1da8:	e8 23 f1 ff ff       	callq  ed0 <puts@plt>
    1dad:	48 8d 3d ac 0f 00 00 	lea    0xfac(%rip),%rdi        # 2d60 <array.3418+0x160>
    1db4:	e8 17 f1 ff ff       	callq  ed0 <puts@plt>
    1db9:	b8 00 00 00 00       	mov    $0x0,%eax
    1dbe:	e8 87 f9 ff ff       	callq  174a <secret_phase>
    1dc3:	eb ad                	jmp    1d72 <phase_defused+0x6c>
    1dc5:	e8 26 f1 ff ff       	callq  ef0 <__stack_chk_fail@plt>

0000000000001dca <sigalrm_handler>:
    1dca:	48 83 ec 08          	sub    $0x8,%rsp
    1dce:	b9 00 00 00 00       	mov    $0x0,%ecx
    1dd3:	48 8d 15 7e 11 00 00 	lea    0x117e(%rip),%rdx        # 2f58 <array.3418+0x358>
    1dda:	be 01 00 00 00       	mov    $0x1,%esi
    1ddf:	48 8b 3d ba 28 20 00 	mov    0x2028ba(%rip),%rdi        # 2046a0 <stderr@@GLIBC_2.2.5>
    1de6:	b8 00 00 00 00       	mov    $0x0,%eax
    1deb:	e8 00 f2 ff ff       	callq  ff0 <__fprintf_chk@plt>
    1df0:	bf 01 00 00 00       	mov    $0x1,%edi
    1df5:	e8 d6 f1 ff ff       	callq  fd0 <exit@plt>

0000000000001dfa <rio_readlineb>:
    1dfa:	41 56                	push   %r14
    1dfc:	41 55                	push   %r13
    1dfe:	41 54                	push   %r12
    1e00:	55                   	push   %rbp
    1e01:	53                   	push   %rbx
    1e02:	48 89 fb             	mov    %rdi,%rbx
    1e05:	49 89 f4             	mov    %rsi,%r12
    1e08:	49 89 d6             	mov    %rdx,%r14
    1e0b:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    1e11:	48 8d 6f 10          	lea    0x10(%rdi),%rbp
    1e15:	48 83 fa 01          	cmp    $0x1,%rdx
    1e19:	77 0c                	ja     1e27 <rio_readlineb+0x2d>
    1e1b:	eb 60                	jmp    1e7d <rio_readlineb+0x83>
    1e1d:	e8 8e f0 ff ff       	callq  eb0 <__errno_location@plt>
    1e22:	83 38 04             	cmpl   $0x4,(%rax)
    1e25:	75 67                	jne    1e8e <rio_readlineb+0x94>
    1e27:	8b 43 04             	mov    0x4(%rbx),%eax
    1e2a:	85 c0                	test   %eax,%eax
    1e2c:	7f 20                	jg     1e4e <rio_readlineb+0x54>
    1e2e:	ba 00 20 00 00       	mov    $0x2000,%edx
    1e33:	48 89 ee             	mov    %rbp,%rsi
    1e36:	8b 3b                	mov    (%rbx),%edi
    1e38:	e8 e3 f0 ff ff       	callq  f20 <read@plt>
    1e3d:	89 43 04             	mov    %eax,0x4(%rbx)
    1e40:	85 c0                	test   %eax,%eax
    1e42:	78 d9                	js     1e1d <rio_readlineb+0x23>
    1e44:	85 c0                	test   %eax,%eax
    1e46:	74 4f                	je     1e97 <rio_readlineb+0x9d>
    1e48:	48 89 6b 08          	mov    %rbp,0x8(%rbx)
    1e4c:	eb d9                	jmp    1e27 <rio_readlineb+0x2d>
    1e4e:	48 8b 53 08          	mov    0x8(%rbx),%rdx
    1e52:	0f b6 0a             	movzbl (%rdx),%ecx
    1e55:	48 83 c2 01          	add    $0x1,%rdx
    1e59:	48 89 53 08          	mov    %rdx,0x8(%rbx)
    1e5d:	83 e8 01             	sub    $0x1,%eax
    1e60:	89 43 04             	mov    %eax,0x4(%rbx)
    1e63:	49 83 c4 01          	add    $0x1,%r12
    1e67:	41 88 4c 24 ff       	mov    %cl,-0x1(%r12)
    1e6c:	80 f9 0a             	cmp    $0xa,%cl
    1e6f:	74 0c                	je     1e7d <rio_readlineb+0x83>
    1e71:	41 83 c5 01          	add    $0x1,%r13d
    1e75:	49 63 c5             	movslq %r13d,%rax
    1e78:	4c 39 f0             	cmp    %r14,%rax
    1e7b:	72 aa                	jb     1e27 <rio_readlineb+0x2d>
    1e7d:	41 c6 04 24 00       	movb   $0x0,(%r12)
    1e82:	49 63 c5             	movslq %r13d,%rax
    1e85:	5b                   	pop    %rbx
    1e86:	5d                   	pop    %rbp
    1e87:	41 5c                	pop    %r12
    1e89:	41 5d                	pop    %r13
    1e8b:	41 5e                	pop    %r14
    1e8d:	c3                   	retq   
    1e8e:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
    1e95:	eb 05                	jmp    1e9c <rio_readlineb+0xa2>
    1e97:	b8 00 00 00 00       	mov    $0x0,%eax
    1e9c:	85 c0                	test   %eax,%eax
    1e9e:	75 0d                	jne    1ead <rio_readlineb+0xb3>
    1ea0:	b8 00 00 00 00       	mov    $0x0,%eax
    1ea5:	41 83 fd 01          	cmp    $0x1,%r13d
    1ea9:	75 d2                	jne    1e7d <rio_readlineb+0x83>
    1eab:	eb d8                	jmp    1e85 <rio_readlineb+0x8b>
    1ead:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
    1eb4:	eb cf                	jmp    1e85 <rio_readlineb+0x8b>

0000000000001eb6 <submitr>:
    1eb6:	41 57                	push   %r15
    1eb8:	41 56                	push   %r14
    1eba:	41 55                	push   %r13
    1ebc:	41 54                	push   %r12
    1ebe:	55                   	push   %rbp
    1ebf:	53                   	push   %rbx
    1ec0:	48 81 ec 78 a0 00 00 	sub    $0xa078,%rsp
    1ec7:	49 89 fd             	mov    %rdi,%r13
    1eca:	89 f5                	mov    %esi,%ebp
    1ecc:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    1ed1:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
    1ed6:	4c 89 44 24 20       	mov    %r8,0x20(%rsp)
    1edb:	4c 89 4c 24 18       	mov    %r9,0x18(%rsp)
    1ee0:	48 8b 9c 24 b0 a0 00 	mov    0xa0b0(%rsp),%rbx
    1ee7:	00 
    1ee8:	4c 8b bc 24 b8 a0 00 	mov    0xa0b8(%rsp),%r15
    1eef:	00 
    1ef0:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    1ef7:	00 00 
    1ef9:	48 89 84 24 68 a0 00 	mov    %rax,0xa068(%rsp)
    1f00:	00 
    1f01:	31 c0                	xor    %eax,%eax
    1f03:	c7 44 24 3c 00 00 00 	movl   $0x0,0x3c(%rsp)
    1f0a:	00 
    1f0b:	ba 00 00 00 00       	mov    $0x0,%edx
    1f10:	be 01 00 00 00       	mov    $0x1,%esi
    1f15:	bf 02 00 00 00       	mov    $0x2,%edi
    1f1a:	e8 11 f1 ff ff       	callq  1030 <socket@plt>
    1f1f:	85 c0                	test   %eax,%eax
    1f21:	0f 88 35 01 00 00    	js     205c <submitr+0x1a6>
    1f27:	41 89 c4             	mov    %eax,%r12d
    1f2a:	4c 89 ef             	mov    %r13,%rdi
    1f2d:	e8 1e f0 ff ff       	callq  f50 <gethostbyname@plt>
    1f32:	48 85 c0             	test   %rax,%rax
    1f35:	0f 84 71 01 00 00    	je     20ac <submitr+0x1f6>
    1f3b:	4c 8d 6c 24 40       	lea    0x40(%rsp),%r13
    1f40:	48 c7 44 24 42 00 00 	movq   $0x0,0x42(%rsp)
    1f47:	00 00 
    1f49:	c7 44 24 4a 00 00 00 	movl   $0x0,0x4a(%rsp)
    1f50:	00 
    1f51:	66 c7 44 24 4e 00 00 	movw   $0x0,0x4e(%rsp)
    1f58:	66 c7 44 24 40 02 00 	movw   $0x2,0x40(%rsp)
    1f5f:	48 63 50 14          	movslq 0x14(%rax),%rdx
    1f63:	48 8b 40 18          	mov    0x18(%rax),%rax
    1f67:	48 8d 7c 24 44       	lea    0x44(%rsp),%rdi
    1f6c:	b9 0c 00 00 00       	mov    $0xc,%ecx
    1f71:	48 8b 30             	mov    (%rax),%rsi
    1f74:	e8 e7 ef ff ff       	callq  f60 <__memmove_chk@plt>
    1f79:	66 c1 cd 08          	ror    $0x8,%bp
    1f7d:	66 89 6c 24 42       	mov    %bp,0x42(%rsp)
    1f82:	ba 10 00 00 00       	mov    $0x10,%edx
    1f87:	4c 89 ee             	mov    %r13,%rsi
    1f8a:	44 89 e7             	mov    %r12d,%edi
    1f8d:	e8 4e f0 ff ff       	callq  fe0 <connect@plt>
    1f92:	85 c0                	test   %eax,%eax
    1f94:	0f 88 7d 01 00 00    	js     2117 <submitr+0x261>
    1f9a:	49 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%r9
    1fa1:	b8 00 00 00 00       	mov    $0x0,%eax
    1fa6:	4c 89 c9             	mov    %r9,%rcx
    1fa9:	48 89 df             	mov    %rbx,%rdi
    1fac:	f2 ae                	repnz scas %es:(%rdi),%al
    1fae:	48 89 ce             	mov    %rcx,%rsi
    1fb1:	48 f7 d6             	not    %rsi
    1fb4:	4c 89 c9             	mov    %r9,%rcx
    1fb7:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
    1fbc:	f2 ae                	repnz scas %es:(%rdi),%al
    1fbe:	49 89 c8             	mov    %rcx,%r8
    1fc1:	4c 89 c9             	mov    %r9,%rcx
    1fc4:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
    1fc9:	f2 ae                	repnz scas %es:(%rdi),%al
    1fcb:	48 89 ca             	mov    %rcx,%rdx
    1fce:	48 f7 d2             	not    %rdx
    1fd1:	4c 89 c9             	mov    %r9,%rcx
    1fd4:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
    1fd9:	f2 ae                	repnz scas %es:(%rdi),%al
    1fdb:	4c 29 c2             	sub    %r8,%rdx
    1fde:	48 29 ca             	sub    %rcx,%rdx
    1fe1:	48 8d 44 76 fd       	lea    -0x3(%rsi,%rsi,2),%rax
    1fe6:	48 8d 44 02 7b       	lea    0x7b(%rdx,%rax,1),%rax
    1feb:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
    1ff1:	0f 87 7d 01 00 00    	ja     2174 <submitr+0x2be>
    1ff7:	48 8d 94 24 60 40 00 	lea    0x4060(%rsp),%rdx
    1ffe:	00 
    1fff:	b9 00 04 00 00       	mov    $0x400,%ecx
    2004:	b8 00 00 00 00       	mov    $0x0,%eax
    2009:	48 89 d7             	mov    %rdx,%rdi
    200c:	f3 48 ab             	rep stos %rax,%es:(%rdi)
    200f:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    2016:	48 89 df             	mov    %rbx,%rdi
    2019:	f2 ae                	repnz scas %es:(%rdi),%al
    201b:	48 89 ca             	mov    %rcx,%rdx
    201e:	48 f7 d2             	not    %rdx
    2021:	48 89 d1             	mov    %rdx,%rcx
    2024:	48 83 e9 01          	sub    $0x1,%rcx
    2028:	85 c9                	test   %ecx,%ecx
    202a:	0f 84 3f 06 00 00    	je     266f <submitr+0x7b9>
    2030:	8d 41 ff             	lea    -0x1(%rcx),%eax
    2033:	4c 8d 74 03 01       	lea    0x1(%rbx,%rax,1),%r14
    2038:	48 8d ac 24 60 40 00 	lea    0x4060(%rsp),%rbp
    203f:	00 
    2040:	48 8d 84 24 60 80 00 	lea    0x8060(%rsp),%rax
    2047:	00 
    2048:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
    204d:	49 bd d9 ff 00 00 00 	movabs $0x2000000000ffd9,%r13
    2054:	00 20 00 
    2057:	e9 a6 01 00 00       	jmpq   2202 <submitr+0x34c>
    205c:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    2063:	3a 20 43 
    2066:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    206d:	20 75 6e 
    2070:	49 89 07             	mov    %rax,(%r15)
    2073:	49 89 57 08          	mov    %rdx,0x8(%r15)
    2077:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    207e:	74 6f 20 
    2081:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
    2088:	65 20 73 
    208b:	49 89 47 10          	mov    %rax,0x10(%r15)
    208f:	49 89 57 18          	mov    %rdx,0x18(%r15)
    2093:	41 c7 47 20 6f 63 6b 	movl   $0x656b636f,0x20(%r15)
    209a:	65 
    209b:	66 41 c7 47 24 74 00 	movw   $0x74,0x24(%r15)
    20a2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    20a7:	e9 9a 04 00 00       	jmpq   2546 <submitr+0x690>
    20ac:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
    20b3:	3a 20 44 
    20b6:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
    20bd:	20 75 6e 
    20c0:	49 89 07             	mov    %rax,(%r15)
    20c3:	49 89 57 08          	mov    %rdx,0x8(%r15)
    20c7:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    20ce:	74 6f 20 
    20d1:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
    20d8:	76 65 20 
    20db:	49 89 47 10          	mov    %rax,0x10(%r15)
    20df:	49 89 57 18          	mov    %rdx,0x18(%r15)
    20e3:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
    20ea:	72 20 61 
    20ed:	49 89 47 20          	mov    %rax,0x20(%r15)
    20f1:	41 c7 47 28 64 64 72 	movl   $0x65726464,0x28(%r15)
    20f8:	65 
    20f9:	66 41 c7 47 2c 73 73 	movw   $0x7373,0x2c(%r15)
    2100:	41 c6 47 2e 00       	movb   $0x0,0x2e(%r15)
    2105:	44 89 e7             	mov    %r12d,%edi
    2108:	e8 03 ee ff ff       	callq  f10 <close@plt>
    210d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2112:	e9 2f 04 00 00       	jmpq   2546 <submitr+0x690>
    2117:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
    211e:	3a 20 55 
    2121:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
    2128:	20 74 6f 
    212b:	49 89 07             	mov    %rax,(%r15)
    212e:	49 89 57 08          	mov    %rdx,0x8(%r15)
    2132:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
    2139:	65 63 74 
    213c:	48 ba 20 74 6f 20 74 	movabs $0x20656874206f7420,%rdx
    2143:	68 65 20 
    2146:	49 89 47 10          	mov    %rax,0x10(%r15)
    214a:	49 89 57 18          	mov    %rdx,0x18(%r15)
    214e:	41 c7 47 20 73 65 72 	movl   $0x76726573,0x20(%r15)
    2155:	76 
    2156:	66 41 c7 47 24 65 72 	movw   $0x7265,0x24(%r15)
    215d:	41 c6 47 26 00       	movb   $0x0,0x26(%r15)
    2162:	44 89 e7             	mov    %r12d,%edi
    2165:	e8 a6 ed ff ff       	callq  f10 <close@plt>
    216a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    216f:	e9 d2 03 00 00       	jmpq   2546 <submitr+0x690>
    2174:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
    217b:	3a 20 52 
    217e:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
    2185:	20 73 74 
    2188:	49 89 07             	mov    %rax,(%r15)
    218b:	49 89 57 08          	mov    %rdx,0x8(%r15)
    218f:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
    2196:	74 6f 6f 
    2199:	48 ba 20 6c 61 72 67 	movabs $0x202e656772616c20,%rdx
    21a0:	65 2e 20 
    21a3:	49 89 47 10          	mov    %rax,0x10(%r15)
    21a7:	49 89 57 18          	mov    %rdx,0x18(%r15)
    21ab:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
    21b2:	61 73 65 
    21b5:	48 ba 20 53 55 42 4d 	movabs $0x5254494d42555320,%rdx
    21bc:	49 54 52 
    21bf:	49 89 47 20          	mov    %rax,0x20(%r15)
    21c3:	49 89 57 28          	mov    %rdx,0x28(%r15)
    21c7:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
    21ce:	55 46 00 
    21d1:	49 89 47 30          	mov    %rax,0x30(%r15)
    21d5:	44 89 e7             	mov    %r12d,%edi
    21d8:	e8 33 ed ff ff       	callq  f10 <close@plt>
    21dd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    21e2:	e9 5f 03 00 00       	jmpq   2546 <submitr+0x690>
    21e7:	49 0f a3 c5          	bt     %rax,%r13
    21eb:	73 21                	jae    220e <submitr+0x358>
    21ed:	44 88 45 00          	mov    %r8b,0x0(%rbp)
    21f1:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
    21f5:	48 83 c3 01          	add    $0x1,%rbx
    21f9:	4c 39 f3             	cmp    %r14,%rbx
    21fc:	0f 84 6d 04 00 00    	je     266f <submitr+0x7b9>
    2202:	44 0f b6 03          	movzbl (%rbx),%r8d
    2206:	41 8d 40 d6          	lea    -0x2a(%r8),%eax
    220a:	3c 35                	cmp    $0x35,%al
    220c:	76 d9                	jbe    21e7 <submitr+0x331>
    220e:	44 89 c0             	mov    %r8d,%eax
    2211:	83 e0 df             	and    $0xffffffdf,%eax
    2214:	83 e8 41             	sub    $0x41,%eax
    2217:	3c 19                	cmp    $0x19,%al
    2219:	76 d2                	jbe    21ed <submitr+0x337>
    221b:	41 80 f8 20          	cmp    $0x20,%r8b
    221f:	74 60                	je     2281 <submitr+0x3cb>
    2221:	41 8d 40 e0          	lea    -0x20(%r8),%eax
    2225:	3c 5f                	cmp    $0x5f,%al
    2227:	76 0a                	jbe    2233 <submitr+0x37d>
    2229:	41 80 f8 09          	cmp    $0x9,%r8b
    222d:	0f 85 af 03 00 00    	jne    25e2 <submitr+0x72c>
    2233:	45 0f b6 c0          	movzbl %r8b,%r8d
    2237:	48 8d 0d f2 0d 00 00 	lea    0xdf2(%rip),%rcx        # 3030 <array.3418+0x430>
    223e:	ba 08 00 00 00       	mov    $0x8,%edx
    2243:	be 01 00 00 00       	mov    $0x1,%esi
    2248:	48 8b 7c 24 28       	mov    0x28(%rsp),%rdi
    224d:	b8 00 00 00 00       	mov    $0x0,%eax
    2252:	e8 c9 ed ff ff       	callq  1020 <__sprintf_chk@plt>
    2257:	0f b6 84 24 60 80 00 	movzbl 0x8060(%rsp),%eax
    225e:	00 
    225f:	88 45 00             	mov    %al,0x0(%rbp)
    2262:	0f b6 84 24 61 80 00 	movzbl 0x8061(%rsp),%eax
    2269:	00 
    226a:	88 45 01             	mov    %al,0x1(%rbp)
    226d:	0f b6 84 24 62 80 00 	movzbl 0x8062(%rsp),%eax
    2274:	00 
    2275:	88 45 02             	mov    %al,0x2(%rbp)
    2278:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
    227c:	e9 74 ff ff ff       	jmpq   21f5 <submitr+0x33f>
    2281:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
    2285:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
    2289:	e9 67 ff ff ff       	jmpq   21f5 <submitr+0x33f>
    228e:	49 01 c5             	add    %rax,%r13
    2291:	48 29 c5             	sub    %rax,%rbp
    2294:	74 26                	je     22bc <submitr+0x406>
    2296:	48 89 ea             	mov    %rbp,%rdx
    2299:	4c 89 ee             	mov    %r13,%rsi
    229c:	44 89 e7             	mov    %r12d,%edi
    229f:	e8 3c ec ff ff       	callq  ee0 <write@plt>
    22a4:	48 85 c0             	test   %rax,%rax
    22a7:	7f e5                	jg     228e <submitr+0x3d8>
    22a9:	e8 02 ec ff ff       	callq  eb0 <__errno_location@plt>
    22ae:	83 38 04             	cmpl   $0x4,(%rax)
    22b1:	0f 85 31 01 00 00    	jne    23e8 <submitr+0x532>
    22b7:	4c 89 f0             	mov    %r14,%rax
    22ba:	eb d2                	jmp    228e <submitr+0x3d8>
    22bc:	48 85 db             	test   %rbx,%rbx
    22bf:	0f 88 23 01 00 00    	js     23e8 <submitr+0x532>
    22c5:	44 89 64 24 50       	mov    %r12d,0x50(%rsp)
    22ca:	c7 44 24 54 00 00 00 	movl   $0x0,0x54(%rsp)
    22d1:	00 
    22d2:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
    22d7:	48 8d 47 10          	lea    0x10(%rdi),%rax
    22db:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    22e0:	48 8d b4 24 60 20 00 	lea    0x2060(%rsp),%rsi
    22e7:	00 
    22e8:	ba 00 20 00 00       	mov    $0x2000,%edx
    22ed:	e8 08 fb ff ff       	callq  1dfa <rio_readlineb>
    22f2:	48 85 c0             	test   %rax,%rax
    22f5:	0f 8e 4c 01 00 00    	jle    2447 <submitr+0x591>
    22fb:	48 8d 4c 24 3c       	lea    0x3c(%rsp),%rcx
    2300:	48 8d 94 24 60 60 00 	lea    0x6060(%rsp),%rdx
    2307:	00 
    2308:	48 8d bc 24 60 20 00 	lea    0x2060(%rsp),%rdi
    230f:	00 
    2310:	4c 8d 84 24 60 80 00 	lea    0x8060(%rsp),%r8
    2317:	00 
    2318:	48 8d 35 18 0d 00 00 	lea    0xd18(%rip),%rsi        # 3037 <array.3418+0x437>
    231f:	b8 00 00 00 00       	mov    $0x0,%eax
    2324:	e8 67 ec ff ff       	callq  f90 <__isoc99_sscanf@plt>
    2329:	44 8b 44 24 3c       	mov    0x3c(%rsp),%r8d
    232e:	41 81 f8 c8 00 00 00 	cmp    $0xc8,%r8d
    2335:	0f 85 80 01 00 00    	jne    24bb <submitr+0x605>
    233b:	48 8d 9c 24 60 20 00 	lea    0x2060(%rsp),%rbx
    2342:	00 
    2343:	48 8d 2d fe 0c 00 00 	lea    0xcfe(%rip),%rbp        # 3048 <array.3418+0x448>
    234a:	4c 8d 6c 24 50       	lea    0x50(%rsp),%r13
    234f:	b9 03 00 00 00       	mov    $0x3,%ecx
    2354:	48 89 de             	mov    %rbx,%rsi
    2357:	48 89 ef             	mov    %rbp,%rdi
    235a:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
    235c:	0f 97 c0             	seta   %al
    235f:	1c 00                	sbb    $0x0,%al
    2361:	84 c0                	test   %al,%al
    2363:	0f 84 89 01 00 00    	je     24f2 <submitr+0x63c>
    2369:	ba 00 20 00 00       	mov    $0x2000,%edx
    236e:	48 89 de             	mov    %rbx,%rsi
    2371:	4c 89 ef             	mov    %r13,%rdi
    2374:	e8 81 fa ff ff       	callq  1dfa <rio_readlineb>
    2379:	48 85 c0             	test   %rax,%rax
    237c:	7f d1                	jg     234f <submitr+0x499>
    237e:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    2385:	3a 20 43 
    2388:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    238f:	20 75 6e 
    2392:	49 89 07             	mov    %rax,(%r15)
    2395:	49 89 57 08          	mov    %rdx,0x8(%r15)
    2399:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    23a0:	74 6f 20 
    23a3:	48 ba 72 65 61 64 20 	movabs $0x6165682064616572,%rdx
    23aa:	68 65 61 
    23ad:	49 89 47 10          	mov    %rax,0x10(%r15)
    23b1:	49 89 57 18          	mov    %rdx,0x18(%r15)
    23b5:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
    23bc:	66 72 6f 
    23bf:	48 ba 6d 20 73 65 72 	movabs $0x726576726573206d,%rdx
    23c6:	76 65 72 
    23c9:	49 89 47 20          	mov    %rax,0x20(%r15)
    23cd:	49 89 57 28          	mov    %rdx,0x28(%r15)
    23d1:	41 c6 47 30 00       	movb   $0x0,0x30(%r15)
    23d6:	44 89 e7             	mov    %r12d,%edi
    23d9:	e8 32 eb ff ff       	callq  f10 <close@plt>
    23de:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    23e3:	e9 5e 01 00 00       	jmpq   2546 <submitr+0x690>
    23e8:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    23ef:	3a 20 43 
    23f2:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    23f9:	20 75 6e 
    23fc:	49 89 07             	mov    %rax,(%r15)
    23ff:	49 89 57 08          	mov    %rdx,0x8(%r15)
    2403:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    240a:	74 6f 20 
    240d:	48 ba 77 72 69 74 65 	movabs $0x6f74206574697277,%rdx
    2414:	20 74 6f 
    2417:	49 89 47 10          	mov    %rax,0x10(%r15)
    241b:	49 89 57 18          	mov    %rdx,0x18(%r15)
    241f:	48 b8 20 74 68 65 20 	movabs $0x7265732065687420,%rax
    2426:	73 65 72 
    2429:	49 89 47 20          	mov    %rax,0x20(%r15)
    242d:	41 c7 47 28 76 65 72 	movl   $0x726576,0x28(%r15)
    2434:	00 
    2435:	44 89 e7             	mov    %r12d,%edi
    2438:	e8 d3 ea ff ff       	callq  f10 <close@plt>
    243d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2442:	e9 ff 00 00 00       	jmpq   2546 <submitr+0x690>
    2447:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    244e:	3a 20 43 
    2451:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    2458:	20 75 6e 
    245b:	49 89 07             	mov    %rax,(%r15)
    245e:	49 89 57 08          	mov    %rdx,0x8(%r15)
    2462:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    2469:	74 6f 20 
    246c:	48 ba 72 65 61 64 20 	movabs $0x7269662064616572,%rdx
    2473:	66 69 72 
    2476:	49 89 47 10          	mov    %rax,0x10(%r15)
    247a:	49 89 57 18          	mov    %rdx,0x18(%r15)
    247e:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
    2485:	61 64 65 
    2488:	48 ba 72 20 66 72 6f 	movabs $0x73206d6f72662072,%rdx
    248f:	6d 20 73 
    2492:	49 89 47 20          	mov    %rax,0x20(%r15)
    2496:	49 89 57 28          	mov    %rdx,0x28(%r15)
    249a:	41 c7 47 30 65 72 76 	movl   $0x65767265,0x30(%r15)
    24a1:	65 
    24a2:	66 41 c7 47 34 72 00 	movw   $0x72,0x34(%r15)
    24a9:	44 89 e7             	mov    %r12d,%edi
    24ac:	e8 5f ea ff ff       	callq  f10 <close@plt>
    24b1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    24b6:	e9 8b 00 00 00       	jmpq   2546 <submitr+0x690>
    24bb:	4c 8d 8c 24 60 80 00 	lea    0x8060(%rsp),%r9
    24c2:	00 
    24c3:	48 8d 0d b6 0a 00 00 	lea    0xab6(%rip),%rcx        # 2f80 <array.3418+0x380>
    24ca:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
    24d1:	be 01 00 00 00       	mov    $0x1,%esi
    24d6:	4c 89 ff             	mov    %r15,%rdi
    24d9:	b8 00 00 00 00       	mov    $0x0,%eax
    24de:	e8 3d eb ff ff       	callq  1020 <__sprintf_chk@plt>
    24e3:	44 89 e7             	mov    %r12d,%edi
    24e6:	e8 25 ea ff ff       	callq  f10 <close@plt>
    24eb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    24f0:	eb 54                	jmp    2546 <submitr+0x690>
    24f2:	48 8d b4 24 60 20 00 	lea    0x2060(%rsp),%rsi
    24f9:	00 
    24fa:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
    24ff:	ba 00 20 00 00       	mov    $0x2000,%edx
    2504:	e8 f1 f8 ff ff       	callq  1dfa <rio_readlineb>
    2509:	48 85 c0             	test   %rax,%rax
    250c:	7e 61                	jle    256f <submitr+0x6b9>
    250e:	48 8d b4 24 60 20 00 	lea    0x2060(%rsp),%rsi
    2515:	00 
    2516:	4c 89 ff             	mov    %r15,%rdi
    2519:	e8 a2 e9 ff ff       	callq  ec0 <strcpy@plt>
    251e:	44 89 e7             	mov    %r12d,%edi
    2521:	e8 ea e9 ff ff       	callq  f10 <close@plt>
    2526:	b9 03 00 00 00       	mov    $0x3,%ecx
    252b:	48 8d 3d 19 0b 00 00 	lea    0xb19(%rip),%rdi        # 304b <array.3418+0x44b>
    2532:	4c 89 fe             	mov    %r15,%rsi
    2535:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
    2537:	0f 97 c0             	seta   %al
    253a:	1c 00                	sbb    $0x0,%al
    253c:	84 c0                	test   %al,%al
    253e:	0f 95 c0             	setne  %al
    2541:	0f b6 c0             	movzbl %al,%eax
    2544:	f7 d8                	neg    %eax
    2546:	48 8b 94 24 68 a0 00 	mov    0xa068(%rsp),%rdx
    254d:	00 
    254e:	64 48 33 14 25 28 00 	xor    %fs:0x28,%rdx
    2555:	00 00 
    2557:	0f 85 95 01 00 00    	jne    26f2 <submitr+0x83c>
    255d:	48 81 c4 78 a0 00 00 	add    $0xa078,%rsp
    2564:	5b                   	pop    %rbx
    2565:	5d                   	pop    %rbp
    2566:	41 5c                	pop    %r12
    2568:	41 5d                	pop    %r13
    256a:	41 5e                	pop    %r14
    256c:	41 5f                	pop    %r15
    256e:	c3                   	retq   
    256f:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    2576:	3a 20 43 
    2579:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    2580:	20 75 6e 
    2583:	49 89 07             	mov    %rax,(%r15)
    2586:	49 89 57 08          	mov    %rdx,0x8(%r15)
    258a:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    2591:	74 6f 20 
    2594:	48 ba 72 65 61 64 20 	movabs $0x6174732064616572,%rdx
    259b:	73 74 61 
    259e:	49 89 47 10          	mov    %rax,0x10(%r15)
    25a2:	49 89 57 18          	mov    %rdx,0x18(%r15)
    25a6:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
    25ad:	65 73 73 
    25b0:	48 ba 61 67 65 20 66 	movabs $0x6d6f726620656761,%rdx
    25b7:	72 6f 6d 
    25ba:	49 89 47 20          	mov    %rax,0x20(%r15)
    25be:	49 89 57 28          	mov    %rdx,0x28(%r15)
    25c2:	48 b8 20 73 65 72 76 	movabs $0x72657672657320,%rax
    25c9:	65 72 00 
    25cc:	49 89 47 30          	mov    %rax,0x30(%r15)
    25d0:	44 89 e7             	mov    %r12d,%edi
    25d3:	e8 38 e9 ff ff       	callq  f10 <close@plt>
    25d8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    25dd:	e9 64 ff ff ff       	jmpq   2546 <submitr+0x690>
    25e2:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
    25e9:	3a 20 52 
    25ec:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
    25f3:	20 73 74 
    25f6:	49 89 07             	mov    %rax,(%r15)
    25f9:	49 89 57 08          	mov    %rdx,0x8(%r15)
    25fd:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
    2604:	63 6f 6e 
    2607:	48 ba 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rdx
    260e:	20 61 6e 
    2611:	49 89 47 10          	mov    %rax,0x10(%r15)
    2615:	49 89 57 18          	mov    %rdx,0x18(%r15)
    2619:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
    2620:	67 61 6c 
    2623:	48 ba 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rdx
    262a:	6e 70 72 
    262d:	49 89 47 20          	mov    %rax,0x20(%r15)
    2631:	49 89 57 28          	mov    %rdx,0x28(%r15)
    2635:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
    263c:	6c 65 20 
    263f:	48 ba 63 68 61 72 61 	movabs $0x6574636172616863,%rdx
    2646:	63 74 65 
    2649:	49 89 47 30          	mov    %rax,0x30(%r15)
    264d:	49 89 57 38          	mov    %rdx,0x38(%r15)
    2651:	66 41 c7 47 40 72 2e 	movw   $0x2e72,0x40(%r15)
    2658:	41 c6 47 42 00       	movb   $0x0,0x42(%r15)
    265d:	44 89 e7             	mov    %r12d,%edi
    2660:	e8 ab e8 ff ff       	callq  f10 <close@plt>
    2665:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    266a:	e9 d7 fe ff ff       	jmpq   2546 <submitr+0x690>
    266f:	48 8d 9c 24 60 20 00 	lea    0x2060(%rsp),%rbx
    2676:	00 
    2677:	48 83 ec 08          	sub    $0x8,%rsp
    267b:	48 8d 84 24 68 40 00 	lea    0x4068(%rsp),%rax
    2682:	00 
    2683:	50                   	push   %rax
    2684:	ff 74 24 28          	pushq  0x28(%rsp)
    2688:	ff 74 24 38          	pushq  0x38(%rsp)
    268c:	4c 8b 4c 24 30       	mov    0x30(%rsp),%r9
    2691:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    2696:	48 8d 0d 13 09 00 00 	lea    0x913(%rip),%rcx        # 2fb0 <array.3418+0x3b0>
    269d:	ba 00 20 00 00       	mov    $0x2000,%edx
    26a2:	be 01 00 00 00       	mov    $0x1,%esi
    26a7:	48 89 df             	mov    %rbx,%rdi
    26aa:	b8 00 00 00 00       	mov    $0x0,%eax
    26af:	e8 6c e9 ff ff       	callq  1020 <__sprintf_chk@plt>
    26b4:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
    26bb:	b8 00 00 00 00       	mov    $0x0,%eax
    26c0:	48 89 df             	mov    %rbx,%rdi
    26c3:	f2 ae                	repnz scas %es:(%rdi),%al
    26c5:	48 f7 d1             	not    %rcx
    26c8:	48 89 cb             	mov    %rcx,%rbx
    26cb:	48 83 eb 01          	sub    $0x1,%rbx
    26cf:	48 83 c4 20          	add    $0x20,%rsp
    26d3:	48 89 dd             	mov    %rbx,%rbp
    26d6:	4c 8d ac 24 60 20 00 	lea    0x2060(%rsp),%r13
    26dd:	00 
    26de:	41 be 00 00 00 00    	mov    $0x0,%r14d
    26e4:	48 85 db             	test   %rbx,%rbx
    26e7:	0f 85 a9 fb ff ff    	jne    2296 <submitr+0x3e0>
    26ed:	e9 d3 fb ff ff       	jmpq   22c5 <submitr+0x40f>
    26f2:	e8 f9 e7 ff ff       	callq  ef0 <__stack_chk_fail@plt>

00000000000026f7 <init_timeout>:
    26f7:	85 ff                	test   %edi,%edi
    26f9:	74 25                	je     2720 <init_timeout+0x29>
    26fb:	53                   	push   %rbx
    26fc:	89 fb                	mov    %edi,%ebx
    26fe:	48 8d 35 c5 f6 ff ff 	lea    -0x93b(%rip),%rsi        # 1dca <sigalrm_handler>
    2705:	bf 0e 00 00 00       	mov    $0xe,%edi
    270a:	e8 31 e8 ff ff       	callq  f40 <signal@plt>
    270f:	85 db                	test   %ebx,%ebx
    2711:	bf 00 00 00 00       	mov    $0x0,%edi
    2716:	0f 49 fb             	cmovns %ebx,%edi
    2719:	e8 e2 e7 ff ff       	callq  f00 <alarm@plt>
    271e:	5b                   	pop    %rbx
    271f:	c3                   	retq   
    2720:	f3 c3                	repz retq 

0000000000002722 <init_driver>:
    2722:	41 54                	push   %r12
    2724:	55                   	push   %rbp
    2725:	53                   	push   %rbx
    2726:	48 83 ec 20          	sub    $0x20,%rsp
    272a:	49 89 fc             	mov    %rdi,%r12
    272d:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2734:	00 00 
    2736:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    273b:	31 c0                	xor    %eax,%eax
    273d:	be 01 00 00 00       	mov    $0x1,%esi
    2742:	bf 0d 00 00 00       	mov    $0xd,%edi
    2747:	e8 f4 e7 ff ff       	callq  f40 <signal@plt>
    274c:	be 01 00 00 00       	mov    $0x1,%esi
    2751:	bf 1d 00 00 00       	mov    $0x1d,%edi
    2756:	e8 e5 e7 ff ff       	callq  f40 <signal@plt>
    275b:	be 01 00 00 00       	mov    $0x1,%esi
    2760:	bf 1d 00 00 00       	mov    $0x1d,%edi
    2765:	e8 d6 e7 ff ff       	callq  f40 <signal@plt>
    276a:	ba 00 00 00 00       	mov    $0x0,%edx
    276f:	be 01 00 00 00       	mov    $0x1,%esi
    2774:	bf 02 00 00 00       	mov    $0x2,%edi
    2779:	e8 b2 e8 ff ff       	callq  1030 <socket@plt>
    277e:	85 c0                	test   %eax,%eax
    2780:	0f 88 a3 00 00 00    	js     2829 <init_driver+0x107>
    2786:	89 c3                	mov    %eax,%ebx
    2788:	48 8d 3d bf 08 00 00 	lea    0x8bf(%rip),%rdi        # 304e <array.3418+0x44e>
    278f:	e8 bc e7 ff ff       	callq  f50 <gethostbyname@plt>
    2794:	48 85 c0             	test   %rax,%rax
    2797:	0f 84 df 00 00 00    	je     287c <init_driver+0x15a>
    279d:	48 89 e5             	mov    %rsp,%rbp
    27a0:	48 c7 44 24 02 00 00 	movq   $0x0,0x2(%rsp)
    27a7:	00 00 
    27a9:	c7 45 0a 00 00 00 00 	movl   $0x0,0xa(%rbp)
    27b0:	66 c7 45 0e 00 00    	movw   $0x0,0xe(%rbp)
    27b6:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
    27bc:	48 63 50 14          	movslq 0x14(%rax),%rdx
    27c0:	48 8b 40 18          	mov    0x18(%rax),%rax
    27c4:	48 8d 7d 04          	lea    0x4(%rbp),%rdi
    27c8:	b9 0c 00 00 00       	mov    $0xc,%ecx
    27cd:	48 8b 30             	mov    (%rax),%rsi
    27d0:	e8 8b e7 ff ff       	callq  f60 <__memmove_chk@plt>
    27d5:	66 c7 44 24 02 3b 72 	movw   $0x723b,0x2(%rsp)
    27dc:	ba 10 00 00 00       	mov    $0x10,%edx
    27e1:	48 89 ee             	mov    %rbp,%rsi
    27e4:	89 df                	mov    %ebx,%edi
    27e6:	e8 f5 e7 ff ff       	callq  fe0 <connect@plt>
    27eb:	85 c0                	test   %eax,%eax
    27ed:	0f 88 fb 00 00 00    	js     28ee <init_driver+0x1cc>
    27f3:	89 df                	mov    %ebx,%edi
    27f5:	e8 16 e7 ff ff       	callq  f10 <close@plt>
    27fa:	66 41 c7 04 24 4f 4b 	movw   $0x4b4f,(%r12)
    2801:	41 c6 44 24 02 00    	movb   $0x0,0x2(%r12)
    2807:	b8 00 00 00 00       	mov    $0x0,%eax
    280c:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
    2811:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    2818:	00 00 
    281a:	0f 85 06 01 00 00    	jne    2926 <init_driver+0x204>
    2820:	48 83 c4 20          	add    $0x20,%rsp
    2824:	5b                   	pop    %rbx
    2825:	5d                   	pop    %rbp
    2826:	41 5c                	pop    %r12
    2828:	c3                   	retq   
    2829:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    2830:	3a 20 43 
    2833:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    283a:	20 75 6e 
    283d:	49 89 04 24          	mov    %rax,(%r12)
    2841:	49 89 54 24 08       	mov    %rdx,0x8(%r12)
    2846:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    284d:	74 6f 20 
    2850:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
    2857:	65 20 73 
    285a:	49 89 44 24 10       	mov    %rax,0x10(%r12)
    285f:	49 89 54 24 18       	mov    %rdx,0x18(%r12)
    2864:	41 c7 44 24 20 6f 63 	movl   $0x656b636f,0x20(%r12)
    286b:	6b 65 
    286d:	66 41 c7 44 24 24 74 	movw   $0x74,0x24(%r12)
    2874:	00 
    2875:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    287a:	eb 90                	jmp    280c <init_driver+0xea>
    287c:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
    2883:	3a 20 44 
    2886:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
    288d:	20 75 6e 
    2890:	49 89 04 24          	mov    %rax,(%r12)
    2894:	49 89 54 24 08       	mov    %rdx,0x8(%r12)
    2899:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    28a0:	74 6f 20 
    28a3:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
    28aa:	76 65 20 
    28ad:	49 89 44 24 10       	mov    %rax,0x10(%r12)
    28b2:	49 89 54 24 18       	mov    %rdx,0x18(%r12)
    28b7:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
    28be:	72 20 61 
    28c1:	49 89 44 24 20       	mov    %rax,0x20(%r12)
    28c6:	41 c7 44 24 28 64 64 	movl   $0x65726464,0x28(%r12)
    28cd:	72 65 
    28cf:	66 41 c7 44 24 2c 73 	movw   $0x7373,0x2c(%r12)
    28d6:	73 
    28d7:	41 c6 44 24 2e 00    	movb   $0x0,0x2e(%r12)
    28dd:	89 df                	mov    %ebx,%edi
    28df:	e8 2c e6 ff ff       	callq  f10 <close@plt>
    28e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    28e9:	e9 1e ff ff ff       	jmpq   280c <init_driver+0xea>
    28ee:	4c 8d 05 59 07 00 00 	lea    0x759(%rip),%r8        # 304e <array.3418+0x44e>
    28f5:	48 8d 0d 0c 07 00 00 	lea    0x70c(%rip),%rcx        # 3008 <array.3418+0x408>
    28fc:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
    2903:	be 01 00 00 00       	mov    $0x1,%esi
    2908:	4c 89 e7             	mov    %r12,%rdi
    290b:	b8 00 00 00 00       	mov    $0x0,%eax
    2910:	e8 0b e7 ff ff       	callq  1020 <__sprintf_chk@plt>
    2915:	89 df                	mov    %ebx,%edi
    2917:	e8 f4 e5 ff ff       	callq  f10 <close@plt>
    291c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2921:	e9 e6 fe ff ff       	jmpq   280c <init_driver+0xea>
    2926:	e8 c5 e5 ff ff       	callq  ef0 <__stack_chk_fail@plt>

000000000000292b <driver_post>:
    292b:	53                   	push   %rbx
    292c:	4c 89 c3             	mov    %r8,%rbx
    292f:	85 c9                	test   %ecx,%ecx
    2931:	75 17                	jne    294a <driver_post+0x1f>
    2933:	48 85 ff             	test   %rdi,%rdi
    2936:	74 05                	je     293d <driver_post+0x12>
    2938:	80 3f 00             	cmpb   $0x0,(%rdi)
    293b:	75 33                	jne    2970 <driver_post+0x45>
    293d:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
    2942:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
    2946:	89 c8                	mov    %ecx,%eax
    2948:	5b                   	pop    %rbx
    2949:	c3                   	retq   
    294a:	48 8d 35 11 07 00 00 	lea    0x711(%rip),%rsi        # 3062 <array.3418+0x462>
    2951:	bf 01 00 00 00       	mov    $0x1,%edi
    2956:	b8 00 00 00 00       	mov    $0x0,%eax
    295b:	e8 40 e6 ff ff       	callq  fa0 <__printf_chk@plt>
    2960:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
    2965:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
    2969:	b8 00 00 00 00       	mov    $0x0,%eax
    296e:	eb d8                	jmp    2948 <driver_post+0x1d>
    2970:	41 50                	push   %r8
    2972:	52                   	push   %rdx
    2973:	4c 8d 0d ff 06 00 00 	lea    0x6ff(%rip),%r9        # 3079 <array.3418+0x479>
    297a:	49 89 f0             	mov    %rsi,%r8
    297d:	48 89 f9             	mov    %rdi,%rcx
    2980:	48 8d 15 f9 06 00 00 	lea    0x6f9(%rip),%rdx        # 3080 <array.3418+0x480>
    2987:	be 72 3b 00 00       	mov    $0x3b72,%esi
    298c:	48 8d 3d bb 06 00 00 	lea    0x6bb(%rip),%rdi        # 304e <array.3418+0x44e>
    2993:	e8 1e f5 ff ff       	callq  1eb6 <submitr>
    2998:	48 83 c4 10          	add    $0x10,%rsp
    299c:	eb aa                	jmp    2948 <driver_post+0x1d>
    299e:	66 90                	xchg   %ax,%ax

00000000000029a0 <__libc_csu_init>:
    29a0:	41 57                	push   %r15
    29a2:	41 56                	push   %r14
    29a4:	49 89 d7             	mov    %rdx,%r15
    29a7:	41 55                	push   %r13
    29a9:	41 54                	push   %r12
    29ab:	4c 8d 25 36 13 20 00 	lea    0x201336(%rip),%r12        # 203ce8 <__frame_dummy_init_array_entry>
    29b2:	55                   	push   %rbp
    29b3:	48 8d 2d 36 13 20 00 	lea    0x201336(%rip),%rbp        # 203cf0 <__init_array_end>
    29ba:	53                   	push   %rbx
    29bb:	41 89 fd             	mov    %edi,%r13d
    29be:	49 89 f6             	mov    %rsi,%r14
    29c1:	4c 29 e5             	sub    %r12,%rbp
    29c4:	48 83 ec 08          	sub    $0x8,%rsp
    29c8:	48 c1 fd 03          	sar    $0x3,%rbp
    29cc:	e8 8f e4 ff ff       	callq  e60 <_init>
    29d1:	48 85 ed             	test   %rbp,%rbp
    29d4:	74 20                	je     29f6 <__libc_csu_init+0x56>
    29d6:	31 db                	xor    %ebx,%ebx
    29d8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
    29df:	00 
    29e0:	4c 89 fa             	mov    %r15,%rdx
    29e3:	4c 89 f6             	mov    %r14,%rsi
    29e6:	44 89 ef             	mov    %r13d,%edi
    29e9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
    29ed:	48 83 c3 01          	add    $0x1,%rbx
    29f1:	48 39 dd             	cmp    %rbx,%rbp
    29f4:	75 ea                	jne    29e0 <__libc_csu_init+0x40>
    29f6:	48 83 c4 08          	add    $0x8,%rsp
    29fa:	5b                   	pop    %rbx
    29fb:	5d                   	pop    %rbp
    29fc:	41 5c                	pop    %r12
    29fe:	41 5d                	pop    %r13
    2a00:	41 5e                	pop    %r14
    2a02:	41 5f                	pop    %r15
    2a04:	c3                   	retq   
    2a05:	90                   	nop
    2a06:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
    2a0d:	00 00 00 

0000000000002a10 <__libc_csu_fini>:
    2a10:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000002a14 <_fini>:
    2a14:	48 83 ec 08          	sub    $0x8,%rsp
    2a18:	48 83 c4 08          	add    $0x8,%rsp
    2a1c:	c3                   	retq   
