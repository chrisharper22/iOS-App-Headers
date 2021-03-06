//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class IGTapButton, IGTextView, NSString, UILabel;
@protocol IGGuideItemTitleCellDelegate;

@interface IGGuideItemTitleCell : UICollectionViewCell <UITextViewDelegate>
{
    UILabel *_numberLabel;
    IGTextView *_titleTextView;
    IGTapButton *_moreButton;
    id <IGGuideItemTitleCellDelegate> _delegate;
}

+ (double)preferredHeightWithTitleText:(id)arg1 inWidth:(double)arg2 showNumberLabel:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideItemTitleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)_moreButtonTapped;
- (void)configureWithListPosition:(long long)arg1 title:(id)arg2 placeholder:(id)arg3 editable:(_Bool)arg4 shouldDisplayMoreButton:(_Bool)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

