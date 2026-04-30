#include <linux/kernel.h>
#include <linux/module.h>

/**
 * Called on injection.
 */
int init_module()
{
    /* What can we use if not KERN_INFO?
     */
    printk(KERN_INFO "HelloWorld!\n");

    /* You must return 0 here, otherwise the kernel will think 
     * that the module failed to initialise and it won't be loaded.
     */
    return 0;
}

/**
 * Called on removal.
 */
void cleanup_module()
{
    printk(KERN_INFO "GoodByeWorld!\n");
}
