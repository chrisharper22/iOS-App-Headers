//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGChainingFeedViewController, IGFeedItemChain, IGMedia, NSString;

@protocol IGChainingFeedViewControllerDelegate <NSObject>
- (void)chainingFeedViewController:(IGChainingFeedViewController *)arg1 didUpdateFocusedMedia:(IGMedia *)arg2 forFeedItemChain:(IGFeedItemChain *)arg3;
- (void)chainingFeedViewController:(IGChainingFeedViewController *)arg1 didUpdateScrollState:(unsigned long long)arg2;
- (void)chainingFeedViewController:(IGChainingFeedViewController *)arg1 didRetrieveChainingPaginationToken:(NSString *)arg2;
- (void)chainingFeedViewControllerDidShowPill:(IGChainingFeedViewController *)arg1;
- (double)chainingFeedViewControllerAdditionalBottomInsetForPill:(IGChainingFeedViewController *)arg1;
- (_Bool)chainingFeedViewControllerShouldShowPill:(IGChainingFeedViewController *)arg1;
@end
