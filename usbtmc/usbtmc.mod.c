#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9c3f02a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x373c514d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x69b610f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x7afae6a6, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2f287f0d, __VMLINUX_SYMBOL_STR(copy_to_user) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x731a3677, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xc1c329e9, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4e270e4f, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x92cd0937, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x85dafab0, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba966047, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x43a69ab4, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x201335de, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xbb05a5d4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x4784cb4c, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "29FF6445B91F1A4A0D7CD35");
