#include <linux/init.h> 
#include <linux/module.h> 

MODULE_LICENSE("Dual BSD/GPL");
extern int module1_func(void); 
static int module2_func(void) 
{
	module1_func(); 
	printk(KERN_INFO "Go go power rangers!\n"); 
	return 0; 
} 
EXPORT_SYMBOL(module2_func); 

static int __init hello_init(void) 
{
	module2_func(); 
    printk(KERN_ALERT "Hello, world(module2)\n"); 
    return 0; 
} 

static void __exit hello_exit(void) 
{ 
    printk(KERN_ALERT "Goodbye, cruel world(module2)\n"); 
} 

module_init(hello_init); 
module_exit(hello_exit); 
