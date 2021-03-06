//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPostSessionListener-Protocol.h"

@class IGPostCreationManager, NSMutableDictionary, NSString;
@protocol IGScheduler;

@interface IGSundialDraftPostObserver : NSObject <IGPostSessionListener>
{
    NSMutableDictionary *_mapPostIdToDraftIdentifier;
    IGPostCreationManager *_postCreationManager;
    CDUnknownBlockType _draftPostSuccess;
    id <IGScheduler> _scheduler;
}

- (void).cxx_destruct;
- (void)postSession:(id)arg1 didRenderVideoAtUrl:(id)arg2;
- (void)postSession:(id)arg1 didUpdateUploadProgress:(double)arg2;
- (void)postSession:(id)arg1 didUpdateUploadStatus:(long long)arg2 error:(id)arg3;
- (void)startObservingPost:(id)arg1 forDraftIdentifier:(id)arg2;
- (id)initWithPostCreationManager:(id)arg1 scheduler:(id)arg2 draftPostSuccess:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

