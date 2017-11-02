//
//  SLAliyunObject.h
//  Pods
//
//  Created by chenjm on 2017/4/7.
//
//

#import <Foundation/Foundation.h>

@interface SLAliyunObject : NSObject
@property (nonatomic, copy) NSString *bucketName;
@property (nonatomic, copy) NSString *objectKey;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, copy) NSString *urlString;

@end
