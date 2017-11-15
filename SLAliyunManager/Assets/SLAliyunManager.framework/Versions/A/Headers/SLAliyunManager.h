//
//  SLAliyunManager.h
//  Pods
//
//  Created by chenjm on 2017/4/7.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SLAliyunObject.h"

typedef NS_ENUM(NSInteger, SLAliyunUploadState) {
    SLAliyunUploadStateDraft = 0,
    SLAliyunUploadStateSuccess = 1,
    SLAliyunUploadStateUploading = 2,
    SLAliyunUploadStateFailure = -1,
    SLAliyunUploadStateCancel = -2,
};

#define SLAliyunUploadKeyInfo	@{	@"id": @"integer PRIMARY KEY AUTOINCREMENT", \
									@"group_key": @"text", \
									@"total_byte_sent": @"text", \
									@"total_bytes_expected_to_send": @"text",\
									@"url": @"text", \
									@"object_key": @"text", \
									@"file_name": @"text",	\
									@"bucket_name": @"text",\
									@"state": @"integer" \
									}


extern NSString * _Nonnull const SLAliyunUploadNotification;


@interface SLAliyunManager : NSObject
@property (nonatomic, assign) uint32_t maxRetryCount; // 重试最大次数，默认两次
@property (nonatomic, assign) NSTimeInterval timeoutIntervalForRequest; // 请求超时，默认30s
@property (nonatomic, assign) NSTimeInterval timeoutIntervalForResource; // 单个Object下载的最长持续时间，默认24小时
@property (nonatomic, copy) NSString * _Nonnull endPoint;
@property (nonatomic, copy) NSString *_Nonnull accessKey;
@property (nonatomic, copy) NSString *_Nonnull secretKey;
@property (nonatomic, copy) NSString *_Nonnull token;
@property (nonatomic, copy) NSString *_Nonnull uploadDirectory;

/**
 * @brief 单例
 */
+ (SLAliyunManager *_Nonnull)shareInstance;

/**
 * @brief 注册
 * @param userId 用户id
 */
- (void)registerWithUserId:(nonnull NSString *)userId;

/**
 * @brief 上传图组
 * @param objects [<SLAliyunObject>, <SLAliyunObject>,...];
 * @param groupKey 图组的唯一key
 */
- (void)putImagesWithObjects:(nonnull NSArray *)objects groupKey:(nonnull NSString *)groupKey;

/**
 * @biref 重新上传组图 （url使用旧的url）
 * @param groupKey 图组的唯一key
 */
- (void)reputImagesWithGroupKey:(nonnull NSString *)groupKey;

/**
 * @brief 删除并取消图组上传
 * @param groupKey 图组的唯一key
 */
- (void)deleteWithGroupKey:(nonnull NSString *)groupKey;

/**
 * @brief 取消图组上传
 * @param groupKey 图组的唯一key
 */
- (void)cancelWithGroupKey:(nonnull NSString *)groupKey;


#pragma mark - 获取

/**
 * @brief 获取最新的图组的唯一key
 */
- (NSString *_Nullable)getLastGroupKey;

/**
 * @brief 获取最新的图组的信息
 */
- (NSArray *_Nullable)getLastGroupInfos;

/**
 * @brief 获取图组的信息
 */
- (NSArray *_Nullable)getGroupInfosWithGroupKey:(NSString *_Nullable)groupKey;

#pragma mark - 任务状态

/**
 * @brief 是否取消了上传图组
 * @param groupKey 图组的唯一key
 */
- (BOOL)isGroupCanceledWithGroupKey:(nonnull NSString *)groupKey;

/**
 获取上传成功的图片数
 
 @param groupKey 组的唯一key
 @return 上传成功的图片数
 */
- (NSInteger)groupUploadedPics:(nonnull NSString *)groupKey;

/**
 * @brief 是否上传图组成功
 * @param groupKey 图组的唯一key
 */
- (BOOL)isGroupSuccessWithGroupKey:(nonnull NSString *)groupKey;

/**
 * @brief 图组的进度
 * @param groupKey 图组的唯一key
 */
- (CGFloat)groupProgressWithGroupKey:(nonnull NSString *)groupKey;

@end
