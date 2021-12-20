//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBVideoUploadSettings;
@protocol FBMediaProcessing, FBMediaProcessingDelegate;

@protocol FBMediaProcessing <NSObject>
@property(nonatomic) __weak id <FBMediaProcessingDelegate> delegate;
- (_Bool)shouldRestartUploadForNewMediaProcessor:(id <FBMediaProcessing>)arg1;
- (unsigned long long)estimatedOutputFileSize;
- (void)cleanup;
- (void)cancel;
- (void)startProcessing:(FBVideoUploadSettings *)arg1;
@end

