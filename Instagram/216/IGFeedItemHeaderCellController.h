//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFeedItemCellController.h>

#import "IGFeedItemHeaderControllerUpdateProvider-Protocol.h"
#import "IGPresenceManagerListener-Protocol.h"

@class IGFeedItemHeaderController, IGUserPresenceUpdate, NSString;
@protocol IGFeedSectionViewsProvider, IGFeedTheme;

@interface IGFeedItemHeaderCellController : IGFeedItemCellController <IGFeedItemHeaderControllerUpdateProvider, IGPresenceManagerListener>
{
    id <IGFeedSectionViewsProvider> _feedSectionViewsProvider;
    id <IGFeedTheme> _feedTheme;
    IGFeedItemHeaderController *_headerController;
    IGUserPresenceUpdate *_lastPresenceUpdate;
}

+ (Class)collectionViewCellClass;
- (void).cxx_destruct;
- (void)presenceManager:(id)arg1 didReceiveThreadPresenceUpdates:(id)arg2;
- (void)presenceManager:(id)arg1 didReceiveSnapshot:(id)arg2;
- (void)presenceManager:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)feedItemHeaderControllerReconfigureHeaderView:(id)arg1;
- (id)feedItemHeaderControllerCurrentAvatarView;
- (void)handleUserTap;
- (void)cancelStoryFetch;
- (_Bool)_isActiveNowEnabled;
- (id)_configureViewModelWithActiveIndicator:(id)arg1;
- (void)configureCell:(id)arg1;
- (struct CGSize)sizeForWidth:(double)arg1;
- (id)_headerCell;
- (id)initWithSectionContext:(id)arg1 feedItemSectionContext:(id)arg2 feedSectionViewsProvider:(id)arg3 delegate:(id)arg4 navigationHelper:(id)arg5 feedTheme:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

