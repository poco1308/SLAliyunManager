# SLAliyunManager

[![CI Status](http://img.shields.io/travis/chenjm/SLAliyunManager.svg?style=flat)](https://travis-ci.org/chenjm/SLAliyunManager)
[![Version](https://img.shields.io/cocoapods/v/SLAliyunManager.svg?style=flat)](http://cocoapods.org/pods/SLAliyunManager)
[![License](https://img.shields.io/cocoapods/l/SLAliyunManager.svg?style=flat)](http://cocoapods.org/pods/SLAliyunManager)
[![Platform](https://img.shields.io/cocoapods/p/SLAliyunManager.svg?style=flat)](http://cocoapods.org/pods/SLAliyunManager)

## 打包

```shell
IS_SOURCE=1 pod package SLAliyunManager.podspec --embedded --spec-sources=http://gitlab.adnonstop.com/SLLibrarySpecrepos/Specrepo.git,https://github.com/CocoaPods/Specs.git --verbose --force
```

## 推送

```shell
IS_SOURCE=1 pod repo push specs SLAliyunManager.podspec --allow-warnings --sources=http://gitlab.adnonstop.com/SLLibrarySpecrepos/Specrepo.git,https://github.com/CocoaPods/Specs.git --use-libraries
```

## 版本0.2.2

开启MD5校验功能，防止上传出现坏图；http协议改成https

## 版本0.2.0

开启crc64校验功能，防止上传出现坏图

## 版本0.1.8

上传资源超时设置为60s

## 版本0.1.7

修改导入framework编译出错的bug

## 版本0.1.6

修改仓库下载路径

## 版本0.1.4

修改bug

## 版本0.1.3

获取上传成功的图片数的接口

## 版本0.1.2

修改域名

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

SLAliyunManager is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "SLAliyunManager"
```

## Author

chenjm, chenjm2@adnonstop.com

## License

SLAliyunManager is available under the MIT license. See the LICENSE file for more info.


