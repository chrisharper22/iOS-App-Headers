//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFacebookXpostingLikeSheetUpsellCellDelegate-Protocol.h"

@class IGMedia, IGShareListManager, IGUserSession, IGXpostingToFbFeedOneTapHelper, IGXpostingToFbLogger, NSString;
@protocol IGFacebookXpostingLikeSheetUpsellSectionDelegate;

@interface IGFacebookXpostingLikeSheetUpsellSectionController : IGListSectionController <IGFacebookXpostingLikeSheetUpsellCellDelegate>
{
    id <IGFacebookXpostingLikeSheetUpsellSectionDelegate> _delegate;
    IGMedia *_media;
    IGShareListManager *_shareListManager;
    IGUserSession *_userSession;
    IGXpostingToFbLogger *_xpostingLogger;
    IGXpostingToFbFeedOneTapHelper *_xPostingFeedHelper;
}

- (void).cxx_destruct;
- (void)_sharePost;
- (void)_fetchDestinationAndSharePost;
- (void)didTapShareButton;
- (void)didTapCloseButton;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
