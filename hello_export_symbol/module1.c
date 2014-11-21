#include <linux/init.h> 
#include <linux/module.h> 

MODULE_LICENSE("Dual BSD/GPL"); 
static int module1_func(void) 
{ 
	printk(KERN_INFO "Hey!\n"); 
	return 0; 
} 
EXPORT_SYMBOL(module1_func); 

static int __init hello_init(void) 
{ 
    printk(KERN_ALERT "Hello, world(module1)\n"); 
    return 0; 
} 

static void __exit hello_exit(void) 
{ 
    printk(KERN_ALERT "Goodbye, cruel world(module1)\n"); 
} 

module_init(hello_init); 
module_exit(hello_exit); 
