//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "FXIGStoryShareToFBCellDelegate-Protocol.h"

@class IGUserSession, NSString, UIViewController;
@protocol FXIGStoryShareToFBSectionControllerDelegate;

@interface FXIGStoryShareToFBSectionController : IGListSectionController <FXIGStoryShareToFBCellDelegate>
{
    UIViewController *_viewController;
    IGUserSession *_userSession;
    id <FXIGStoryShareToFBSectionControllerDelegate> _delegate;
    _Bool _areAccountsLinked;
    _Bool _showOnlyForUnlinked;
    _Bool _showACSetUpButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showACSetUpButton; // @synthesize showACSetUpButton=_showACSetUpButton;
@property(nonatomic) _Bool showOnlyForUnlinked; // @synthesize showOnlyForUnlinked=_showOnlyForUnlinked;
@property(nonatomic) _Bool areAccountsLinked; // @synthesize areAccountsLinked=_areAccountsLinked;
- (void)_logFxUpsellsProductEvent:(int)arg1;
- (int)_getLoggingFlowEntryPoint;
- (void)hideFXACUpsellView;
- (void)tapsFXShareButton;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithViewController:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

