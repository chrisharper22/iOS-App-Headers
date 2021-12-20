//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedDraftManager, IGImageUploadSource, IGUploadOffProcessNetworkRequestUserScopedObjects, NSDictionary, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGBackgroundRenderIGLContextProvider, IGNetworking, IGPostAnalyticsProvider, IGUploadTaskListener, IGUserFeatureSets, OS_dispatch_queue;

@interface IGUploadCoverPhotoOperationFactory : NSObject
{
    NSString *_taskId;
    NSString *_uploadId;
    NSString *_waterfallId;
    NSDictionary *_uploadParams;
    id <IGNetworking> _networker;
    NSObject<OS_dispatch_queue> *_executingQueue;
    id <IGPostAnalyticsProvider> _analyticsProvider;
    id <IGUploadTaskListener> _uploadTaskListener;
    id <IGUserFeatureSets> _featureSets;
    NSString *_userPk;
    id <IGBackgroundRenderIGLContextProvider> _iglContextProvider;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGFeedDraftManager *_feedDraftManager;
    IGUploadOffProcessNetworkRequestUserScopedObjects *_offProcessNetworkRequestDeps;
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    IGImageUploadSource *_coverImageSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGImageUploadSource *coverImageSource; // @synthesize coverImageSource=_coverImageSource;
- (id)createOperation;
- (id)initWithTaskId:(id)arg1 uploadId:(id)arg2 waterfallId:(id)arg3 uploadParams:(id)arg4 networker:(id)arg5 executingQueue:(id)arg6 userPk:(id)arg7 iglContextProvider:(id)arg8 offProcessNetworkRequestDeps:(id)arg9 feedDraftManager:(id)arg10 analyticsLogger:(id)arg11 analyticsProvider:(id)arg12 uploadTaskListener:(id)arg13 featureSets:(id)arg14;

@end

