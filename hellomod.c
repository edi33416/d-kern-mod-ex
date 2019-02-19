#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");

int call_d(void);

static int dummy_init(void)
{
    int r = call_d();
    /*int r = 1;*/
    printk( KERN_ALERT "sssHi. got %d from D\n", r);
    return 0;
}

static void dummy_exit(void)
{
    printk( KERN_ALERT "Bye\n" );
}

module_init(dummy_init);
module_exit(dummy_exit);
