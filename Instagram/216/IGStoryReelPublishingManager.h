//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMediaDeletedListener-Protocol.h"
#import "IGMediaHiddenListener-Protocol.h"
#import "IGPostShareListener-Protocol.h"
#import "IGStorySharePostListener-Protocol.h"
#import "IGStoryUploadListener-Protocol.h"
#import "IGUploadsUnarchiveListener-Protocol.h"

@class IGPostCreationManager, IGStoryReelStore, IGUserStore, NSMutableSet, NSString;
@protocol IGMediaDeletedAnnouncer, IGMediaHiddenAnnouncer, IGStoryReelPublishingManagerDelegate, IGStorySharePostAnnouncer, IGStoryUploadAnnouncer, IGUploadsUnarchiveAnnouncer, IGUserFeatureSets;

@interface IGStoryReelPublishingManager : NSObject <IGMediaDeletedListener, IGMediaHiddenListener, IGPostShareListener, IGStorySharePostListener, IGStoryUploadListener, IGUploadsUnarchiveListener>
{
    NSString *_currentUserPk;
    IGUserStore *_userStore;
    IGStoryReelStore *_reelStore;
    IGPostCreationManager *_postCreationManager;
    id <IGUploadsUnarchiveAnnouncer> _uploadsUnarchiveAnnouncer;
    id <IGStoryUploadAnnouncer> _storyUploadAnnouncer;
    id <IGStorySharePostAnnouncer> _storySharePostAnnouncer;
    id <IGMediaHiddenAnnouncer> _mediaHiddenAnnouncer;
    id <IGMediaDeletedAnnouncer> _mediaDeletedAnnouncer;
    NSMutableSet *_pendingUploadReels;
    id <IGUserFeatureSets> _featureSets;
    id <IGStoryReelPublishingManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryReelPublishingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeDuplicatePendingUploadsForReel:(id)arg1;
- (void)_updatePendingItemsForReel:(id)arg1;
- (void)_setupStoryUploadObservationsForReel:(id)arg1;
- (void)_removeFeedItemIfNeeded:(id)arg1 storyReelPK:(id)arg2;
- (id)_currentUserReel;
- (void)postShare:(id)arg1 didUpdateStatus:(long long)arg2 serverResponse:(id)arg3;
- (void)postShare:(id)arg1 didUpdateProgress:(double)arg2;
- (void)postShare:(id)arg1 didRenderVideoAtUrl:(id)arg2;
- (void)uploadsUnarchived;
- (void)storyUploadStartedWithTaggedProducts:(id)arg1 localMediaIdentifiers:(id)arg2 entryPoint:(long long)arg3;
- (void)storyUploadRemovedFromReelOwner:(id)arg1;
- (void)storyUploadStartedWithReelOwner:(id)arg1;
- (void)storyItemPosted:(id)arg1 videoFileURL:(id)arg2 shareTypeInt:(long long)arg3 mediaData:(id)arg4 postShareId:(id)arg5 reelOwner:(id)arg6;
- (void)_mutateReel:(id)arg1 mutation:(CDUnknownBlockType)arg2;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3 reason:(long long)arg4;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (id)pendingUploadReels;
- (void)start;
- (id)initWithCurrentUserPk:(id)arg1 userStore:(id)arg2 storyReelStore:(id)arg3 postCreationManager:(id)arg4 uploadsUnarchiveAnnouncer:(id)arg5 storyUploadAnnouncer:(id)arg6 storySharePostAnnouncer:(id)arg7 mediaHiddenAnnouncer:(id)arg8 mediaDeletedAnnouncer:(id)arg9 featureSets:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

