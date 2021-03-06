//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGPromoteTitleSubtitleCellDelegate-Protocol.h"

@class NSString;
@protocol IGPromoteTitleSubtitleSectionControllerDelegate;

@interface IGPromoteTitleSubtitleSectionController : IGListGenericSectionController <IGPromoteTitleSubtitleCellDelegate>
{
    id <IGPromoteTitleSubtitleSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteTitleSubtitleSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)promoteTitleSubtitleCell:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)promoteTitleSubtitleCellDidTapCellTitle:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

