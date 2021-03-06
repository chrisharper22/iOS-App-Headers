//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGPostDataProvider-Protocol.h>

@class IGCache, NSOrderedSet, NSString;
@protocol IGUserLauncherSet;

@interface IGPostDataStore : NSObject <IGPostDataProvider>
{
    IGCache *_largeDataCache;
    IGCache *_smallDataCache;
    id <IGUserLauncherSet> _launcherSet;
    _Bool _shouldCachePostIDs;
    NSOrderedSet *_cachedPostIDs;
}

- (void).cxx_destruct;
- (id)_postIds;
- (void)_addPostId:(id)arg1;
- (void)removePostId:(id)arg1;
- (id)postIds;
- (id)mediaIdToHasEditsForPostId:(id)arg1;
- (void)setMediaIdToHasEdits:(id)arg1 postId:(id)arg2;
- (id)previewImageSourceForPostId:(id)arg1;
- (void)setPreviewImageSource:(id)arg1 postId:(id)arg2;
- (id)postSessionContextForPostId:(id)arg1;
- (void)setPostSessionContext:(id)arg1 postId:(id)arg2;
- (id)uploadCompositionForPostId:(id)arg1;
- (void)setUploadComposition:(id)arg1 postId:(id)arg2;
- (id)initWithCachePath:(id)arg1 cacheLimits:(id)arg2 launcherSet:(id)arg3 unarchiverDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

