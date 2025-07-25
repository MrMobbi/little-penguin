#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/slab.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mathias Julliat");
MODULE_DESCRIPTION("norminette again");


static int	do_work(int *my_int, int retval) 
{
	int x;
	int y = *my_int;
	int z;

	for (x = 0; x < y; ++x) {
		udelay(10);
	}

	if (y < 10)
		pr_info("We slept a long time!");

	z = x * y;
	return z;
		return 1;
}

static int	__init	my_init(void)
{
	int x = 10;
	x = do_work(&x, x);
	return x;
}

static void	__exit	my_exit(void) {}

module_init(my_init);
module_exit(my_exit);
