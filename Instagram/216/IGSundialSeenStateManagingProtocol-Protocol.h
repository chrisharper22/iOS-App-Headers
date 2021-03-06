//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol IGSundialSeenStateManagingProtocol <NSObject>
- (_Bool)haveSeenMedia:(NSString *)arg1;
- (void)appendSeenState:(NSSet *)arg1;
- (void)flushDidSucceedForMediaIds:(NSSet *)arg1;
- (NSSet *)flushSeenState;
- (void)uploadSeenStateIfNecessary;
- (void)trackVideoWithMediaIdAsSeen:(NSString *)arg1;
@end

