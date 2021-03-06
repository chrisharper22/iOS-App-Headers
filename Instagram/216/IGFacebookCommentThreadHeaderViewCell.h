//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGListBindable-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol IGFacebookCommentThreadHeaderDelegate;

@interface IGFacebookCommentThreadHeaderViewCell : UICollectionViewCell <IGListBindable>
{
    UIImageView *_facebookIcon;
    UILabel *_title;
    UIView *_containerView;
    UIButton *_settingsButton;
    id <IGFacebookCommentThreadHeaderDelegate> _delegate;
}

+ (double)heightForHeaderViewCell;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFacebookCommentThreadHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapMoreButton;
- (void)bindViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

