//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@protocol FBARFaceTrackingModelConfiguring <NSObject, NSSecureCoding>
@property(readonly, copy, nonatomic) NSString *expressionFittingModelFilePath;
@property(readonly, copy, nonatomic) NSDictionary *cxxModelFilePaths;
- (id)copyWithExpressionFittingModelPath:(NSString *)arg1;
@end

