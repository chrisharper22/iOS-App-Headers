//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGVideoShareSheetCreateFundraiserCellDelegate-Protocol.h"
#import "IGVideoShareSheetDraftFundraiserCellDelegate-Protocol.h"

@class NSString;
@protocol IGVideoShareSheetCreateFundraiserSectionControllerDelegate;

@interface IGVideoShareSheetCreateFundraiserSectionController : IGListGenericSectionController <IGVideoShareSheetCreateFundraiserCellDelegate, IGVideoShareSheetDraftFundraiserCellDelegate>
{
    id <IGVideoShareSheetCreateFundraiserSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoShareSheetCreateFundraiserSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)videoShareSheetCreateFundraiserCellDidSelectCancel:(id)arg1;
- (void)videoShareSheetCreateFundraiserCellDidSelectFundraiserRow:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

