Install dependencies for the kernel headers in C. 


```
apt-get install build-essential linux-headers-$(uname -r)
```


then simply type 
```
make
```

To see if the Kernel Module is actually active simply look at all oof the kernel modules currently loaded unto the system with the ```lsmod``` command. 

or alternatively you could simply type 

```
lsmod | grep hello
 ```

and find the specific module in the list. 

This module simply prints hello world to the kernel debug console. 
