#include <linux/kernel.h>
#include <linux/module.h>

int init_hello(void)
{
	printk(KERN_DEBUG "HELLO WORLD\n");
	return 0;
}

void exit_hello(void)
{
	printk(KERN_DEBUG "REMOVE MODULE HELLO WORLD\n");
}

MODULE_LICENSE("GPL");
module_init(init_hello);
module_exit(exit_hello);
