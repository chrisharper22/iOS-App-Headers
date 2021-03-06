//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGSessionActivityBottomMapViewControllerDelegate-Protocol.h"
#import "IGSessionActivityBottomSheetMapViewControllerDelegate-Protocol.h"
#import "IGSessionActivityListInfoCellDelegate-Protocol.h"

@class IGSessionActivityInfoModel, IGUserSession, NSString;
@protocol IGSessionActivityListInfoSectionControllerDelegate;

@interface IGSessionActivityListInfoSectionController : IGListSectionController <IGSessionActivityListInfoCellDelegate, IGSessionActivityBottomMapViewControllerDelegate, IGSessionActivityBottomSheetMapViewControllerDelegate>
{
    IGSessionActivityInfoModel *_viewModel;
    IGUserSession *_userSession;
    id <IGSessionActivityListInfoSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSessionActivityListInfoSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionActivityBottomSheetMapViewControllerDidLogoutSessionActivity:(id)arg1;
- (void)sessionActivityBottomMapViewControllerDidLogoutSessionActivity:(id)arg1;
- (void)sessionActivityListInfoCellDidTapOnMoreButton:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithViewModel:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

