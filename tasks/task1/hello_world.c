#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("carlosm");
MODULE_DESCRIPTION("Hello World Module");
MODULE_VERSION("0.1");

// __init, __exit are macros e.g. decorators

static int __init hello_init(void) {
  printk(KERN_INFO "hello_world: Hello World!\n");
  return 0;
}

static void __exit hello_exit(void) {
  printk(KERN_INFO "hello_world: Goodbye World!\n");
}

module_init(hello_init);
module_exit(hello_exit);

