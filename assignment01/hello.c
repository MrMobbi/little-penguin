
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL"); // General public license
MODULE_AUTHOR("Mathias Julliat");
MODULE_DESCRIPTION("Hello World!");

static int	__init hello_init(void)
{
	printk(KERN_INFO "Hello World!\n");
	return (0);
}

static void	__exit	hello_exit(void)
{
	printk(KERN_INFO "Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_exit);
