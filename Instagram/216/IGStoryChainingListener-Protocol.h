//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol IGStoryChainingListener;

@protocol IGStoryChainingListener <NSObject>
- (void)storyChainingListener:(id <IGStoryChainingListener>)arg1 didFailLoadReelsWithErrorMessage:(NSString *)arg2;
- (void)storyChainingListener:(id <IGStoryChainingListener>)arg1 didLoadReels:(NSArray *)arg2;
@end

