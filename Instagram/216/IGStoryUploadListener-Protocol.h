//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGScopedListener-Protocol.h"

@class IGStoryReelOwner, NSArray;

@protocol IGStoryUploadListener <IGScopedListener>
- (void)storyUploadStartedWithTaggedProducts:(NSArray *)arg1 localMediaIdentifiers:(NSArray *)arg2 entryPoint:(long long)arg3;
- (void)storyUploadStartedWithReelOwner:(IGStoryReelOwner *)arg1;
- (void)storyUploadRemovedFromReelOwner:(IGStoryReelOwner *)arg1;
@end

