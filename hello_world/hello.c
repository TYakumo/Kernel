#include <linux/init.h>  
#include <linux/module.h>  
      
MODULE_LICENSE("Dual BSD/GPL");  
      
static int __init hello_init(void)  
{  
    printk(KERN_INFO "Hello, world!\n");  
    return 0;  
}  
      
static void __exit susser_tod_exit(void)  
{  
    printk(KERN_INFO "Good bye, world!\n");  
}  
      
module_init(hello_init);  
module_exit(susser_tod_exit);  
