#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Awad");
MODULE_DESCRIPTION("Hello World Module");

static int __init hello_init(void){
    printk(KERN_INFO "Hello World!\n");
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_cleanup(void){
    //printk(KERN_INFO "Cleaning up module.\n"); 
}

module_init(hello_init);

//exit the module after we've performed the functions we've needed to.
module_exit(hello_cleanup);
