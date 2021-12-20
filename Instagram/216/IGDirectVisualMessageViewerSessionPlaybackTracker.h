//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet, NSString;

@interface IGDirectVisualMessageViewerSessionPlaybackTracker : NSObject
{
    CDUnknownBlockType _entryPointFilter;
    CDUnknownBlockType _resetReasonFilter;
    NSMutableSet *_viewedVisualMessageKeys;
    NSMutableOrderedSet *_viewedVisualMessageThreadIds;
}

- (void).cxx_destruct;
- (void)resetForReason:(long long)arg1;
- (void)viewedVisualMessage:(id)arg1 entryPoint:(long long)arg2;
- (id)replayableViewedVisualMessagesForThreadId:(id)arg1 publishedMessageSet:(id)arg2;
@property(readonly, copy, nonatomic) NSString *threadIdOfLastViewedUnseenVisualMessage;
- (_Bool)hasViewedVisualMessagesForThreadId:(id)arg1;
- (_Bool)hasViewedVisualMessageWithKey:(id)arg1;
- (id)viewedVisualMessages;
- (id)initWithEntryPointFilter:(CDUnknownBlockType)arg1 resetReasonFilter:(CDUnknownBlockType)arg2;

@end

