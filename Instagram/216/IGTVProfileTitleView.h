//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGChevronTitleButton, UIImageView;
@protocol IGTVProfileTitleViewDelegate;

@interface IGTVProfileTitleView : UIView
{
    id <IGTVProfileTitleViewDelegate> _delegate;
    IGChevronTitleButton *_usernameButton;
    UIImageView *_verifiedImageView;
}

- (void).cxx_destruct;
- (void)_usernameButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)updateTintColor:(id)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;

@end

