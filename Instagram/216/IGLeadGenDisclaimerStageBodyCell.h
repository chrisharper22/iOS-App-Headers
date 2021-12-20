//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGLeadGenCollectionViewDynamicSizingCell-Protocol.h"

@class IGCoreTextView, NSString;
@protocol IGLeadGenDisclaimerStageSecureSharingLinkDelegate;

@interface IGLeadGenDisclaimerStageBodyCell : UICollectionViewCell <IGCoreTextLinkHandler, IGLeadGenCollectionViewDynamicSizingCell>
{
    IGCoreTextView *_paragraph;
    id <IGLeadGenDisclaimerStageSecureSharingLinkDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGLeadGenDisclaimerStageSecureSharingLinkDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)dynamicSizeWithConstrainingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithModel:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
