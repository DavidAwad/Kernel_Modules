#The Ubiquitous Hello World Module


Install dependencies for the kernel headers in C. 


```
apt-get install build-essential linux-headers-$(uname -r)
```


then simply type 
```
make
```

Once its done you can type 
``` 
sudo insmod hello.ko

dsmeg | tail -1
```




or alternatively you could simply type 

```
lsmod | grep hello
 ```

and find the specific module in the list. 


To remove the module you can type

```
sudo rmmod hello.ko
```


This module simply prints hello world to the kernel debug console. 
