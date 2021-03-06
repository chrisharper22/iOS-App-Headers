//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPostCreationManagerListener-Protocol.h"
#import "IGPostShareListener-Protocol.h"

@class IGMediaUploadPerformanceLogger, IGPostCreationManager, NSArray, NSCache, NSString;
@protocol IGTVUploadStatusAnnouncer;

@interface IGTVPendingUploadManager : NSObject <IGPostShareListener, IGPostCreationManagerListener>
{
    IGPostCreationManager *_postCreationManager;
    id <IGTVUploadStatusAnnouncer> _uploadStatusAnnouncer;
    NSCache *_cachedImages;
    IGMediaUploadPerformanceLogger *_mediaUploadPerformanceLogger;
}

- (void).cxx_destruct;
- (void)_listenToPostShares;
- (id)_pendingPostShares;
- (id)_allPostShares;
- (void)_announceUploadStatusDidChangeWithPostShare:(id)arg1;
- (void)postShare:(id)arg1 didRenderVideoAtUrl:(id)arg2;
- (void)postShare:(id)arg1 didUpdateProgress:(double)arg2;
- (void)postShare:(id)arg1 didUpdateStatus:(long long)arg2 serverResponse:(id)arg3;
- (void)postCreationManager:(id)arg1 post:(id)arg2 carouselDidRenderVideoUrl:(id)arg3 hasEdits:(_Bool)arg4;
- (void)postCreationManager:(id)arg1 post:(id)arg2 carouselDidRenderImageSource:(id)arg3 hasEdits:(_Bool)arg4;
- (void)postCreationManagerDidResumeArchivedPosts:(id)arg1;
- (void)postCreationManager:(id)arg1 didAddShare:(id)arg2;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)retryUploadWithIdentifier:(id)arg1;
@property(readonly, nonatomic) long long uploadStatus;
@property(readonly, nonatomic) NSArray *pendingUploadItems;
- (void)setup;
- (id)initWithPostCreationManager:(id)arg1 uploadStatusAnnouncer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

