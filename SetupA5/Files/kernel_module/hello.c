#include <linux/module.h>
#include <linux/kernel.h>

int initialization(void)
{
    printk(KERN_INFO "Hello Khusmeet Ahluwalia. \n");
    return 0;
}

void cleanup(void)
{
    printk(KERN_INFO "Bye-bye Khusmeet Ahluwalia.\n");
}

module_init(initialization);
module_exit(cleanup);

MODULE_LICENSE("GPL");
