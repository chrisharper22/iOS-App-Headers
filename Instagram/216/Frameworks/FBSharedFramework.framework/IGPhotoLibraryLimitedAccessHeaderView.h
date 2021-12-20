//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UILabel;
@protocol IGPhotoLibraryLimitedAccessHeaderViewDelegate;

@interface IGPhotoLibraryLimitedAccessHeaderView : UIView
{
    id <IGPhotoLibraryLimitedAccessHeaderViewDelegate> _delegate;
    UILabel *_label;
    IGTapButton *_manageButton;
}

- (void).cxx_destruct;
- (void)_computeLayoutForSize:(struct CGSize)arg1 frameBlock:(CDUnknownBlockType)arg2;
- (void)_manageButtonTapped;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;

@end

