# KernelSU

<img src="https://kernelsu.org/logo.png" style="width: 96px;" alt="logo">

## 项目构建信息

- 设备 

  Pixel 5 (redfin) 

- AOSP 树中的二进制文件路径

  device/google/redbull-kernel	

- 仓库分支 

  android-msm-redbull-4.19-android14-qpr3  

- 系统构建版本
 
  14.0.0（UP1A.231105.001.B2，2024 年 2 月）




## 警告⚠️

- 由于使用了 专属的 vendor_ramdisk 和 ramdisk 所以只兼容 Pixel 5 设备

- 不兼容 Pixel 5a (barbet) 
- 不兼容 Pixel 4a (5G) (bramble) 


## 使用方法

- fastboot flash boot boot.img

- fastboot flash dtbo dtbo.img
  
- fastboot flash vendor_boot vendor_boot.img
  
- fastboot reboot

- [KernelSU.apk](https://github.com/tiann/KernelSU/releases)：KernelSU APK下载。
