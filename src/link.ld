/*
 * link.ld
 * taken from https://github.com/chipsetx/Simple-Kernel-in-C-and-Assembly/blob/master/link.ld
 */

OUTPUT_FORMAT(elf32-i386)
ENTRY(start)
SECTIONS
{
	. = 0x100000;
	.text : {*(.text)}
	.data : {*(.data)}
	.bss  : {*(.bss)}
}
