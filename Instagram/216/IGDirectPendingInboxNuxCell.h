//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGAttributedStringTextViewDelegate-Protocol.h"

@class IGAttributedStringTextView, IGAttributedStringTextViewConfiguration, NSAttributedString, NSString;
@protocol IGDirectPendingInboxNuxCellDelegate;

@interface IGDirectPendingInboxNuxCell : UICollectionViewCell <IGAttributedStringTextViewDelegate>
{
    IGAttributedStringTextView *_textView;
    IGAttributedStringTextViewConfiguration *_textViewConfig;
    NSAttributedString *_attributedString;
    id <IGDirectPendingInboxNuxCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)attributedStringTextView:(id)arg1 didTapLink:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

