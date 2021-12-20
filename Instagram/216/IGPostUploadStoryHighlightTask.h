//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPostUploadCompleteTask-Protocol.h"

@class IGMedia, IGUserSession, NSString;

@interface IGPostUploadStoryHighlightTask : NSObject <IGPostUploadCompleteTask>
{
    _Bool _shouldAddToReel;
    NSString *_reelID;
    IGUserSession *_userSession;
    _Bool _shouldExecuteImmediately;
    NSString *_taskID;
    IGMedia *_media;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) _Bool shouldExecuteImmediately; // @synthesize shouldExecuteImmediately=_shouldExecuteImmediately;
- (void)execute;
- (id)initWithMedia:(id)arg1 reelID:(id)arg2 userSession:(id)arg3 shouldAddToReel:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

