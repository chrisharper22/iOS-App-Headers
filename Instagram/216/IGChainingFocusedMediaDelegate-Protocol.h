//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemChain, IGMedia;
@protocol IGListDiffable;

@protocol IGChainingFocusedMediaDelegate <NSObject>
- (void)entryPoint:(id <IGListDiffable>)arg1 didUpdateFocusedMedia:(IGMedia *)arg2 forFeedItemChain:(IGFeedItemChain *)arg3;
@end

