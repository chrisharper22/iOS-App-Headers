//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface IGStoryConsumedMediaTracker : NSObject
{
    NSMutableSet *_consumedMediaIDInCurrentSession;
    NSMutableSet *_seenAdOrNetegoReelIDInCurrentSession;
    long long _consumedMediaCountSincePreviousAdImpression;
    long long _consumedMediaCountSincePreviousNetegoImpression;
    NSString *_previouslySeenAdReelID;
    NSString *_previouslySeenNetegoReelID;
    NSString *_lastInsertedAdOrNetegoReelID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastInsertedAdOrNetegoReelID; // @synthesize lastInsertedAdOrNetegoReelID=_lastInsertedAdOrNetegoReelID;
- (void)resetConsumedMediaCounterAndLastSeenAdOrNetegoReelID:(id)arg1;
- (long long)reelGapSincePreviousItemType:(unsigned long long)arg1 endPosition:(long long)arg2 entryPosition:(long long)arg3 allStoryViewModels:(id)arg4 shouldOnlySearchForItemBeforeCurrentIndex:(_Bool)arg5;
- (_Bool)hasSeenAdOrNetegoReelID:(id)arg1;
- (id)previouslySeenReelIDWithItemType:(unsigned long long)arg1;
- (long long)consumedMediaCountSincePreviousItemType:(unsigned long long)arg1;
- (void)trackConsumedMedia:(id)arg1;
- (id)init;

@end

