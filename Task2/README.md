## Steps to compile Kernel:

 - Create a config file (.config) using the old config file

 ``` 
   make olddefconfig
 ```
 
  - Compile the kernel and modules (Note: Do not compile as root)
  
  ```
    make or make -j8
    and 
    make modules
  ```
  
  - Install the modules first (files in /lib/modules used to create initrd image) 
 
 ```
   make INSTALL_MOD_PATH=..... modules_install 
   or
   make modules_install
 ```
 
  - Install (install vmlinuz and initrd in /boot [creates vmlinuz, initrd, config, SystemMap files])
  
  ```
    make INSTALL_PATH=..... install
    or
    make install
  ```

   - Note:
    1. Can also copy kernel and initrd to /boot
    2. Create a intrd image using dracut/mkinitrd

```
       update-initramfs -c -k <version>
       or
       mkinitramfs -o initrd.img-.....    
```

-----------------

   - Formating USB
   
```
   fdisk -l
   dd if=/dev/zero of=/dev/sdc bs=512
   fdisk /dev/sdc
        options: (also set boot flag)
        n add a new partition
        p primary type partition
          partition num:1
          first sector:...
          last sector:...
        t change partition system id
           linux
        v verify partition
        w write partition
```

   - Install grub (/boot/grub on the partition)
   
```
   grub-install --recheck --root-directory=...mount... --no-floppy /dev/sdc1
```
  
   - Create a grub config (grub.cfg or menu.lst)
  
  ```
   Sample:
   root=(hd0,0)
   kernel /boot/vmlinuz-... root=UUID=.....
   initrd /boot/initrd
   
   grub-mkconfig -o ....path..of grub.cfg on mount....
  ```
  
  ----------------------
  
 TODO: rootfs documentation
