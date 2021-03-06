//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserStore, NSString;
@protocol IGAPIClient, IGLiveBroadcastViewerListQueryServiceDelegate;

@interface IGLiveBroadcastViewerListQueryService : NSObject
{
    IGUserStore *_userStore;
    id <IGAPIClient> _networker;
    NSString *_broadcastId;
    _Bool _shouldRepeatFetch;
    long long _viewersThreshold;
    id <IGLiveBroadcastViewerListQueryServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveBroadcastViewerListQueryServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_fetchViewerRepeatlyIfNeededWithInterval:(double)arg1;
- (void)_scheduleFetchAfterDelay:(double)arg1;
- (void)stopFetchingViewerListRepeatedly;
- (void)_didLoadFinalViewerListWithResponse:(id)arg1;
- (void)fetchFinalViewerList;
- (void)_didLoadViewerList:(id)arg1 repeatBlock:(CDUnknownBlockType)arg2;
- (void)fetchViewerListWithInterval:(double)arg1 viewersThreshold:(long long)arg2 repeats:(_Bool)arg3;
- (void)fetchViewerList;
- (id)initWithBroadcastId:(id)arg1 networker:(id)arg2 userStore:(id)arg3;

@end

