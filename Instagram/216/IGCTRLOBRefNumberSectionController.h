//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGCTRLTextButtonCellDelegate-Protocol.h"

@class NSString;
@protocol IGCTRLOBRefNumberSectionControllerDelegate;

@interface IGCTRLOBRefNumberSectionController : IGListGenericSectionController <IGCTRLTextButtonCellDelegate>
{
    id <IGCTRLOBRefNumberSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCTRLOBRefNumberSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ctrlImageTextCellDidTapButton:(id)arg1;
- (void)ctrlImageTextCellDidTapView:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

