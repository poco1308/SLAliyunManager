#
# Be sure to run `pod lib lint SLAliyunManager.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SLAliyunManager'
  s.version          = '0.2.11'
  s.summary          = '阿里云串行上传图片.'

  s.ios.deployment_target = '8.0'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
阿里云串行上传图片。由于阿里云sdk只提供并行请求的功能，在多图上传时，需要使用串行的办法来减少系统压力，并且在网络不稳定时，可以只针对上传失败的图再次上传，而已上传的图片不用再次上传。
                       DESC

  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'chenjm' => 'chenjm2@adnonstop.com' }

  s.homepage         = 'http://gitlab.adnonstop.com/openSDKs/SLAliyunManager'
  s.source           = { :git => 'http://gitlab.adnonstop.com/openSDKs/SLAliyunManager.git', :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'SLAliyunManager/Assets/**/*.framework'

  s.frameworks = 'UIKit', 'Foundation'
  s.dependency 'AliyunOSSiOS'
  s.dependency 'SLDBManager'

end
