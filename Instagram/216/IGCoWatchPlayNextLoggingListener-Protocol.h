//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol IGCoWatchableMedia;

@protocol IGCoWatchPlayNextLoggingListener <NSObject>
- (void)playNextHScrollImpression;
- (void)playNextChainingImpressionForMediaId:(NSString *)arg1;
- (void)playNextHScrollBeginScrolling;
- (void)cowatchPlayNextEndReached;
- (void)cowatchPlayNextDidSelectMedia:(id <IGCoWatchableMedia>)arg1 tabSource:(NSString *)arg2 itemIndex:(unsigned long long)arg3;
@end

