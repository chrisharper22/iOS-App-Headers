//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGNetworkContainerCacheInfo, IGNetworkContainerCacheMetadata, IGNetworkSourceContainer, IGViewController;

@protocol IGNetworkSourceContainerDelegate <NSObject>
- (void)didConsumeNetworkSourceInContainer:(IGNetworkSourceContainer *)arg1;
- (void)didCompleteRequestWithNetworkSourceInContainer:(IGNetworkSourceContainer *)arg1 completionType:(long long)arg2;
- (void)didStartRequestWithNetworkSourceInContainer:(IGNetworkSourceContainer *)arg1 action:(long long)arg2;
- (IGNetworkContainerCacheInfo *)resolveCacheInfoForContainer:(IGNetworkSourceContainer *)arg1 metadata:(IGNetworkContainerCacheMetadata *)arg2;
- (long long)resolveCacheStateForContainer:(IGNetworkSourceContainer *)arg1 metadata:(IGNetworkContainerCacheMetadata *)arg2;
- (void)cleanupCacheRecordsForContainer:(IGNetworkSourceContainer *)arg1;
- (void)containerDidConnectToViewController:(IGNetworkSourceContainer *)arg1 viewController:(IGViewController *)arg2;
@end

