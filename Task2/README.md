STEPS :

 - Create a config file (.config) using the old config file

 ``` 
   make olddefconfig
 ```
 
  - Compile the kernel and modules
  
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
  ..* Can also copy kernel and initrd to /boot
  ..* Create a intrd image using dracut/mkinitrd

    ```
    initramfs 
    ```

-----------------

   - Formating USB
  
   - Install grub (/boot/grub on the partition)
   
```
```
  
   - Create a grub config (grub.cfg or menu.lst)
  
  ```
   Sample:
   root=(hd0,0)
   kernel /boot/vmlinuz-... root=UUID=.....
   initrd /boot/initrd
  ```
  
  ----------------------
  
 TODO: rootfs documentation
