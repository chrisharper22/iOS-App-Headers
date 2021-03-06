//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;
@protocol FBMediaItemUploadFlowSessionProtocol, FBMediaProcessing, FBMediaUploadSettingsFetching, FBMediaUploading;

@protocol FBMediaItemUploadFlowSessionProtocol <NSObject>
@property(readonly, nonatomic) double uploadSuccessTime;
@property(readonly, nonatomic) NSString *assetID;
- (void)updateToIsPublishingUpload;
- (_Bool)shouldRestartUploadFlowForAssetID:(NSString *)arg1 mediaProcessor:(id <FBMediaProcessing>)arg2 mediaUploader:(id <FBMediaUploading>)arg3 settingsFetcher:(id <FBMediaUploadSettingsFetching>)arg4 preferredQuality:(unsigned long long)arg5;
- (id <FBMediaItemUploadFlowSessionProtocol>)cloneSessionForRetry;
- (unsigned long long)uploadQuality;
- (NSString *)uploadSessionID;
- (NSString *)mediaFBID;
- (float)progress;
- (unsigned long long)state;
- (void)cancelWithCancellationReason:(long long)arg1;
- (void)start;
@end

