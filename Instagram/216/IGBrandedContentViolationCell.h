//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGAttributedStringTextViewDelegate-Protocol.h"

@class IGAttributedStringTextView, NSString;
@protocol IGBrandedContentViolationCellDelegate;

@interface IGBrandedContentViolationCell : UICollectionViewCell <IGAttributedStringTextViewDelegate>
{
    IGAttributedStringTextView *_bannerView;
    id <IGBrandedContentViolationCellDelegate> _delegate;
}

+ (double)heightWithContainerWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBrandedContentViolationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributedStringTextView:(id)arg1 didTapLink:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

