//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectKeyRange, IGDirectPublishedMessageSet, IGDirectThreadMetadata, NSDate, NSOrderedSet, NSString;

@interface IGDirectPublishedThreadBuilder : NSObject
{
    _Bool _shouldRecalculateMessagesInCurrentThreadRange;
    NSString *_threadId;
    NSString *_viewerId;
    NSString *_threadIdV2ForPaging;
    IGDirectThreadMetadata *_metadata;
    IGDirectKeyRange *_threadMessagesRange;
    IGDirectPublishedMessageSet *_publishedMessageSet;
    NSOrderedSet *_publishedMessagesInCurrentThreadRange;
    NSString *_oldestReplayableVisualMessageCursor;
    NSString *_oldestUnseenVisualMessageCursor;
    NSString *_mostRecentUnseenVisualMessageCursor;
    IGDirectKeyRange *_unseenVisualMessageItemRange;
    long long _unseenVisualMessageServerCount;
    NSDate *_lastVisualMessageTimeStamp;
    IGDirectKeyRange *_messageIslandRange;
    NSString *_threadIdFromLastBuild;
}

+ (id)builderWithThread:(id)arg1;
+ (id)builder;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *threadIdFromLastBuild; // @synthesize threadIdFromLastBuild=_threadIdFromLastBuild;
- (_Bool)_validateThreadProperties;
- (id)withMessageIslandRange:(id)arg1;
- (id)withThreadMessagesRange:(id)arg1;
- (id)withUnseenVisualMessageServerCount:(unsigned long long)arg1;
- (id)withLastVisualMessageTimeStamp:(id)arg1;
- (id)withUnseenVisualMessageItemRange:(id)arg1;
- (id)withMostRecentUnseenVisualMessageCursor:(id)arg1;
- (id)withOldestUnseenVisualMessageCursor:(id)arg1;
- (id)withOldestReplayableVisualMessageCursor:(id)arg1;
- (id)withPublishedMessages:(id)arg1;
- (id)withPublishedMessageSet:(id)arg1;
- (id)withMetadata:(id)arg1;
- (id)withViewerId:(id)arg1;
- (id)withThreadIdV2ForInboxPaging:(id)arg1;
- (id)withThreadId:(id)arg1;
- (void)_calculateAndSaveMessagesInCurrentThreadRangeIfNecessary;
- (id)build;
- (id)_initWithThread:(id)arg1;

@end

